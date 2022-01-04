#ifndef __FONCTIONS_H__
#define __FONCTIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

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
int lectureregistre(char line[32],int i,int registre[32][32]);
int *createregistre();

#endif
