all:calc tempcalc testbuild testrun clean

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
	rm -f testbin calc tempcalc
	rm -f *.o
	rm -f *~  
.PHONY:calc tempcalc
