REG. No.: I39/31185/2014 ::: Name: Davis Seme
================================================================
2b4 Decoder
Task description

In this 2by4 decoder we focused testing the decoder by adding a testbench module for this 2by4 combinational circuit.

 1. We created the following files : decoder_tb.cc as our testbench with driver functionality for testing decoder_2by4.cc & .h modules
 2. Modified the makefile so as to recompile only the one source file that changed into an object file and relinked all of the object
    files in the program to form the executable

The Decoder
-----------------------------------------------------------------
Decoders have usually N inputs and a maximum of 2N outputs. For example, samples of decoders can be 1 to 2, 2 to 4 and 3 to 8 decoder. Table 1 shows the truth table for a 2 to 4 decoder. As it can be seen each combination of input bits (A and B) generate a unique output (D0, D1, D2, D3), which is a maximum of 4 different combinations. 

In each line of the truth table, only one output bit with the value of "logic one" can be found. As a summary, in a decoder, a binary number comes as input and essentially chooses which wire on the output to send a signal with the value "one" on it. A decoder can also have an enable input, such as this one - 2b4 decoder, Whenever enable=0, all outputs would be zero and whenever enable=1, the decoder works normally. One usage of decoder is in decoding addresses for memory access.

Table 1. Truth table for a 2 to 4 decoder
===========================================
A 	B 	D0 	D1 	D2 	D3
0 	0 	1 	0 	0 	0
0 	1 	0 	1 	0 	0
1 	0 	0 	0 	1 	0
1 	1 	0 	0 	0 	1

There is a Shift Register, a 2 to 4 decoder with enable input
Tasks
In this systemc simulation, first we started with the design of a 2 to 4 decoder with enable. We studied the logic of the decoder and how it works by reading the decoder_2by4.h and decoder_2by4.cc files. 

We then set a the TEST_BENCH for the 2 to 4 decoder provided in decoder_tb.cc. We made sure the logic of the decoder is written correctly.


We then compile the code with the following command below from the terminal to test:
    g++ -I. -I$SYSTEMC_HOME/include -L. -L$SYSTEMC_HOME/lib-linux64 -Wl,-rpath=$SYSTEMC_HOME/lib-linux64 -o decoder decoder_tb.cpp -lsystemc -lm .

The generated VCD output a waveform like the one shown in 2b4decoder_waves.png in GTKWave- This is Waveform for a 2 to 4 decoder in GTKWave 

SUMMARY
======
We created our design and also wrote a test-bench for the 2 to 4 decoder using the decoder_tb.ccc as template. We verified the design & visualizedthe signals using GTKWave. Made sure the decoder wasworking correctly and each input combination generated exactly only one active output (a unique output).

Thanks!

