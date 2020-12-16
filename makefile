#Makefile for "imd0030" C++ application
#Created by Werdeles Marcio 16/12/2020

BIN = ./bin
SRC = ./src
INC = ./lib

PROG = $(BIN)/programa
CC = g++
CPPFLAGS = -Wall -std=c++11 -I./include

OBJS = $(BIN)/teste.o $(BIN)/funcionario.o 

all : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

debug: CPPFLAGS += -DDEBUG -g -O0
debug: clean all

$(BIN)/teste.o : $(SRC)/teste.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/teste.cpp -o $@
$(BIN)/funcionario.o : $(SRC)/funcionario.cpp $(INC)/funcionario.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/funcionario.cpp -o $@
clean:
	rm -f core $(PROG) $(OBJS)
