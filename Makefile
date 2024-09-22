all: BrazoRobotico

BrazoRobotico.o: BrazoRobotico.cpp BrazoRobotico.h
        g++ -Wall -c BrazoRobotico.cpp

BrazoRobotico:  BrazoRobotico.o
        g++ BrazoRobotico.o -o BrazoRobotico
clean:
        rm -f *.o BrazoRobotico

test: all
        ./BrazoRobotico