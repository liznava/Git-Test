TARGETS=main
CXXFLAGS=--std=c++11
LD=g++
CC=g++

all: $(TARGETS)
main: Vector.o main.o
Vector.o: Vector.cpp Vector.h

clean:
	rm -f *.o $(TARGETS)
