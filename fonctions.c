#include "fonction.h"


int add(char *T, int n){
  int B[32];
  int j;
  int i;
  int k=n;
  int decimal;
  int bin_temp1[5];
  char *temp;
  int constant = 0;
  int compteur2 = 0;
  int sum = 0;
	

  for(j=0; j<32; j++){
    B[j]=0;
  }

  B[26] = 1;
  for(i=1;i<4;i++){
    int compteur1 = 0;
    k = k+1;
    while(T[k] != ' '){
      temp[compteur1] = T[k];
      compteur1++;
  }

  for(j=0;j<5;j++){
    bin_temp1[j] = 0;
  }

  if(temp[0] == '$'){
    decimal = (int)temp[1];
    decimal = decimal - 48;
    /*decimal = atoi(temp[1]);*/ /* convertir char en int */
    while(decimal/2 == 0){
      bin_temp1[constant+j] = decimal%2;
      j--;
    }
    if(i==1){
      compteur2 = 0;
      for(j=16;j<21;j++){
        B[j] = bin_temp1[compteur2];
        compteur2++;
      }
    }
    else if(i==2){
      compteur2 = 0;
      for(j=6;j<11;j++){
        B[j] = bin_temp1[compteur2];
        compteur2++;
      }
    }
    else{
      compteur2 = 0;
      for(j=11;j<16;j++){
        B[j] = bin_temp1[compteur2];
        compteur2++;
      }
    }
  }
  }
  compteur2 = 0;
  for(j=31;j>=0;j--){
	
    sum += B[j]*pow(2,compteur2);
    compteur2++;
  }
  return sum;
}
