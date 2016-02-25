#compile:test.cc
	#g++ -c test.cc
#objectfile:test.o
	#g++ test.o -o gitau
	
#run:
	#./gitau

#how to compile test.cc and test.o at the same time..g++ test.cc -o gitau


calc:calc.cc
	g++ calc.cc -o calculator
	./calculator
tempcalc:tempcalc.cc
	g++ tempcalc.cc -o tempcalculator
	./tempcalculator
testrun:test.cc
	@echo building test.cc
	g++ test.cc -o runtest
testrun2:testrun
	./runtest
clean:
	rm -f calculator
	rm -f tempcalculator
	rm -f *.o
	rm -f *~*
	rm -f runtest
.PHONY:calculator tempcalculator

#how to build and run  files with one make target
buildingall:
	g++ test.cc -o runtest
	g++ tempcalc.cc -o tempcalculator
	g++ calc.cc -o calculator

runningall:
	./runtest
	./tempcalculator
	./calculator
	




