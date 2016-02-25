testbuild:calc.cc
	@echo building testrun..
	g++ calc.cc -o clc
testrun:testbuild
	./clc
tempcalc:
	g++ tempcalc.cc -o tempcalc
	./tempcalc
clean:
	rm -f clc
	rm -f calc
	rm -f tempcalc
	rm -f Greeting
	rm -f *.o
	rm -f *~
all:clean Greeting calc tempcalc
calc:
	g++ calc.cc -o calc
	./calc
Greeting:
	g++ sum.cc -o two
	./two
.PHONY: Greeting calc tempcalc
