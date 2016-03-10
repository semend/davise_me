
all:calc tempcalc testrun

calc:calc.cc calc.h
	g++ calc.cc -o calc
	./calc

tempcalc:tempcalc.cc tempcalc.h
	g++ tempcalc.cc -o tempcalc
	./tempcalc

testrun:test.cc
	g++ test.cc -o testrun
	./testrun

.PHONY: build calc tempcalc test1

clean:
	rm -f *~
	rm -f *.o
	rm -f testrun
	rm -f tempcalc
	rm -f calc
