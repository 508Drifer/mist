BIN = mist

OBJECTS=main.o fonction.o
CC=gcc

all: $(OBJECTS)
	$(CC) $(OBJECTS) -lm -o $(BIN)

main.o: main.c
	gcc -c main.c -Wall -ansi -pedantic -o main.o
	
fonction.o: fonction.c fonction.h
	gcc -c fonction.c -Wall -ansi -pedantic -o fonction.o

