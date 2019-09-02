#include <ap_axi_sdata.h>

#define BATCH_SIZE 32
#define DEGREE 5

struct my_data {
  float data;
  bool last;
};

typedef ap_fixed<32,16> stream_fixed_type;

void equation_matrix(my_data input[BATCH_SIZE], my_data output[BATCH_SIZE][DEGREE]) {
#pragma HLS INTERFACE axis port=input
#pragma HLS INTERFACE axis port=output
#pragma HLS INTERFACE ap_ctrl_none port=return

	stream_fixed_type dataOut[BATCH_SIZE][DEGREE], temp, dataIn[BATCH_SIZE];
	bool dataOut_last[BATCH_SIZE][DEGREE];
	dataOut_last[31][4] = 1;

	for (int i = 0; i < BATCH_SIZE; i++) {
#pragma HLS unroll
		dataIn[i] = input[i].data;
	}

	for (int i = 0; i < BATCH_SIZE; i++) {
#pragma HLS unroll
		dataOut[i][0] = dataIn[i];
	}

	for (int i = 0; i < BATCH_SIZE; i++) {
#pragma HLS unroll
		dataOut[i][1] = (dataIn[i] * dataIn[i]);
	}

	for (int i = 0; i < BATCH_SIZE; i++) {
#pragma HLS unroll
		dataOut[i][2] = (dataOut[i][1] * dataIn[i]);
	}

	for (int i = 0; i < BATCH_SIZE; i++) {
#pragma HLS unroll
		dataOut[i][3] = (dataOut[i][2] * dataIn[i]);
	}

	for (int i = 0; i < BATCH_SIZE; i++) {
#pragma HLS unroll
		dataOut[i][4] = (dataOut[i][3] * dataIn[i]);
	}

	for (int i = 0; i < BATCH_SIZE; i++) {
		for (int j = 0; j < DEGREE; j++) {
#pragma HLS PIPELINE
			output[i][j].data = dataOut[i][j];
			output[i][j].last = dataOut_last[i][j];
		}
	}
}
