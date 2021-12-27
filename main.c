#define _GNU_SOURCE
#include  "fonctions.h"


int main(int argc, char *argv[]){
  FILE *fic1;
  FILE *fic2;
  char c[50];
  size_t len = 0;
  ssize_t read = 0;
  char line[32];
  int i=0;
  int j=0;
  char *result;
  fic1 = fopen(argv[1],"r");
  fic2 = fopen(argv[2], "w");
	
	
  if(fic1==NULL){
    printf("Erreur lors de la lecture du fichier");
    exit(1);
  }
  if(fic2==NULL){
    printf("Erreur lors de la lecture du fichier");
    exit(1);
  }
  
  fgets(line, 32, fic1);
  
  while(!feof(fic1)){
    
    
    while((line[i]!=' ')&&(line[i]!='\n')&&(line[i]!='\r')&&(line[i] !='#')){
      c[i] = line[i];		
      i++;
    }
    if ((c[i-3]=='A')&&(c[i-2]=='D')&&(c[i-1]=='D')) {
	    fprintf(fic2, "%08X\n", add(line,i+1));
      } 
    else if ((c[i-4]=='A')&&(c[i-3]=='D')&&(c[i-2]=='D')&&(c[i-1]=='I')) {
      fprintf(fic2, "%08X\n", addi(line, i+1));
    }
    else if ((c[i-3]=='S')&&(c[i-2]=='U')&&(c[i-1]=='B')) {
      fprintf(fic2, "%08X\n", sub(line, i+1));
    }
    else if ((c[i-4]=='M')&&(c[i-3]=='U')&&(c[i-2]=='L')&&(c[i-1]=='T')) {
      fprintf(fic2, "%08X\n", mult(line, i+1));
    }
    else if ((c[i-3]=='D')&&(c[i-2]=='I')&&(c[i-1]=='V')) {
      fprintf(fic2, "%08X\n", DIV(line, i+1));
    }
    else if ((c[i-3]=='A')&&(c[i-2]=='N')&&(c[i-1]=='D')) {
      fprintf(fic2, "%08X\n", and(line, i+1));
    }
    else if ((c[i-2]=='O')&&(c[i-1]=='R')) {
      fprintf(fic2, "%08X\n", or(line, i+1));
    }
    else if ((c[i-3]=='X')&&(c[i-2]=='O')&&(c[i-1]=='R')) {
      fprintf(fic2, "%08X\n", xor(line, i+1));
    }
    else if ((c[i-3]=='B')&&(c[i-2]=='E')&&(c[i-1]=='Q')) {
      fprintf(fic2, "%08X\n", beq(line, i+1));
    }
    else if ((c[i-3]=='B')&&(c[i-2]=='N')&&(c[i-1]=='E')) {
      fprintf(fic2, "%08X\n", bne(line, i+1));
    }
    else if ((c[i-4]=='B')&&(c[i-3]=='G')&&(c[i-2]=='T')&&(c[i-1]=='Z')) {
      fprintf(fic2, "%08X\n", bgtz(line, i+1));
    }
    else if ((c[i-4]=='B')&&(c[i-3]=='L')&&(c[i-2]=='E')&&(c[i-1]=='Z')) {
      fprintf(fic2, "%08X\n", blez(line, i+1));
    }
    else if ((c[i-3]=='L')&&(c[i-2]=='U')&&(c[i-1]=='I')) {
      fprintf(fic2, "%08X\n", lui(line, i+1));
    }
    else if ((c[i-3]=='S')&&(c[i-2]=='L')&&(c[i-1]=='L')) {
      fprintf(fic2, "%08X\n", sll(line, i+1));
    }
    else if ((c[i-3]=='S')&&(c[i-2]=='R')&&(c[i-1]=='L')) {
      fprintf(fic2, "%08X\n", srl(line, i+1));
    }
    else if ((c[i-3]=='N')&&(c[i-2]=='O')&&(c[i-1]=='P')) {
      fprintf(fic2, "%08X\n", nop(line, i+1));
    }
    else if ((c[i-4]=='M')&&(c[i-3]=='F')&&(c[i-2]=='H')&&(c[i-1]=='I')) {
      fprintf(fic2, "%08X\n", mfhi(line, i+1));
    }
    else if ((c[i-4]=='M')&&(c[i-3]=='F')&&(c[i-2]=='L')&&(c[i-1]=='O')) {
      fprintf(fic2, "%08X\n", mflo(line, i+1));
    }
    else if ((c[i-2]=='L')&&(c[i-1]=='W')) {
      fprintf(fic2, "%08lX\n", lw(line, i+1));
    }
    else if ((c[i-2]=='S')&&(c[i-1]=='W')) {
      fprintf(fic2, "%08lX\n", sw(line, i+1));
    }

    fgets(line, 32, fic1);
    i=0;
  }
  
  fclose(fic1);
  fclose(fic2);
  return(0);


}
