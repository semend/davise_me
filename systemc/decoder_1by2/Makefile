GTKWAVE:=$(which gtkwave)

all: decoder

decoder:prerequisites decoder.cc
	@echo 'building file $(@F)'
	$(CXX) -I/usr/local/systemc-2.3.1/include -O0 -g3 -Wall -c decoder_1by2.cc
	$(CXX) -L/usr/local/systemc-2.3.1/lib-linux64 -o "decoder" decoder_1by2.o -lsystemc
	./decoder
	gtkwave -c 4 timing_diagram.vcd

prerequisites: 
ifneq "$(GTKWAVE)" "/usr/bin/gtkwave"
	@echo 'installing gtkwave, please be patient'
	sudo apt-get install -y gtkwave
endif
.PHONY: decoder
