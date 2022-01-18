#ifndef __FONCTIONS_H__
#define __FONCTIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

extern int registre[35];
extern int memory[224];

int add(char T[32], int n);
int addi(char T[32], int n);
int sub(char T[32], int n);
int mult(char T[32], int n);
int DIV(char T[32], int n);
int and(char T[32], int n);
int or(char T[32], int n);
int xor(char T[32], int n);
int slt(char T[32], int n);
int beq(char T[32], int n);
int bne(char T[32], int n);
int bgtz(char T[32], int n);
int blez(char T[32], int n);
int lui(char T[32], int n);
int sll(char T[32], int n);
int srl(char T[32], int n);
int nop(char T[32], int n);
int mfhi(char T[32], int n);
int mflo(char T[32], int n);
long lw(char T[32], int n);
long sw(char T[32], int n);
void hextobin(char line[32],int *bine,int j);
int trad_resultat(int *bine,int nombre_ligne,int registre[35],int memory[224]);
void lireregistre(int registre[35]);
void init_registre(int registre[35]);
int opADD(int *bine,int nombre_ligne,int registre[35]);
void ecriregistre(int registre[35],int numero,int valeur);
int lireunregistre(int registre[35],int numero);
void vidermemoir(int memory[224]);
void ecrirmemoire(int memory[224],int numero,int valeur);
int lireunecasememoire(int memory[224],int numero);
void lirememoir(int memory[224]);
int opAND(int *bine,int nombre_ligne,int registre[35]);
int opDIV(int *bine,int nombre_ligne,int registre[35]);
int opMFHI(int *bine,int nombre_ligne,int registre[35]);
int opMFLO(int *bine,int nombre_ligne,int registre[35]);
int opMULT(int *bine,int nombre_ligne,int registre[35]);
int opNOP(int *bine,int nombre_ligne,int registre[35]);
int opOR(int *bine,int nombre_ligne,int registre[35]);
int opSLL(int *bine,int nombre_ligne,int registre[35]);
int opSLT(int *bine,int nombre_ligne,int registre[35]);
int opSRL(int *bine,int nombre_ligne,int registre[35]);
int opSUB(int *bine,int nombre_ligne,int registre[35]);
int opXOR(int *bine,int nombre_ligne,int registre[35]);
int opADDI(int *bine,int nombre_ligne,int registre[35]);
int opBEQ(int *bine,int nombre_ligne,int registre[35]);
int opBGTZ(int *bine,int nombre_ligne,int registre[35]);
int opBLEZ(int *bine,int nombre_ligne,int registre[35]);
int opBNE(int *bine,int nombre_ligne,int registre[35]);
int opSW(int *bine,int nombre_ligne,int registre[35],int memory[224]);
int opLW(int *bine,int nombre_ligne,int registre[35],int memory[224]);
#endif
