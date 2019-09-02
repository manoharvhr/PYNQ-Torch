#include <ap_axi_sdata.h> // Needed for Fixed-point datatype

// Constants
#define SIZE 64
#define W_SIZE 192*SIZE
#define B_SIZE 3*SIZE
#define OFST1 2*SIZE
#define OFST2 OFST1+W_SIZE
#define OFST3 OFST2+W_SIZE
#define OFST4 OFST3+B_SIZE
#define TOT_INPUT OFST4+B_SIZE
#define TOT_OUTPUT B_SIZE

// Structure for stream items
struct datatype {
  float data;
  bool last;
};

typedef ap_fixed<32,16> stream_fixed_type; // Fixed-point datatype of FIX_32_16

void sampleRNN_GRU(datatype input[TOT_INPUT], datatype output[2*TOT_OUTPUT]) {
#pragma HLS INTERFACE ap_ctrl_none port=return // No block-level protocol
#pragma HLS INTERFACE axis port=input // Declaring I/O as stream
#pragma HLS INTERFACE axis port=output

	// Variables
	int i, j, counter;
	stream_fixed_type x[SIZE], h0[SIZE], temp1;
	stream_fixed_type mult_temp[TOT_OUTPUT], out1[2*TOT_OUTPUT] = {}, mult_temp2[TOT_OUTPUT];
	stream_fixed_type w_ih[W_SIZE], b_ih[B_SIZE], w_hh[W_SIZE],  b_hh[B_SIZE];
	bool last[2*TOT_OUTPUT] = {};
	last[2*TOT_OUTPUT-1] = true; // Setting the last flag HIGH for the last element

	// The following loops are segregating the data from the stream into their respective variables
	for (i = 0; i < SIZE; i++) {
#pragma HLS PIPELINE
		x[i] = input[i].data;
	}

	for (i = 0; i < SIZE; i++) {
#pragma HLS PIPELINE
		h0[i] = input[i+SIZE].data;
	}

	for (i = 0; i < W_SIZE; i++) {
#pragma HLS PIPELINE
		w_ih[i] = input[i+OFST1].data;
	}

	for (i = 0; i < W_SIZE; i++) {
#pragma HLS PIPELINE
		w_hh[i] = input[i+OFST2].data;
	}

	for (i = 0; i < B_SIZE; i++) {
#pragma HLS PIPELINE
		b_ih[i] = input[i+OFST3].data;
	}

	for (i = 0; i < B_SIZE; i++) {
#pragma HLS PIPELINE
		b_hh[i] = input[i+OFST4].data;
	}

	// Loop performing 2 matrix multiplications and vector additions
	counter = 0;
	for (i = 0; i < TOT_OUTPUT; i++) {
		mult_temp[i] = 0; // Make sure the values are zero initially
		mult_temp2[i] = 0;
		for (j = 0; j < SIZE; j++) {
#pragma HLS UNROLL factor=16 // Matrix multiplication
			mult_temp[i] = mult_temp[i] + (w_ih[counter] * x[j]);
			mult_temp2[i] = mult_temp2[i] + (w_hh[counter] * h0[j]);
			counter++;
		}
		out1[i] = mult_temp[i] + b_ih[i]; // Vector addition
		out1[i+TOT_OUTPUT] = mult_temp2[i] + b_hh[i];
	}

	// Send output to the stream
	for (i = 0; i < 2*TOT_OUTPUT; i++) {
#pragma HLS PIPELINE
		output[i].data = out1[i];
		output[i].last = last[i];
	}

}
