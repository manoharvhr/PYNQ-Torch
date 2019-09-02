/* Same as the code for  v dimension: 64x64x1 & g dimension: 64x1x1.
 * But now the Constants are set to v dimension: 256x641 & g dimension: 256x1x1.
 * The UNROLLING factors have also changed.
 */

#include <ap_axi_sdata.h>
#include "hls_math.h"

#define G_SIZE 			256
#define V_LAYERS 		256
#define V_ROWS 			64
#define V_COL 			1
#define V_SIZE 			V_LAYERS*V_ROWS*V_COL
#define TOT_INPUT 		G_SIZE+V_SIZE

struct datatype {
  float data;
  bool last;
};

typedef ap_fixed<32,16> fixed2;

void compute_weight_64_256_16(datatype input[TOT_INPUT], datatype output[V_SIZE]) {
#pragma HLS INTERFACE ap_ctrl_none port=return
#pragma HLS INTERFACE axis port=input
#pragma HLS INTERFACE axis port=output


	fixed2 norm[G_SIZE] = {}, v_in[V_SIZE], output_temp[V_SIZE];
	int i, j, k, counter, counter2;
	bool last[V_SIZE] = {};
	last[V_SIZE-1] = true;

	for (i = 0; i < V_SIZE; i++) {
#pragma HLS PIPELINE
		v_in[i] = input[i].data;
	}

	counter = 0;
	counter2 = 0;
	for (i = 0; i < G_SIZE; i++) {
		norm[i] = 0;
		for (j = 0; j < V_ROWS*V_COL; j++) {
#pragma HLS UNROLL factor=16 // Same as the other design
			norm[i] = norm[i] + (v_in[i] * v_in[i]);
			counter++;
		}
		norm[i] = ((fixed2)input[V_SIZE+i].data) / hls::sqrt(norm[i]);
		for (j = 0; j < V_ROWS*V_COL; j++) {
#pragma HLS UNROLL factor=64 // Unrolled completely
			output_temp[counter2] = v_in[counter2] * norm[i];
			counter2++;
		}
	}

	for (i = 0; i < V_SIZE; i++) {
#pragma HLS PIPELINE
		output[i].data = output_temp[i];
		output[i].last = last[i];
	}

}
