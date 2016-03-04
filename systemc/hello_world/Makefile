all: hello
hello:hello.cc
	@echo 'building file: $(@F)'
	$(CXX) -I/usr/local/systemc-2.3.1/include -O0 -g3 -Wall -c hello.cc
	$(CXX) -L/usr/local/systemc-2.3.1/lib-linux64 -o "hello" hello.o -lsystemc
	./hello
	
.PHONY: hello
