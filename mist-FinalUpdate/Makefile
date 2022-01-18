CC = gcc
FLAGS = -lm -g
OBJECTS = main.o fonctions.o convertion.o trad_operation.o registre.o memory.o

all: $(OBJECTS)
	$(CC) $(OBJECTS) -lm -o main

main.o: main.c 
	$(CC) $(FLAGS) -c main.c 

fonctions.o: fonctions.c 
	$(CC) $(FLAGS) -c fonctions.c


convertion.o: convertion.c 
	$(CC) $(FLAGS) -c convertion.c

trad_operation.o: trad_operation.c 
	$(CC) $(FLAGS) -c trad_operation.c

registre.o: registre.c 
	$(CC) $(FLAGS) -c registre.c

memory.o: memory.c 
	$(CC) $(FLAGS) -c memory.c
