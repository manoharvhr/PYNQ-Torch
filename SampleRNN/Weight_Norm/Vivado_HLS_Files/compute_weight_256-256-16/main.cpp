#include <ap_axi_sdata.h> // Needed for Fixed-point datatype.
#include "hls_math.h" // Needed for the square-root function.

// Constant definitions. Changing these allows the modification of the dimensions.
#define G_SIZE 			64
#define V_LAYERS 		64
#define V_ROWS 			64
#define V_COL 			1
#define V_SIZE 			V_LAYERS*V_ROWS*V_COL
#define TOT_INPUT 		G_SIZE+V_SIZE

// Structure to bring in items from the stream.
struct datatype {
  float data;
  bool last;
};

typedef ap_fixed<32,16> fixed2; // Fixed-point datatype FIX_32_16

void compute_weight_2(datatype input[TOT_INPUT], datatype output[V_SIZE]) {
#pragma HLS INTERFACE ap_ctrl_none port=return // No block-level protocol
#pragma HLS INTERFACE axis port=input // Declaring the I/O as stream
#pragma HLS INTERFACE axis port=output

	// Variable Declaration
	fixed2 norm[G_SIZE] = {}, v_in[V_SIZE], output_temp[V_SIZE];
	int i, j, k, counter, counter2;
	bool last[V_SIZE] = {};
	last[V_SIZE-1] = true; // Pre-setting the last variable's last element as HIGH.

	// Bringing in the input v.
	for (i = 0; i < V_SIZE; i++) {
#pragma HLS PIPELINE
		v_in[i] = input[i].data;
	}

	// Similar design to the software version created.
	counter = 0;
	counter2 = 0;
	for (i = 0; i < G_SIZE; i++) {
		norm[i] = 0; // Making sure it is zero before accumulating
		for (j = 0; j < V_ROWS*V_COL; j++) {
#pragma HLS UNROLL factor=16
			norm[i] = norm[i] + (v_in[i] * v_in[i]);
			counter++;
		}
		norm[i] = ((fixed2)input[V_SIZE+i].data) / hls::sqrt(norm[i]); // Using fixed-point square-root
		for (j = 0; j < V_ROWS*V_COL; j++) {
/* Since this accelerator is used in two scenarios, when it is alone, keep UNROLL factor at 32, otherwise 16.
 * Done since there is lack of space.
 */
#pragma HLS UNROLL factor=32
			output_temp[counter2] = v_in[counter2] * norm[i];
			counter2++;
		}
	}

	// Sending the data back out through the stream.
	for (i = 0; i < V_SIZE; i++) {
#pragma HLS PIPELINE
		output[i].data = output_temp[i];
		output[i].last = last[i];
	}

}
