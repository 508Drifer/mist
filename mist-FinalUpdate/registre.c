#include "fonctions.h"



void init_registre(int registre[35]){
    int i;
    for (i=0;i<33;i++){
        registre[i]=0;
    }

}

void lireregistre(int registre[35]){
    int i =0;
    printf("\n\nregistre :\n");
    for(i=0;i<32;i++){
        printf("\nregistre %d = %d",i,registre[i]);
    }
    printf("\nregistre LO = %d",registre[32]);
    printf("\nregistre HI = %d",registre[33]);
    printf("\n\n");
}



void ecriregistre(int registre[35],int numero,int valeur){
    registre[numero]=valeur;
}

int lireunregistre(int registre[35],int numero){
    return (registre[numero]);
}
