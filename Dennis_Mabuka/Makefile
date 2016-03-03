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

buildall:clean tempcalc calc test

all:clean testrun calc test tempcalcc
.PHONY:calc tempcalc

