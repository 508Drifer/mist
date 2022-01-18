#include "fonctions.h"






void vidermemoir(int memory[224]){
    int i=0;
    for (i=0;i<224;i++){
        memory[i]=0;
    }

}

void lirememoir(int memory[224]){
    int i=0;
    printf("\nLa Memoire : \n");
    for(i=0;i<224;i++){
        printf("\nla memoire %d = %d",i,memory[i]);
    }
}


void ecrirmemoire(int memory[224],int numero,int valeur){
    memory[numero]=valeur;
}


int lireunecasememoire(int memory[224],int numero){
    return(memory[numero]);
}
 