all: BrazoRoboticoTest

BrazoRoboticoTest: main.o BrazoRobotico.o
	g++ -o BrazoRoboticoTest main.o BrazoRobotico.o

main.o: main.cpp BrazoRobotico.h
	g++ -c main.cpp

BrazoRobotico.o: BrazoRobotico.cpp BrazoRobotico.h
	g++ -c BrazoRobotico.cpp

test: BrazoRoboticoTest
	./BrazoRoboticoTest

clean:
	rm -f main.o BrazoRobotico.o BraxoRoboticoTest
