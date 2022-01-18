#include "fonction.h"


int add(char T[50], int n){
  int B[32];
  int j;
  int i;
  int k=n;
  int decimal;
  int bin_temp1[5];
  char temp[50];
  int constant = 0;
  int compteur2 = 0;
  int sum = 0;
  int compteur1=0;

  for(j=0; j<32; j++){
    B[j]=0;
  }

  B[26] = 1;
  while(T[k] != '\0'){
	  for(i=1;i<4;i++){
	    compteur1 = 0;

	    while(T[k] != ' ' || T[k]!='\0'){
	      temp[compteur1] = T[k];
	      compteur1++;
		printf("%c",temp[compteur1]);
		k++;
		
	  }
	    k = k+1;
	  for(j=0;j<5;j++){
	    bin_temp1[j] = 0;
	  }

	  if(temp[0] == 'E'){
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
  }
  return sum;
}
