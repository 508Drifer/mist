#define _GNU_SOURCE
#include "fonctions.h"

int main(char argc, char *argv[]){
  FILE *fic;
  fic = fopen(argv[1],"r");
  char c;
  char *line = NULL;
  size_t len = 0;
  ssize_t read;
  int i=0;


  if(fic==NULL){
    printf("Erreur lors de la lecture du fichier");
    exit(1);
  }


  while((read = getline(&line,&len,fic)) != -1){
    printf("%zu", read);
    while(line[i]!=''){
      c[i] = line[i];
      }
    switch(c){
      case c == "ADD" :
        printf("%x", ADD(line));
        break;
      case c == "SUB" :
        break;
      case c == "ADDI" :
       break;

    }
  }


}
