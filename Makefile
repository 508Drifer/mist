CC = gcc
FLAGS = -Wall -ansi -pedantic -lm -g
OBJECTS = main.o fonctions.o 

all: $(OBJECTS)
	$(CC) $(OBJECTS) -lm -o main

main.o: main.c 
	$(CC) $(FLAGS) -c main.c 

fonctions.o: fonctions.c 
	$(CC) $(FLAGS) -c fonctions.c
