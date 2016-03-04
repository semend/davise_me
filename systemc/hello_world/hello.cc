/*
 * main.cc
 *
 *  Created on: Mar 3, 2016
 *      Author: karibe
 */
#include "systemc.h"
#include"hello.h"

int sc_main(int argc, char **argv){
	sc_report_handler::set_actions("/IEEE_Std_1666/deprecated", SC_DO_NOTHING);

	hello myhello("hello");// create an instance of a module
	sc_start(10,SC_NS);// run a simulation session for 10ns
	return 0;
}


