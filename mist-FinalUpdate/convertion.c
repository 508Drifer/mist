#include "fonctions.h"


void hextobin(char line[32],int *bine,int j){
    int i;
    
    for (i=0;i<8;i++){
        if(line[i]=='0'){
            bine[j]=0;
            bine[j+1]=0;
            bine[j+2]=0;
            bine[j+3]=0;
        }

        if(line[i]=='1'){
            bine[j]=0;
            bine[j+1]=0;
            bine[j+2]=0;
            bine[j+3]=1;
        }

        if(line[i]=='2'){
            bine[j]=0;
            bine[j+1]=0;
            bine[j+2]=1;
            bine[j+3]=0;
        }

        if(line[i]=='3'){
            bine[j]=0;
            bine[j+1]=0;
            bine[j+2]=1;
            bine[j+3]=1;
        }

        if(line[i]=='4'){
            bine[j]=0;
            bine[j+1]=1;
            bine[j+2]=0;
            bine[j+3]=0;
        }
        if(line[i]=='5'){
            bine[j]=0;
            bine[j+1]=1;
            bine[j+2]=0;
            bine[j+3]=1;
        }

        if(line[i]=='6'){
            bine[j]=0;
            bine[j+1]=1;
            bine[j+2]=1;
            bine[j+3]=0;
        }

        if(line[i]=='7'){
            bine[j]=0;
            bine[j+1]=1;
            bine[j+2]=1;
            bine[j+3]=1;
        }

        if(line[i]=='8'){
            bine[j]=1;
            bine[j+1]=0;
            bine[j+2]=0;
            bine[j+3]=0;
        }


        if(line[i]=='9'){
            bine[j]=1;
            bine[j+1]=0;
            bine[j+2]=0;
            bine[j+3]=1;
        }        
    

        if(line[i]=='A'){
            bine[j]=1;
            bine[j+1]=0;
            bine[j+2]=1;
            bine[j+3]=0;
        }

        if(line[i]=='B'){
            bine[j]=1;
            bine[j+1]=0;
            bine[j+2]=1;
            bine[j+3]=1;
        }


        if(line[i]=='C'){
            bine[j]=1;
            bine[j+1]=1;
            bine[j+2]=0;
            bine[j+3]=0;
        }



        if(line[i]=='D'){
            bine[j]=1;
            bine[j+1]=1;
            bine[j+2]=0;
            bine[j+3]=1;
        }


        if(line[i]=='E'){
            bine[j]=1;
            bine[j+1]=1;
            bine[j+2]=1;
            bine[j+3]=0;
        }

        if(line[i]=='F'){
            bine[j]=1;
            bine[j+1]=1;
            bine[j+2]=1;
            bine[j+3]=1;
        }


        j = j+4;

    }

}