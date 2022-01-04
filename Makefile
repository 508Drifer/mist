CC = gcc
FLAGS = -lm -g
OBJECTS = main.o fonctions.o registres.o

all: $(OBJECTS)
	$(CC) $(OBJECTS) -lm -o main

main.o: main.c 
	$(CC) $(FLAGS) -c main.c 

fonctions.o: fonctions.c 
	$(CC) $(FLAGS) -c fonctions.c

registres.o: registres.c 
	$(CC) $(FLAGS) -c registres.c

