CXX=g++
CXXFLAGS=-g -std=c++11 -Wall -pedantic -lpthread
BIN=example

SRC=$(wildcard *.cpp)
OBJ=$(SRC:%.cpp=%.o)

all: $(OBJ)
	    $(CXX) -o $(BIN) $^ $(CXXFLAGS)

%.o: %.c
	    $(CXX) $@ -c $<

clean:
	    rm -f *.o
		rm $(BIN)
