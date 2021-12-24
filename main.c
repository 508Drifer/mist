#include  "fonctions.h"


int main(int argc, char *argv[]){
  FILE *fic;
  char c[50];
  char *line = NULL;
  size_t len = 0;
  ssize_t read;
  int i=0;
  int j=0;
  char tline[50];
  fic = fopen(argv[1],"r");
	
	
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
      
    // while(line[j]!='\0'){
	//      tline[j]=line[j];
	//      j=j+1;
   //   }


     if ((c[i-3]=='A')&(c[i-2]=='D')&(c[i-1]=='D')) {
	printf("%x\n", add(line,i+1));
      } 
      
	
      
	/*if ((c[i-3]=='s')&(c[i-2]=='u')&(c[i-1]=='b')) {
      
	}*/
      
      j=0;
      i=0;
  }
  return(0);


}
