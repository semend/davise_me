testbin:test.cc
	g++ test.cc -o testbin

calcbin:calc.cc
	g++ calc.cc -o calcbin
	
tempbin:tempcalc.cc
	g++ tempcalc.cc -o tempbin
	
	@echo --------OUTPUT OF TEST.CC--------
	./testbin
	@echo -------OUTPUT OF CALC.CC---------
	./calcbin
	@echo -------OUTPUT OF TEMPCALC.CC--------
	./tempbin

clean:testbin calcbin tempbin
	rm -f calcbin
	rm -f testbin
	rm -f tempbin
	rm -f *.o
	rm -f *~
all:clean testbin calcbin tempbin

.PHONY:testbin calcbin tempbin
