calc:
	g++ calc.cc -o calc
	./calc
tempcalc:
	g++ tempcalc.cc -o tempcalc
	./tempcalc
testbuild:test.cc
	@echo building testrun...
	g++ test.cc -o testbin
testrun:testbuild
	./testbin 23
clean:
	rm -f testbin
	rm -f *.o
	rm -f *~  
all:clean testrun
.PHONY:calc tempcalc

