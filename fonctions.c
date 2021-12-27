#include "fonctions.h"

/* INSTRUCTION ADD */

int add(char T[32], int n){  
  int B[32];
  int j;
  int i;
  int k=n;
  int decimal;
  int bin_temp1[5];
  char temp[6];
  char temp_bis[5];
  int constant = 0;
  int compteur2 = 0;
  int sum = 0;
	

  for(j=0; j<32; j++){
    B[j]=0;
  }

  B[26] = 1;
  for(i=1;i<4;i++){
    int compteur1 = 0;
    while((T[k] != ',')&&(T[k] != '\n')&&(T[k] != '\r')&&(T[k] != ' ')&&(T[k] != '#')){
      temp[compteur1] = T[k];
      compteur1++;
      k++;
  }
  k=k+1;
  for(j=0;j<5;j++){
    bin_temp1[j] = 0;
  }

  if((temp[0] == '$')&&(compteur1 == 2)){
    temp_bis[0] = temp[1];
    decimal = atoi(temp_bis);
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
  
  else if((temp[0] == '$')&&(compteur1 > 2)){
    temp_bis[0] = temp[1];
    temp_bis[1] = temp[2];
    decimal = atoi(temp_bis);
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

/* INSTRUCTION ADDI */

int addi(char T[32], int n){  
  int B[32];
  int j;
  int i;
  int k=n;
  int decimal;
  int bin_temp1[5];
  int bin_temp2[16];
  char temp[6];
  char temp_bis[5];
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
    while((T[k] != ',')&&(T[k] != '\n')&&(T[k] != '\r')&&(T[k] != ' ')&&(T[k] != '#')){
      temp[compteur1] = T[k];
      compteur1++;
      k++;
  }
  k=k+1;
  for(j=0;j<5;j++){
    bin_temp1[j] = 0;
  }

  if((temp[0] == '$')&&(compteur1 == 2)){  /* si on a mis que le $ et un caractère car si c'est supérieur à 2 ça signifie qu'on a mis une valeur supérieure à 10*/
    temp_bis[0] = temp[1];
    decimal = atoi(temp_bis);
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
    else{
      compteur2 = 0;
      for(j=10;j>5;j--){
        B[j] = bin_temp1[compteur2];
        compteur2++;
      }
    }
  }
  
  
  else if ((temp[0] == '$')&&(compteur1 > 2)){
    /* decimal = (int)temp[0];
    decimal = decimal - 48; */
    temp_bis[0] = temp[1];
    temp_bis[1] = temp[2];
    decimal = atoi(temp_bis);
    j=0;
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
    else{
      compteur2 = 0;
      for(j=10;j>5;j--){
        B[j] = bin_temp1[compteur2];
        compteur2++;
      }
    }
  }
    
  else if(temp[0] != '$') {
    decimal = 0;
    decimal = atoi(temp);
    j=0;
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
  compteur2 = 0;
  for(j=31;j>=0;j--){
	
    sum += B[j]*pow(2,compteur2);
    compteur2++;
  }
  return sum;
}

/* INSTRUCTION SUB */

int sub(char T[32], int n){  
  int B[32];
  int j;
  int i;
  int k=n;
  int decimal;
  int bin_temp1[5];
  char temp[6];
  char temp_bis[5];
  int constant = 0;
  int compteur2 = 0;
  int sum = 0;
	

  for(j=0; j<32; j++){
    B[j]=0;
  }

  B[26] = 1;
  B[30] = 1;
  for(i=1;i<4;i++){
    int compteur1 = 0;
    while((T[k] != ',')&&(T[k] != '\n')&&(T[k] != '\r')&&(T[k] != ' ')&&(T[k] != '#')){
      temp[compteur1] = T[k];
      compteur1++;
      k++;
  }
  k=k+1;
  for(j=0;j<5;j++){
    bin_temp1[j] = 0;
  }

  if((temp[0] == '$')&&(compteur1 == 2)){
    temp_bis[0] = temp[1];
    decimal = atoi(temp_bis);
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
  
  else if((temp[0] == '$')&&(compteur1 > 2)){
    temp_bis[0] = temp[1];
    temp_bis[1] = temp[2];
    decimal = atoi(temp_bis);
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

/* INSTRUCTION MULT */

int mult(char T[32], int n){  
  int B[32];
  int j;
  int i;
  int k=n;
  int decimal;
  int bin_temp1[5];
  char temp[6];
  char temp_bis[5];
  int constant = 0;
  int compteur2 = 0;
  int sum = 0;
	

  for(j=0; j<32; j++){
    B[j]=0;
  }

  B[27] = 1;
  B[28] = 1;
  for(i=1;i<3;i++){
    int compteur1 = 0;
    while((T[k] != ',')&&(T[k] != '\n')&&(T[k] != '\r')&&(T[k] != ' ')&&(T[k] != '#')){
      temp[compteur1] = T[k];
      compteur1++;
      k++;
  }
  k=k+1;
  for(j=0;j<5;j++){
    bin_temp1[j] = 0;
  }

  if((temp[0] == '$')&&(compteur1 == 2)){
    temp_bis[0] = temp[1];
    decimal = atoi(temp_bis);
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
      for(j=10;j>5;j--){
        B[j] = bin_temp1[compteur2];
        compteur2++;
      }
    }
    else if(i=2) {
      compteur2 = 0;
      for(j=15;j>10;j--){
        B[j] = bin_temp1[compteur2];
        compteur2++;
      }
    }
  }
  
  else if((temp[0] == '$')&&(compteur1 > 2)){
    temp_bis[0] = temp[1];
    temp_bis[1] = temp[2];
    decimal = atoi(temp_bis);
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
      for(j=10;j>5;j--){
        B[j] = bin_temp1[compteur2];
        compteur2++;
      }
    }
    else if(i=2) {
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

/* INSTRUCTION DIV */

int DIV(char T[32], int n){  
  int B[32];
  int j;
  int i;
  int k=n;
  int decimal;
  int bin_temp1[5];
  char temp[6];
  char temp_bis[5];
  int constant = 0;
  int compteur2 = 0;
  int sum = 0;
	

  for(j=0; j<32; j++){
    B[j]=0;
  }

  B[27] = 1;
  B[28] = 1;
  B[30] = 1;
  for(i=1;i<3;i++){
    int compteur1 = 0;
    while((T[k] != ',')&&(T[k] != '\n')&&(T[k] != '\r')&&(T[k] != ' ')&&(T[k] != '#')){
      temp[compteur1] = T[k];
      compteur1++;
      k++;
  }
  k=k+1;
  for(j=0;j<5;j++){
    bin_temp1[j] = 0;
  }

  if((temp[0] == '$')&&(compteur1 == 2)){
    temp_bis[0] = temp[1];
    decimal = atoi(temp_bis);
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
      for(j=10;j>5;j--){
        B[j] = bin_temp1[compteur2];
        compteur2++;
      }
    }
    else if(i=2) {
      compteur2 = 0;
      for(j=15;j>10;j--){
        B[j] = bin_temp1[compteur2];
        compteur2++;
      }
    }
  }
  
  else if((temp[0] == '$')&&(compteur1 > 2)){
    temp_bis[0] = temp[1];
    temp_bis[1] = temp[2];
    decimal = atoi(temp_bis);
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
      for(j=10;j>5;j--){
        B[j] = bin_temp1[compteur2];
        compteur2++;
      }
    }
    else if(i=2) {
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

/* INSTRUCTION AND */

int and(char T[32], int n){  
  int B[32];
  int j;
  int i;
  int k=n;
  int decimal;
  int bin_temp1[5];
  char temp[6];
  char temp_bis[5];
  int constant = 0;
  int compteur2 = 0;
  int sum = 0;
	

  for(j=0; j<32; j++){
    B[j]=0;
  }

  B[26] = 1;
  B[29] = 1;
  for(i=1;i<4;i++){
    int compteur1 = 0;
    while((T[k] != ',')&&(T[k] != '\n')&&(T[k] != '\r')&&(T[k] != ' ')&&(T[k] != '#')){
      temp[compteur1] = T[k];
      compteur1++;
      k++;
  }
  k=k+1;
  for(j=0;j<5;j++){
    bin_temp1[j] = 0;
  }

  if((temp[0] == '$')&&(compteur1 == 2)){
    temp_bis[0] = temp[1];
    decimal = atoi(temp_bis);
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
  
  else if((temp[0] == '$')&&(compteur1 > 2)){
    temp_bis[0] = temp[1];
    temp_bis[1] = temp[2];
    decimal = atoi(temp_bis);
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

/* INSTRUCTION OR */

int or(char T[32], int n){  
  int B[32];
  int j;
  int i;
  int k=n;
  int decimal;
  int bin_temp1[5];
  char temp[6];
  char temp_bis[5];
  int constant = 0;
  int compteur2 = 0;
  int sum = 0;
	

  for(j=0; j<32; j++){
    B[j]=0;
  }

  B[26] = 1;
  B[29] = 1;
  B[31] = 1;
  for(i=1;i<4;i++){
    int compteur1 = 0;
    while((T[k] != ',')&&(T[k] != '\n')&&(T[k] != '\r')&&(T[k] != ' ')&&(T[k] != '#')){
      temp[compteur1] = T[k];
      compteur1++;
      k++;
  }
  k=k+1;
  for(j=0;j<5;j++){
    bin_temp1[j] = 0;
  }

  if((temp[0] == '$')&&(compteur1 == 2)){
    temp_bis[0] = temp[1];
    decimal = atoi(temp_bis);
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
  
  else if((temp[0] == '$')&&(compteur1 > 2)){
    temp_bis[0] = temp[1];
    temp_bis[1] = temp[2];
    decimal = atoi(temp_bis);
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

/* INSTRUCTION XOR */

int xor(char T[32], int n){  
  int B[32];
  int j;
  int i;
  int k=n;
  int decimal;
  int bin_temp1[5];
  char temp[6];
  char temp_bis[5];
  int constant = 0;
  int compteur2 = 0;
  int sum = 0;
	

  for(j=0; j<32; j++){
    B[j]=0;
  }

  B[26] = 1;
  B[29] = 1;
  B[30] = 1;
  for(i=1;i<4;i++){
    int compteur1 = 0;
    while((T[k] != ',')&&(T[k] != '\n')&&(T[k] != '\r')&&(T[k] != ' ')&&(T[k] != '#')){
      temp[compteur1] = T[k];
      compteur1++;
      k++;
  }
  k=k+1;
  for(j=0;j<5;j++){
    bin_temp1[j] = 0;
  }

  if((temp[0] == '$')&&(compteur1 == 2)){
    temp_bis[0] = temp[1];
    decimal = atoi(temp_bis);
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
  
  else if((temp[0] == '$')&&(compteur1 > 2)){
    temp_bis[0] = temp[1];
    temp_bis[1] = temp[2];
    decimal = atoi(temp_bis);
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

/* INSTRUCTION SLT */

int slt(char T[32], int n){  
  int B[32];
  int j;
  int i;
  int k=n;
  int decimal;
  int bin_temp1[5];
  char temp[6];
  char temp_bis[5];
  int constant = 0;
  int compteur2 = 0;
  int sum = 0;
	

  for(j=0; j<32; j++){
    B[j]=0;
  }

  B[26] = 1;
  B[28] = 1;
  B[30] = 1;
  for(i=1;i<4;i++){
    int compteur1 = 0;
    while((T[k] != ',')&&(T[k] != '\n')&&(T[k] != '\r')&&(T[k] != ' ')&&(T[k] != '#')){
      temp[compteur1] = T[k];
      compteur1++;
      k++;
  }
  k=k+1;
  for(j=0;j<5;j++){
    bin_temp1[j] = 0;
  }

  if((temp[0] == '$')&&(compteur1 == 2)){
    temp_bis[0] = temp[1];
    decimal = atoi(temp_bis);
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
  
  else if((temp[0] == '$')&&(compteur1 > 2)){
    temp_bis[0] = temp[1];
    temp_bis[1] = temp[2];
    decimal = atoi(temp_bis);
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

/* INSTRUCTION BEQ */

int beq(char T[32], int n){  
  int B[32];
  int j;
  int i;
  int k=n;
  int decimal;
  int bin_temp1[5];
  int bin_temp2[16];
  char temp[6];
  char temp_bis[5];
  int constant = 0;
  int compteur2 = 0;
  int sum = 0;
	

  for(j=0; j<32; j++){
    B[j]=0;
  }

  B[3] = 1;
  
  for(j=0;j<16;j++){
    bin_temp2[j] = 0;
  }

  for(i=1;i<4;i++){
    int compteur1 = 0;
    while((T[k] != ',')&&(T[k] != '\n')&&(T[k] != '\r')&&(T[k] != ' ')&&(T[k] != '#')){
      temp[compteur1] = T[k];
      compteur1++;
      k++;
  }
  k=k+1;
  for(j=0;j<5;j++){
    bin_temp1[j] = 0;
  }

  if((temp[0] == '$')&&(compteur1 == 2)){  /* si on a mis que le $ et un caractère car si c'est supérieur à 2 ça signifie qu'on a mis une valeur supérieure à 10*/
    temp_bis[0] = temp[1];
    decimal = atoi(temp_bis);
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
  
  
  else if ((temp[0] == '$')&&(compteur1 > 2)){
    /* decimal = (int)temp[0];
    decimal = decimal - 48; */
    temp_bis[0] = temp[1];
    temp_bis[1] = temp[2];
    decimal = atoi(temp_bis);
    j=0;
    while(decimal/2 > 0){
      bin_temp1[j] = decimal%2;
      j++;
      decimal = decimal/2;
    }
    bin_temp1[j] = decimal%2;
    if(i==1){
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
    
  else if(temp[0] != '$') {
    decimal = 0;
    decimal = atoi(temp);
    j=0;
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
  compteur2 = 0;
  for(j=31;j>=0;j--){
	
    sum += B[j]*pow(2,compteur2);
    compteur2++;
  }
  return sum;
}

/* INSTRUCTION BNE */

int bne(char T[32], int n){  
  int B[32];
  int j;
  int i;
  int k=n;
  int decimal;
  int bin_temp1[5];
  int bin_temp2[16];
  char temp[6];
  char temp_bis[5];
  int constant = 0;
  int compteur2 = 0;
  int sum = 0;
	

  for(j=0; j<32; j++){
    B[j]=0;
  }

  B[3] = 1;
  B[5] = 1;
  
  for(j=0;j<16;j++){
    bin_temp2[j] = 0;
  }

  for(i=1;i<4;i++){
    int compteur1 = 0;
    while((T[k] != ',')&&(T[k] != '\n')&&(T[k] != '\r')&&(T[k] != ' ')&&(T[k] != '#')){
      temp[compteur1] = T[k];
      compteur1++;
      k++;
  }
  k=k+1;
  for(j=0;j<5;j++){
    bin_temp1[j] = 0;
  }

  if((temp[0] == '$')&&(compteur1 == 2)){  /* si on a mis que le $ et un caractère car si c'est supérieur à 2 ça signifie qu'on a mis une valeur supérieure à 10*/
    temp_bis[0] = temp[1];
    decimal = atoi(temp_bis);
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
  
  
  else if ((temp[0] == '$')&&(compteur1 > 2)){
    /* decimal = (int)temp[0];
    decimal = decimal - 48; */
    temp_bis[0] = temp[1];
    temp_bis[1] = temp[2];
    decimal = atoi(temp_bis);
    j=0;
    while(decimal/2 > 0){
      bin_temp1[j] = decimal%2;
      j++;
      decimal = decimal/2;
    }
    bin_temp1[j] = decimal%2;
    if(i==1){
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
    
  else if(temp[0] != '$') {
    decimal = 0;
    decimal = atoi(temp);
    j=0;
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
  compteur2 = 0;
  for(j=31;j>=0;j--){
	
    sum += B[j]*pow(2,compteur2);
    compteur2++;
  }
  return sum;
}

/* INSTRUCTION BGTZ */

int bgtz(char T[32], int n){  
  int B[32];
  int j;
  int i;
  int k=n;
  int decimal;
  int bin_temp1[5];
  int bin_temp2[16];
  char temp[6];
  char temp_bis[5];
  int constant = 0;
  int compteur2 = 0;
  int sum = 0;
	

  for(j=0; j<32; j++){
    B[j]=0;
  }

  B[3] = 1;
  B[4] = 1;
  B[5] = 1;
  
  for(j=0;j<16;j++){
    bin_temp2[j] = 0;
  }

  for(i=1;i<3;i++){
    int compteur1 = 0;
    while((T[k] != ',')&&(T[k] != '\n')&&(T[k] != '\r')&&(T[k] != ' ')&&(T[k] != '#')){
      temp[compteur1] = T[k];
      compteur1++;
      k++;
  }
  k=k+1;
  for(j=0;j<5;j++){
    bin_temp1[j] = 0;
  }

  if((temp[0] == '$')&&(compteur1 == 2)){  /* si on a mis que le $ et un caractère car si c'est supérieur à 2 ça signifie qu'on a mis une valeur supérieure à 10*/
    temp_bis[0] = temp[1];
    decimal = atoi(temp_bis);
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
      for(j=10;j>5;j--){
        B[j] = bin_temp1[compteur2];
        compteur2++;
      }
    }
  }
  
  
  else if ((temp[0] == '$')&&(compteur1 > 2)){
    /* decimal = (int)temp[0];
    decimal = decimal - 48; */
    temp_bis[0] = temp[1];
    temp_bis[1] = temp[2];
    decimal = atoi(temp_bis);
    j=0;
    while(decimal/2 > 0){
      bin_temp1[j] = decimal%2;
      j++;
      decimal = decimal/2;
    }
    bin_temp1[j] = decimal%2;
    if(i==1){
      compteur2 = 0;
      for(j=10;j>5;j--){
        B[j] = bin_temp1[compteur2];
        compteur2++;
      }
    }
  }
    
  else if(temp[0] != '$') {
    decimal = 0;
    decimal = atoi(temp);
    j=0;
    while(decimal/2 > 0){
    bin_temp2[j] = decimal%2;
    j++;
    decimal = decimal/2;
  }
  bin_temp2[j] = decimal%2;
  if (i == 2){
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

/* INSTRUCTION BLEZ */

int blez(char T[32], int n){  
  int B[32];
  int j;
  int i;
  int k=n;
  int decimal;
  int bin_temp1[5];
  int bin_temp2[16];
  char temp[6];
  char temp_bis[5];
  int constant = 0;
  int compteur2 = 0;
  int sum = 0;
	

  for(j=0; j<32; j++){
    B[j]=0;
  }

  B[3] = 1;
  B[4] = 1;
  
  for(j=0;j<16;j++){
    bin_temp2[j] = 0;
  }

  for(i=1;i<3;i++){
    int compteur1 = 0;
    while((T[k] != ',')&&(T[k] != '\n')&&(T[k] != '\r')&&(T[k] != ' ')&&(T[k] != '#')){
      temp[compteur1] = T[k];
      compteur1++;
      k++;
  }
  k=k+1;
  for(j=0;j<5;j++){
    bin_temp1[j] = 0;
  }

  if((temp[0] == '$')&&(compteur1 == 2)){  /* si on a mis que le $ et un caractère car si c'est supérieur à 2 ça signifie qu'on a mis une valeur supérieure à 10*/
    temp_bis[0] = temp[1];
    decimal = atoi(temp_bis);
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
      for(j=10;j>5;j--){
        B[j] = bin_temp1[compteur2];
        compteur2++;
      }
    }
  }
  
  
  else if ((temp[0] == '$')&&(compteur1 > 2)){
    /* decimal = (int)temp[0];
    decimal = decimal - 48; */
    temp_bis[0] = temp[1];
    temp_bis[1] = temp[2];
    decimal = atoi(temp_bis);
    j=0;
    while(decimal/2 > 0){
      bin_temp1[j] = decimal%2;
      j++;
      decimal = decimal/2;
    }
    bin_temp1[j] = decimal%2;
    if(i==1){
      compteur2 = 0;
      for(j=10;j>5;j--){
        B[j] = bin_temp1[compteur2];
        compteur2++;
      }
    }
  }
    
  else if(temp[0] != '$') {
    decimal = 0;
    decimal = atoi(temp);
    j=0;
    while(decimal/2 > 0){
    bin_temp2[j] = decimal%2;
    j++;
    decimal = decimal/2;
  }
  bin_temp2[j] = decimal%2;
  if (i == 2){
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

/* INSTRUCTION LUI */

int lui(char T[32], int n){  
  int B[32];
  int j;
  int i;
  int k=n;
  int decimal;
  int bin_temp1[5];
  int bin_temp2[16];
  char temp[6];
  char temp_bis[5];
  int constant = 0;
  int compteur2 = 0;
  int sum = 0;
	

  for(j=0; j<32; j++){
    B[j]=0;
  }

  B[2] = 1;
  B[3] = 1;
  B[4] = 1;
  B[5] = 1;
  
  for(j=0;j<16;j++){
    bin_temp2[j] = 0;
  }

  for(i=1;i<3;i++){
    int compteur1 = 0;
    while((T[k] != ',')&&(T[k] != '\n')&&(T[k] != '\r')&&(T[k] != ' ')&&(T[k] != '#')){
      temp[compteur1] = T[k];
      compteur1++;
      k++;
  }
  k=k+1;
  for(j=0;j<5;j++){
    bin_temp1[j] = 0;
  }

  if((temp[0] == '$')&&(compteur1 == 2)){  /* si on a mis que le $ et un caractère car si c'est supérieur à 2 ça signifie qu'on a mis une valeur supérieure à 10*/
    temp_bis[0] = temp[1];
    decimal = atoi(temp_bis);
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
  }
  
  
  else if ((temp[0] == '$')&&(compteur1 > 2)){
    /* decimal = (int)temp[0];
    decimal = decimal - 48; */
    temp_bis[0] = temp[1];
    temp_bis[1] = temp[2];
    decimal = atoi(temp_bis);
    j=0;
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
  }
    
  else if(temp[0] != '$') {
    decimal = 0;
    decimal = atoi(temp);
    j=0;
    while(decimal/2 > 0){
    bin_temp2[j] = decimal%2;
    j++;
    decimal = decimal/2;
  }
  bin_temp2[j] = decimal%2;
  if (i == 2){
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

/* INSTRUCTION SLL */

int sll(char T[32], int n){  
  int B[32];
  int j;
  int i;
  int k=n;
  int decimal;
  int bin_temp1[5];
  char temp[6];
  char temp_bis[5];
  int constant = 0;
  int compteur2 = 0;
  int sum = 0;
	

  for(j=0; j<32; j++){
    B[j]=0;
  }

  
  for(i=1;i<4;i++){
    int compteur1 = 0;
    while((T[k] != ',')&&(T[k] != '\n')&&(T[k] != '\r')&&(T[k] != ' ')&&(T[k] != '#')){
      temp[compteur1] = T[k];
      compteur1++;
      k++;
  }
  k=k+1;
  for(j=0;j<5;j++){
    bin_temp1[j] = 0;
  }

  if((temp[0] == '$')&&(compteur1 == 2)){
    temp_bis[0] = temp[1];
    decimal = atoi(temp_bis);
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
      for(j=15;j>10;j--){
        B[j] = bin_temp1[compteur2];
        compteur2++;
      }
    }
    else{
      compteur2 = 0;
      for(j=25;j>20;j--){
        B[j] = bin_temp1[compteur2];
        compteur2++;
      }
    }
  }
  
  else if((temp[0] == '$')&&(compteur1 > 2)){
    temp_bis[0] = temp[1];
    temp_bis[1] = temp[2];
    decimal = atoi(temp_bis);
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
      for(j=15;j>10;j--){
        B[j] = bin_temp1[compteur2];
        compteur2++;
      }
    }
    else{
      compteur2 = 0;
      for(j=25;j>20;j--){
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

/* INSTRUCTION SRL */

int srl(char T[32], int n){  
  int B[32];
  int j;
  int i;
  int k=n;
  int decimal;
  int bin_temp1[5];
  char temp[6];
  char temp_bis[5];
  int constant = 0;
  int compteur2 = 0;
  int sum = 0;
	

  for(j=0; j<32; j++){
    B[j]=0;
  }

  B[30] = 1;
  
  for(i=1;i<4;i++){
    int compteur1 = 0;
    while((T[k] != ',')&&(T[k] != '\n')&&(T[k] != '\r')&&(T[k] != ' ')&&(T[k] != '#')){
      temp[compteur1] = T[k];
      compteur1++;
      k++;
  }
  k=k+1;
  for(j=0;j<5;j++){
    bin_temp1[j] = 0;
  }

  if((temp[0] == '$')&&(compteur1 == 2)){
    temp_bis[0] = temp[1];
    decimal = atoi(temp_bis);
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
      for(j=15;j>10;j--){
        B[j] = bin_temp1[compteur2];
        compteur2++;
      }
    }
    else{
      compteur2 = 0;
      for(j=25;j>20;j--){
        B[j] = bin_temp1[compteur2];
        compteur2++;
      }
    }
  }
  
  else if((temp[0] == '$')&&(compteur1 > 2)){
    temp_bis[0] = temp[1];
    temp_bis[1] = temp[2];
    decimal = atoi(temp_bis);
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
      for(j=15;j>10;j--){
        B[j] = bin_temp1[compteur2];
        compteur2++;
      }
    }
    else{
      compteur2 = 0;
      for(j=25;j>20;j--){
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

/* INSTRUCTION NOP */

int nop(char T[32], int n){
  int sum = 0;
  return sum;
}

/* INSTRUCTION MFHI */

int mfhi(char T[32], int n){  
  int B[32];
  int j;
  int i;
  int k=n;
  int decimal;
  int bin_temp1[5];
  char temp[6];
  char temp_bis[5];
  int constant = 0;
  int compteur2 = 0;
  int sum = 0;
	

  for(j=0; j<32; j++){
    B[j]=0;
  }

  B[27] = 1;
  
  int compteur1 = 0;
  while((T[k] != ',')&&(T[k] != '\n')&&(T[k] != '\r')&&(T[k] != ' ')&&(T[k] != '#')){
    temp[compteur1] = T[k];
    compteur1++;
    k++;
}
  k=k+1;
  for(j=0;j<5;j++){
    bin_temp1[j] = 0;
  }

  if((temp[0] == '$')&&(compteur1 == 2)){
    temp_bis[0] = temp[1];
    decimal = atoi(temp_bis);
    j=0;
    /*decimal = atoi(temp[1]);*/ /* convertir char en int */
    while(decimal/2 > 0){
      bin_temp1[j] = decimal%2;
      j++;
      decimal = decimal/2;
    }
    bin_temp1[j] = decimal%2;
    compteur2 = 0;
    for(j=20;j>15;j--){
      B[j] = bin_temp1[compteur2];
      compteur2++;
    }
  }

  else if((temp[0] == '$')&&(compteur1 > 2)){
    temp_bis[0] = temp[1];
    temp_bis[1] = temp[2];
    decimal = atoi(temp_bis);
    j=0;
    /*decimal = atoi(temp[1]);*/ /* convertir char en int */
    while(decimal/2 > 0){
      bin_temp1[j] = decimal%2;
      j++;
      decimal = decimal/2;
    }
    bin_temp1[j] = decimal%2;
    compteur2 = 0;
    for(j=20;j>15;j--){
      B[j] = bin_temp1[compteur2];
      compteur2++;
    }
  }
  compteur2 = 0;
  for(j=31;j>=0;j--){
	
    sum += B[j]*pow(2,compteur2);
    compteur2++;
  }
  return sum;
}

/* INSTRUCTION MFLO */

int mflo(char T[32], int n){  
  int B[32];
  int j;
  int i;
  int k=n;
  int decimal;
  int bin_temp1[5];
  char temp[6];
  char temp_bis[5];
  int constant = 0;
  int compteur2 = 0;
  int sum = 0;
	

  for(j=0; j<32; j++){
    B[j]=0;
  }

  B[27] = 1;
  B[30] = 1;
  
  int compteur1 = 0;
  while((T[k] != ',')&&(T[k] != '\n')&&(T[k] != '\r')&&(T[k] != ' ')&&(T[k] != '#')){
    temp[compteur1] = T[k];
    compteur1++;
    k++;
}
  k=k+1;
  for(j=0;j<5;j++){
    bin_temp1[j] = 0;
  }

  if((temp[0] == '$')&&(compteur1 == 2)){
    temp_bis[0] = temp[1];
    decimal = atoi(temp_bis);
    j=0;
    /*decimal = atoi(temp[1]);*/ /* convertir char en int */
    while(decimal/2 > 0){
      bin_temp1[j] = decimal%2;
      j++;
      decimal = decimal/2;
    }
    bin_temp1[j] = decimal%2;
    compteur2 = 0;
    for(j=20;j>15;j--){
      B[j] = bin_temp1[compteur2];
      compteur2++;
    }
  }

  else if((temp[0] == '$')&&(compteur1 > 2)){
    temp_bis[0] = temp[1];
    temp_bis[1] = temp[2];
    decimal = atoi(temp_bis);
    j=0;
    /*decimal = atoi(temp[1]);*/ /* convertir char en int */
    while(decimal/2 > 0){
      bin_temp1[j] = decimal%2;
      j++;
      decimal = decimal/2;
    }
    bin_temp1[j] = decimal%2;
    compteur2 = 0;
    for(j=20;j>15;j--){
      B[j] = bin_temp1[compteur2];
      compteur2++;
    }
  }
  compteur2 = 0;
  for(j=31;j>=0;j--){
	
    sum += B[j]*pow(2,compteur2);
    compteur2++;
  }
  return sum;
}

/* INSTRUCTION LW */

long lw(char T[32], int n){  
  int B[32];
  int j;
  int i;
  int k=n;
  int t = 0;
  int decimal;
  int bin_temp1[5];
  int bin_temp2[16];
  char temp[10];
  char temp_bis1[10];
  char temp_bis2[10];
  char temp_bis3[10];
  int constant = 0;
  int compteur2 = 0;
  long sum = 0;
	

  for(j=0; j<32; j++){
    B[j]=0;
  }

  B[0] = 1;
  B[4] = 1;
  B[5] = 1;
  
  for(j=0;j<16;j++){
    bin_temp2[j] = 0;
  }

  for(i=1;i<3;i++){
    int compteur1 = 0;
    while((T[k] != ',')&&(T[k] != '\n')&&(T[k] != '\r')&&(T[k] != ' ')&&(T[k] != '#')){
      temp[compteur1] = T[k];
      compteur1++;
      k++;
  }
  k=k+1;
  for(j=0;j<5;j++){
    bin_temp1[j] = 0;
  }
  
  if((temp[0] == '$')&&(compteur1 == 2)){  /* si on a mis que le $ et un caractère car si c'est supérieur à 2 ça signifie qu'on a mis une valeur supérieure à 10*/
    temp_bis1[0] = temp[1];
    decimal = atoi(temp_bis1);
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
  }
  
  
  else if ((temp[0] == '$')&&(compteur1 > 2)){
    /* decimal = (int)temp[0];
    decimal = decimal - 48; */
    temp_bis1[0] = temp[1];
    temp_bis1[1] = temp[2];
    decimal = atoi(temp_bis1);
    j=0;
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
  }
    
  else if(temp[0] != '$') {
    compteur2 = 0;
    while(temp[t] != '(') {
      temp_bis2[compteur2] = temp[t];
      compteur2++;
      t++;
    }
    t=t+2;
    decimal = 0;
    decimal = atoi(temp_bis2);
    j=0;
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
    compteur2 = 0;
    while(temp[t] != ')') {
      temp_bis3[compteur2] = temp[t];
      compteur2++;
      t++;
    }
    decimal = 0;
    decimal = atoi(temp_bis3);
    j=0;
    while(decimal/2 > 0){
      bin_temp1[j] = decimal%2;
      j++;
      decimal = decimal/2;
  }
    bin_temp1[j] = decimal%2;
    compteur2 = 0;
    for(j=10;j>5;j--){
      B[j] = bin_temp1[compteur2];
      compteur2++;
    }
  }
  }
  compteur2 = 0;
  i = 0;
  for(j=31;j>=0;j--){
	
    sum += B[j]*pow(2,compteur2);
    compteur2++;
    i++;
  }
  return sum;
}

/* INSTRUCTION SW */

long sw(char T[32], int n){  
  int B[32];
  int j;
  int i;
  int k=n;
  int t = 0;
  int decimal;
  int bin_temp1[5];
  int bin_temp2[16];
  char temp[10];
  char temp_bis1[10];
  char temp_bis2[10];
  char temp_bis3[10];
  int constant = 0;
  int compteur2 = 0;
  long sum = 0;
	

  for(j=0; j<32; j++){
    B[j]=0;
  }

  B[0] = 1;
  B[2] = 1;
  B[4] = 1;
  B[5] = 1;
  
  for(j=0;j<16;j++){
    bin_temp2[j] = 0;
  }

  for(i=1;i<3;i++){
    int compteur1 = 0;
    while((T[k] != ',')&&(T[k] != '\n')&&(T[k] != '\r')&&(T[k] != ' ')&&(T[k] != '#')){
      temp[compteur1] = T[k];
      compteur1++;
      k++;
  }
  k=k+1;
  for(j=0;j<5;j++){
    bin_temp1[j] = 0;
  }
  
  if((temp[0] == '$')&&(compteur1 == 2)){  /* si on a mis que le $ et un caractère car si c'est supérieur à 2 ça signifie qu'on a mis une valeur supérieure à 10*/
    temp_bis1[0] = temp[1];
    decimal = atoi(temp_bis1);
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
  }
  
  
  else if ((temp[0] == '$')&&(compteur1 > 2)){
    /* decimal = (int)temp[0];
    decimal = decimal - 48; */
    temp_bis1[0] = temp[1];
    temp_bis1[1] = temp[2];
    decimal = atoi(temp_bis1);
    j=0;
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
  }
    
  else if(temp[0] != '$') {
    compteur2 = 0;
    while(temp[t] != '(') {
      temp_bis2[compteur2] = temp[t];
      compteur2++;
      t++;
    }
    t=t+2;
    decimal = 0;
    decimal = atoi(temp_bis2);
    j=0;
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
    compteur2 = 0;
    while(temp[t] != ')') {
      temp_bis3[compteur2] = temp[t];
      compteur2++;
      t++;
    }
    decimal = 0;
    decimal = atoi(temp_bis3);
    j=0;
    while(decimal/2 > 0){
      bin_temp1[j] = decimal%2;
      j++;
      decimal = decimal/2;
  }
    bin_temp1[j] = decimal%2;
    compteur2 = 0;
    for(j=10;j>5;j--){
      B[j] = bin_temp1[compteur2];
      compteur2++;
    }
  }
  }
  compteur2 = 0;
  i = 0;
  for(j=31;j>=0;j--){
	
    sum += B[j]*pow(2,compteur2);
    compteur2++;
    i++;
  }
  return sum;
}

