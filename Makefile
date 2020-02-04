
all:run clean
run: circuit
	./circuit
circuit: main.o registor.o interface.o circuitSingle.o circuitInSeries.o circuitInParallel.o circuit.o analyser.o
	g++ -o circuit main.o registor.o interface.o circuitSingle.o circuitInSeries.o circuitInParallel.o circuit.o analyser.o
registor.o: registor.cpp register.h
	g++ -Wall -ggdb -std=c++11  -c registor.cpp
interface.o: interface.cpp interface.h
	g++ -Wall -ggdb -std=c++11  -c interface.cpp
circuitSingle.o: circuitSingle.cpp circuitSingle.h
	g++ -Wall -ggdb -std=c++11  -c circuitSingle.cpp
circuitInSeries.o: circuitInSeries.cpp circuitSeries.h
	g++ -Wall -ggdb -std=c++11  -c circuitInSeries.cpp
circuitInParallel.o: circuitInParallel.cpp circuitParallel.h
	g++ -Wall -ggdb -std=c++11  -c circuitInParallel.cpp
circuit.o: circuit.cpp circuit.h
	g++ -Wall -ggdb -std=c++11  -c circuit.cpp
analyser.o: analyser.cpp analyser.h
	g++ -Wall -ggdb -std=c++11  -c analyser.cpp

clean:
	-rm circuit  main.o registor.o interface.o circuitSingle.o circuitInSeries.o circuitInParallel.o circuit.o analyser.o $(wildcard *~)
