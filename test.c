#define _GNU_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/*#include "fonctions.h"*/

int main(int argc, char *argv[]){
  FILE *fic;
  fic = fopen(argv[1],"r");
  char *c;
  char *line = NULL;
  size_t len = 0;
  ssize_t read;
  int i=0;


  if(fic==NULL){
    printf("Erreur lors de la lecture du fichier");
    exit(1);
  }


  while((read = getline(&line,&len,fic)) != -1){
    /*printf("%zu", read);*/
    while(line[i]!=' '){
      c[i] = line[i];
	i++;
      }

      if ((c[i-4]=='a')&(c[i-3]=='d')&(c[i-2]=='d')) /* a finir*/
	
  }


}