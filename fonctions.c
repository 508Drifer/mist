#include "fonctions.h"


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
    while(T[k] != ' '){
      temp[compteur1] = T[k];
      compteur1++;
      k++;
  }
  k=k+1;
  for(j=0;j<5;j++){
    bin_temp1[j] = 0;
  }

  if(temp[0] == '$'){
    decimal = (int)temp[1];
    decimal = decimal - 48;
    j=0;
    /*decimal = atoi(temp[1]);*/ /* convertir char en int */
    while(decimal/2 > 0){
      bin_temp1[j] = decimal%2;
      j++;
      decimal = decimal/2;
    }
    bin_temp1[j] = decimal%2;
    if(i==1){
      compteur2 = 0;
      for(j=20;j>15;j--){
        B[j] = bin_temp1[compteur2];
        compteur2++;
      }
    }
    else if(i==2){
      compteur2 = 0;
      for(j=10;j>5;j--){
        B[j] = bin_temp1[compteur2];
        compteur2++;
      }
    }
    else{
      compteur2 = 0;
      for(j=15;j>10;j--){
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

int addi(char *T, int n){  
  int B[32];
  int j;
  int i;
  int k=n;
  int decimal;
  int bin_temp1[5];
  int bin_temp2[16]
  char *temp;
  int constant = 0;
  int compteur2 = 0;
  int sum = 0;
	

  for(j=0; j<32; j++){
    B[j]=0;
  }

  B[2] = 1;
  
  for(j=0;j<16;j++){
    bin_temp2[j] = 0;
  }

  for(i=1;i<4;i++){
    int compteur1 = 0;
    while(T[k] != ' '){
      temp[compteur1] = T[k];
      compteur1++;
      k++;
  }
  k=k+1;
  for(j=0;j<5;j++){
    bin_temp1[j] = 0;
  }

  if(temp[0] == '$'){
    decimal = (int)temp[1];
    decimal = decimal - 48;
    j=0;
    /*decimal = atoi(temp[1]);*/ /* convertir char en int */
    while(decimal/2 > 0){
      bin_temp1[j] = decimal%2;
      j++;
      decimal = decimal/2;
    }
    bin_temp1[j] = decimal%2;
    if(i==1){
      compteur2 = 0;
      for(j=15;j>10;j--){
        B[j] = bin_temp1[compteur2];
        compteur2++;
      }
    }
    else if(i==2){
      compteur2 = 0;
      for(j=10;j>5;j--){
        B[j] = bin_temp1[compteur2];
        compteur2++;
      }
    }
    else{
      while(decimal/2 > 0){
        bin_temp2[j] = decimal%2;
        j++;
        decimal = decimal/2;
      }
      bin_temp2[j] = decimal%2;
      compteur2 = 0;
      for(j=31;j>15;j--){
        B[j] = bin_temp2[compteur2];
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