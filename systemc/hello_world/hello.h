/*
 * hello.h
 *
 *  Created on: Mar 3, 2016
 *      Author: karibe
 */

#ifndef HELLO_H_
#define HELLO_H_
#include "systemc.h"

SC_MODULE(hello){
	//sc_in<sc_uint<1> > in; //input port example
	//sc_out<sc_uint<1> > out; //output port example

	void proc(void){// a process
		SC_REPORT_INFO(1,"Hello SystemC World!");
	}

	SC_CTOR(hello){//constructor
		SC_METHOD(proc);//binding a process to the kernel
		//sensitive<<in;//process sensitive to input port
		//dont_initialize();//avoid running during object instantiation
	}
	~hello(){//destructor
		//delete stuff
	}
};
#endif /* HELLO_H_ */
