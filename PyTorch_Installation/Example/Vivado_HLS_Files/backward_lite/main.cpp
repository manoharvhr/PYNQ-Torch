#include <ap_axi_sdata.h>

#define BATCH_SIZE 32
#define LIMIT2 64
#define LIMIT3 96
#define LIMIT4 128
#define DEGREE 5
#define RET_NUM DEGREE+1

struct datatype {
  float data;
  bool last;
};

typedef ap_fixed<32,16> stream_fixed_type;

void backward_lite(datatype in_stream[(2*BATCH_SIZE)+(BATCH_SIZE*DEGREE)], float& bias, float& w1, float& w2, float& w3, float& w4, float& w5) {
#pragma HLS INTERFACE ap_ctrl_none port=return
#pragma HLS INTERFACE axis port=in_stream
#pragma HLS INTERFACE axis port=out_stream
#pragma HLS INTERFACE s_axilite  port=bias
#pragma HLS INTERFACE s_axilite  port=w1
#pragma HLS INTERFACE s_axilite  port=w2
#pragma HLS INTERFACE s_axilite  port=w3
#pragma HLS INTERFACE s_axilite  port=w4
#pragma HLS INTERFACE s_axilite  port=w5

	stream_fixed_type dif, abs_dif, smooth_grad[BATCH_SIZE], batch_x_mat[BATCH_SIZE * DEGREE], nn_out_mat[BATCH_SIZE], batch_y_mat[BATCH_SIZE];
	stream_fixed_type bias_temp = 0, w1_temp = 0, w2_temp = 0, w3_temp = 0, w4_temp = 0, w5_temp = 0;
	int i;

	for (i = 0; i < BATCH_SIZE; i++) {
#pragma HLS PIPELINE
		nn_out_mat[i] = in_stream[i].data; // 0-31
	}

	for (i = BATCH_SIZE; i < LIMIT2; i++) {
#pragma HLS PIPELINE
		batch_y_mat[i-BATCH_SIZE] = in_stream[i].data; // 32-63
	}

	for (i = LIMIT2; i < 224; i++) {
#pragma HLS PIPELINE
		batch_x_mat[i-LIMIT2] = in_stream[i].data; // 64-223
	}

	for (i = 0; i < BATCH_SIZE; i++) {
#pragma HLS PIPELINE
		dif = nn_out_mat[i] - batch_y_mat[i];
		if (dif < 0) {
			abs_dif = -dif;
		} else {
			abs_dif = dif;
		}
		if (abs_dif < 1) {
			smooth_grad[i] = (stream_fixed_type)(1.0 / BATCH_SIZE) * dif;
		} else {
			smooth_grad[i] = (stream_fixed_type)(1.0 / BATCH_SIZE) * ( (dif) / (abs_dif) );
		}
	}

	for (i = 0; i < BATCH_SIZE; i++) {
		bias_temp = bias_temp + (stream_fixed_type)smooth_grad[i];
	}

	bias = bias_temp;

	for (i = 0; i < BATCH_SIZE; i++) {
		w1_temp = w1_temp + (stream_fixed_type)(smooth_grad[i] * batch_x_mat[i]); // 0-31
		w2_temp = w2_temp + (stream_fixed_type)(smooth_grad[i] * batch_x_mat[i+BATCH_SIZE]); // 32-63
		w3_temp = w3_temp + (stream_fixed_type)(smooth_grad[i] * batch_x_mat[i+LIMIT2]); // 64-95
		w4_temp = w4_temp + (stream_fixed_type)(smooth_grad[i] * batch_x_mat[i+LIMIT3]); // 96-127
		w5_temp = w5_temp + (stream_fixed_type)(smooth_grad[i] * batch_x_mat[i+LIMIT4]); // 128-159
	}

	w1 = w1_temp;
	w2 = w2_temp;
	w3 = w3_temp;
	w4 = w4_temp;
	w5 = w5_temp;
}
