
objects= calc tempcalc test

build: $(objects)

calc:calc.cc calc.h
	g++ calc.cc -o calc
	./calc

tempcalc:tempcalc.cc tempcalc.h
	g++ tempcalc.cc -o tempcalc
	./tempcalc

test:test.cc
	g++ test.cc -o test1
	./test1

.PHONY: build calc tempcalc test1

clean:
	rm -f *~
	rm -f *.o
	rm -f test1	
	rm -f tempcalc
	rm -f calc

