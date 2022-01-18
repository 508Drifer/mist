#include "fonctions.h"


int trad_resultat(int *bine,int nombre_ligne,int registre[35],int memory[224]){
    int i=0;
    int j=0;
    int h=0;
    int valeur=0;
    
        if (bine[j+nombre_ligne]==0 && bine[j+1+nombre_ligne]==0 && bine[j+2+nombre_ligne]==0 && bine[j+3+nombre_ligne]==0 && bine[j+4+nombre_ligne]==0 && bine[j+5+nombre_ligne]==0){

            /* ADD*/
            if (bine[j+26+nombre_ligne]==1 && bine[j+27+nombre_ligne]==0 && bine[j+28+nombre_ligne]==0 && bine[j+29+nombre_ligne]==0 && bine[j+30+nombre_ligne]==0 && bine[j+31+nombre_ligne]==0){
              valeur=opADD(bine,nombre_ligne,registre);
            }


            /* AND*/
            if (bine[j+26+nombre_ligne]==1 && bine[j+27+nombre_ligne]==0 && bine[j+28+nombre_ligne]==0 && bine[j+29+nombre_ligne]==1 && bine[j+30+nombre_ligne]==0 && bine[j+31+nombre_ligne]==0){
              valeur=opADD(bine,nombre_ligne,registre);
            }


            /* DIV*/
            if (bine[j+26+nombre_ligne]==0 && bine[j+27+nombre_ligne]==1 && bine[j+28+nombre_ligne]==1 && bine[j+29+nombre_ligne]==0 && bine[j+30+nombre_ligne]==1 && bine[j+31+nombre_ligne]==0){
              valeur=opDIV(bine,nombre_ligne,registre);
            }


            /* MFHI*/
            if (bine[j+26+nombre_ligne]==0 && bine[j+27+nombre_ligne]==1 && bine[j+28+nombre_ligne]==0 && bine[j+29+nombre_ligne]==0 && bine[j+30+nombre_ligne]==0 && bine[j+31+nombre_ligne]==0){
              valeur=opMFHI(bine,nombre_ligne,registre);
            }


            /* MFLO*/
            if (bine[j+26+nombre_ligne]==0 && bine[j+27+nombre_ligne]==1 && bine[j+28+nombre_ligne]==0 && bine[j+29+nombre_ligne]==0 && bine[j+30+nombre_ligne]==1 && bine[j+31+nombre_ligne]==0){
              valeur=opMFLO(bine,nombre_ligne,registre);
            }


            /* MULT*/
            if (bine[j+26+nombre_ligne]==0 && bine[j+27+nombre_ligne]==1 && bine[j+28+nombre_ligne]==1 && bine[j+29+nombre_ligne]==0 && bine[j+30+nombre_ligne]==0 && bine[j+31+nombre_ligne]==0){
              valeur=opMULT(bine,nombre_ligne,registre);
            }

            /* OR*/
            if (bine[j+26+nombre_ligne]==1 && bine[j+27+nombre_ligne]==0 && bine[j+28+nombre_ligne]==0 && bine[j+29+nombre_ligne]==1 && bine[j+30+nombre_ligne]==0 && bine[j+31+nombre_ligne]==1){
              valeur=opOR(bine,nombre_ligne,registre);
            }

            /*SLL*/
            if (bine[j+26+nombre_ligne]==0 && bine[j+27+nombre_ligne]==0 && bine[j+28+nombre_ligne]==0 && bine[j+29+nombre_ligne]==0 && bine[j+30+nombre_ligne]==0 && bine[j+31+nombre_ligne]==0){
              valeur=opSLL(bine,nombre_ligne,registre);
            }

            /*SLT*/
            if (bine[j+26+nombre_ligne]==1 && bine[j+27+nombre_ligne]==0 && bine[j+28+nombre_ligne]==1 && bine[j+29+nombre_ligne]==0 && bine[j+30+nombre_ligne]==1 && bine[j+31+nombre_ligne]==0){
              valeur=opSLT(bine,nombre_ligne,registre);
            }

            /*SRL*/
            if (bine[j+26+nombre_ligne]==0 && bine[j+27+nombre_ligne]==0 && bine[j+28+nombre_ligne]==0 && bine[j+29+nombre_ligne]==0 && bine[j+30+nombre_ligne]==1 && bine[j+31+nombre_ligne]==0){
              valeur=opSRL(bine,nombre_ligne,registre);
            }

            /*SUB*/
            if (bine[j+26+nombre_ligne]==1 && bine[j+27+nombre_ligne]==0 && bine[j+28+nombre_ligne]==0 && bine[j+29+nombre_ligne]==0 && bine[j+30+nombre_ligne]==1 && bine[j+31+nombre_ligne]==0){
              valeur=opSRL(bine,nombre_ligne,registre);
            }

            /*XOR*/
            if (bine[j+26+nombre_ligne]==1 && bine[j+27+nombre_ligne]==0 && bine[j+28+nombre_ligne]==0 && bine[j+29+nombre_ligne]==1 && bine[j+30+nombre_ligne]==1 && bine[j+31+nombre_ligne]==0){
              valeur=opSRL(bine,nombre_ligne,registre);
            }

        }

        else if (bine[j+26+nombre_ligne]==0 && bine[j+27+nombre_ligne]==0 && bine[j+28+nombre_ligne]==0 && bine[j+29+nombre_ligne]==0 && bine[j+30+nombre_ligne]==0 && bine[j+31+nombre_ligne]==0){
            h=1;

        }

        /*ADDI*/
        else if (bine[j+nombre_ligne]==0 && bine[j+1+nombre_ligne]==0 && bine[j+2+nombre_ligne]==1 && bine[j+3+nombre_ligne]==0 && bine[j+4+nombre_ligne]==0 && bine[j+5+nombre_ligne]==0){
          valeur=opADDI(bine,nombre_ligne,registre);
        }

        /*BEQ*/
        else if (bine[j+nombre_ligne]==0 && bine[j+1+nombre_ligne]==0 && bine[j+2+nombre_ligne]==0 && bine[j+3+nombre_ligne]==1 && bine[j+4+nombre_ligne]==0 && bine[j+5+nombre_ligne]==0){
          valeur=opBEQ(bine,nombre_ligne,registre);
        }

        /*BGTZ*/
        else if (bine[j+nombre_ligne]==0 && bine[j+1+nombre_ligne]==0 && bine[j+2+nombre_ligne]==0 && bine[j+3+nombre_ligne]==1 && bine[j+4+nombre_ligne]==1 && bine[j+5+nombre_ligne]==1){
          valeur=opBEQ(bine,nombre_ligne,registre);
        }

        /*BLEZ*/
        else if (bine[j+nombre_ligne]==0 && bine[j+1+nombre_ligne]==0 && bine[j+2+nombre_ligne]==0 && bine[j+3+nombre_ligne]==1 && bine[j+4+nombre_ligne]==1 && bine[j+5+nombre_ligne]==0){
          valeur=opBEQ(bine,nombre_ligne,registre);
        }

        /*BNE*/
        else if (bine[j+nombre_ligne]==0 && bine[j+1+nombre_ligne]==0 && bine[j+2+nombre_ligne]==0 && bine[j+3+nombre_ligne]==1 && bine[j+4+nombre_ligne]==0 && bine[j+5+nombre_ligne]==1){
          valeur=opBEQ(bine,nombre_ligne,registre);
        }

        /*SW*/
        else if (bine[j+nombre_ligne]==1 && bine[j+1+nombre_ligne]==0 && bine[j+2+nombre_ligne]==1 && bine[j+3+nombre_ligne]==0 && bine[j+4+nombre_ligne]==1 && bine[j+5+nombre_ligne]==1){
          valeur=opSW(bine,nombre_ligne,registre,memory);
        }


        /*LW*/
        else if (bine[j+nombre_ligne]==0 && bine[j+1+nombre_ligne]==0 && bine[j+2+nombre_ligne]==0 && bine[j+3+nombre_ligne]==1 && bine[j+4+nombre_ligne]==0 && bine[j+5+nombre_ligne]==1){
          valeur=opLW(bine,nombre_ligne,registre,memory);
        }

        return valeur;
}



int opADD(int *bine,int nombre_ligne,int registre[35]){
    int rd=0;
    int rt=0;
    int rs=0;
    int resultat;

  rd = (bine[20+nombre_ligne]*1) + (bine[19+nombre_ligne]*2) + (bine[18+nombre_ligne]*4) + (bine[17+nombre_ligne]*8) + (bine[16+nombre_ligne]*16);

  rt= (bine[15+nombre_ligne]*1) + (bine[14+nombre_ligne]*2) + (bine[13+nombre_ligne]*4) + (bine[12+nombre_ligne]*8) + (bine[11+nombre_ligne]*16);

  rs= (bine[10+nombre_ligne]*1) + (bine[9+nombre_ligne]*2) + (bine[8+nombre_ligne]*4) + (bine[7+nombre_ligne]*8) + (bine[6+nombre_ligne]*16);

  resultat = lireunregistre(registre,rs) +lireunregistre(registre,rt) ;
  ecriregistre(registre,lireunregistre(registre,rd),resultat);

  return resultat;
}

int opAND(int *bine,int nombre_ligne,int registre[35]){
    int rd=0;
    int rt=0;
    int rs=0;
    int resultat;
    int vrs;
    int vrt;
    int brt[32];
    int brs[32];
    int i=0;

  rd = (bine[20+nombre_ligne]*1) + (bine[19+nombre_ligne]*2) + (bine[18+nombre_ligne]*4) + (bine[17+nombre_ligne]*8) + (bine[16+nombre_ligne]*16);

  rt= (bine[15+nombre_ligne]*1) + (bine[14+nombre_ligne]*2) + (bine[13+nombre_ligne]*4) + (bine[12+nombre_ligne]*8) + (bine[11+nombre_ligne]*16);

  rs= (bine[10+nombre_ligne]*1) + (bine[9+nombre_ligne]*2) + (bine[8+nombre_ligne]*4) + (bine[7+nombre_ligne]*8) + (bine[6+nombre_ligne]*16);

  vrs=lireunregistre(registre,rs);
  vrt=lireunregistre(registre,rt);

    for(i=0; vrs > 0; i++)  
    {  
      brs[i] = vrs%2;  
      vrs = vrs/2;  
    } 

    for(i=0; vrt > 0; i++)  
    {  
      brt[i] = vrt%2;  
      vrt = vrt/2;  
    } 




  for(i=0;i<32;i++){
    resultat=((brs[i]|brs[i])*pow(2,31-i))+resultat;
  }
  ecriregistre(registre,lireunregistre(registre,rd),resultat);

  return resultat;
}


int opDIV(int *bine,int nombre_ligne,int registre[35]){
    int rt=0;
    int rs=0;
    int resultat;
    int reste;
    int vrs;
    int vrt;

  rt= (bine[15+nombre_ligne]*1) + (bine[14+nombre_ligne]*2) + (bine[13+nombre_ligne]*4) + (bine[12+nombre_ligne]*8) + (bine[11+nombre_ligne]*16);

  rs= (bine[10+nombre_ligne]*1) + (bine[9+nombre_ligne]*2) + (bine[8+nombre_ligne]*4) + (bine[7+nombre_ligne]*8) + (bine[6+nombre_ligne]*16);


  vrs=lireunregistre(registre,rs);
  vrt=lireunregistre(registre,rt);



  if(vrt != 0){
      resultat = vrs / vrt ;

      if (resultat*vrt==vrs){
        reste=0;
      }

      if (resultat*vrt<vrs){
        reste=(vrs-(resultat*vrt))*10;
      }

      if (resultat*vrt>vrs){
        reste=((resultat*vrt))-vrs*10;
      }

  }
  else {
    resultat=9999;
  }

  ecriregistre(registre,32,resultat);
  ecriregistre(registre,33,reste);

  return resultat;
}



int opMFHI(int *bine,int nombre_ligne,int registre[35]){
    int rd=0;
    int resultat;

  rd = (bine[20+nombre_ligne]*1) + (bine[19+nombre_ligne]*2) + (bine[18+nombre_ligne]*4) + (bine[17+nombre_ligne]*8) + (bine[16+nombre_ligne]*16);
  
  resultat = lireunregistre(registre,33);
  ecriregistre(registre,lireunregistre(registre,rd),resultat);

  return resultat;
}

int opMFLO(int *bine,int nombre_ligne,int registre[35]){
    int rd=0;
    int resultat;

  rd = (bine[20+nombre_ligne]*1) + (bine[19+nombre_ligne]*2) + (bine[18+nombre_ligne]*4) + (bine[17+nombre_ligne]*8) + (bine[16+nombre_ligne]*16);

  resultat = lireunregistre(registre,32);
  ecriregistre(registre,lireunregistre(registre,rd),resultat);

  return resultat;
}


int opMULT(int *bine,int nombre_ligne,int registre[35]){
    int rt=0;
    int rs=0;
    long long resultat;
    int HI;
    int LO;
    int i;
    int tab[64];
    int vrt;
    int vrs;

  rt= (bine[15+nombre_ligne]*1) + (bine[14+nombre_ligne]*2) + (bine[13+nombre_ligne]*4) + (bine[12+nombre_ligne]*8) + (bine[11+nombre_ligne]*16);

  rs= (bine[10+nombre_ligne]*1) + (bine[9+nombre_ligne]*2) + (bine[8+nombre_ligne]*4) + (bine[7+nombre_ligne]*8) + (bine[6+nombre_ligne]*16);

  vrs=lireunregistre(registre,rs);
  vrt=lireunregistre(registre,rt);


  resultat = vrt * vrs;

  if (resultat<=2147483647){
    HI=0;
    LO=resultat;
  }
  else if (resultat>2147483647){

      for(i=0; resultat > 0; i++)  {  
       tab[i] = resultat%2;  
      resultat = resultat/2;  
    } 

    for(i=0;i<32;i++){
        HI = (tab[i]*pow(2,31-i))+HI;
    }

    for (i=32;i<64;i++){
      LO=(tab[i]*pow(2,63-i))+LO;
    }
  }

  ecriregistre(registre,32,LO);
  ecriregistre(registre,33,HI);

  return resultat;
}



int opOR(int *bine,int nombre_ligne,int registre[35]){
    int rd=0;
    int rt=0;
    int rs=0;
    int resultat;
    int vrs;
    int vrt;
    int i=0;
    int brs[32];
    int brt[32];

  rd = (bine[20+nombre_ligne]*1) + (bine[19+nombre_ligne]*2) + (bine[18+nombre_ligne]*4) + (bine[17+nombre_ligne]*8) + (bine[16+nombre_ligne]*16);

  rt= (bine[15+nombre_ligne]*1) + (bine[14+nombre_ligne]*2) + (bine[13+nombre_ligne]*4) + (bine[12+nombre_ligne]*8) + (bine[11+nombre_ligne]*16);

  rs= (bine[10+nombre_ligne]*1) + (bine[9+nombre_ligne]*2) + (bine[8+nombre_ligne]*4) + (bine[7+nombre_ligne]*8) + (bine[6+nombre_ligne]*16);
 
  vrs=lireunregistre(registre,rs);
  vrt=lireunregistre(registre,rt);

    for(i=0; vrs > 0; i++)  
    {  
      brs[i] = vrs%2;  
      vrs = vrs/2;  
    } 

    for(i=0; vrt > 0; i++)  
    {  
      brt[i] = vrt%2;  
      vrt = vrt/2;  
    } 


  for(i=0;i<32;i++){
    resultat=((brs[i]|brs[i])*pow(2,31-i))+resultat;
  }

    

 
  ecriregistre(registre,lireunregistre(registre,rd),resultat);


  return resultat;
}


int opSLL(int *bine,int nombre_ligne,int registre[35]){
    int rd=0;
    int rt=0;
    int sa=0;
    int resultat;
    int vrd;
    int vrt;
    int i=0;
    int brd[32];
    int brt[32];

  rd = (bine[20+nombre_ligne]*1) + (bine[19+nombre_ligne]*2) + (bine[18+nombre_ligne]*4) + (bine[17+nombre_ligne]*8) + (bine[16+nombre_ligne]*16);

  rt= (bine[15+nombre_ligne]*1) + (bine[14+nombre_ligne]*2) + (bine[13+nombre_ligne]*4) + (bine[12+nombre_ligne]*8) + (bine[11+nombre_ligne]*16);

  sa= (bine[25+nombre_ligne]*1) + (bine[24+nombre_ligne]*2) + (bine[23+nombre_ligne]*4) + (bine[22+nombre_ligne]*8) + (bine[21+nombre_ligne]*16);
 
  vrd=lireunregistre(registre,rd);
  vrt=lireunregistre(registre,rt);


    for(i=0; vrt > 0; i++)  
    {  
      brt[i] = vrt%2;  
      vrt = vrt/2;  
    } 

while(sa != 0){
  for(i=0;i<33;i++){
    brt[i+1]=brt[i];
  }
  sa = sa -1;
}

  for(i=0;i<32;i++){
    resultat=(brt[i]*pow(2,31-i))+resultat;
  }


  ecriregistre(registre,lireunregistre(registre,rd),resultat);


  return resultat;
}


int opSLT(int *bine,int nombre_ligne,int registre[35]){
    int rd=0;
    int rt=0;
    int rs=0;
    int resultat;
    int vrs;
    int vrt;
    int i=0;

  rd = (bine[20+nombre_ligne]*1) + (bine[19+nombre_ligne]*2) + (bine[18+nombre_ligne]*4) + (bine[17+nombre_ligne]*8) + (bine[16+nombre_ligne]*16);

  rt= (bine[15+nombre_ligne]*1) + (bine[14+nombre_ligne]*2) + (bine[13+nombre_ligne]*4) + (bine[12+nombre_ligne]*8) + (bine[11+nombre_ligne]*16);

  rs= (bine[10+nombre_ligne]*1) + (bine[9+nombre_ligne]*2) + (bine[8+nombre_ligne]*4) + (bine[7+nombre_ligne]*8) + (bine[6+nombre_ligne]*16);

  vrs=lireunregistre(registre,rs);
  vrt=lireunregistre(registre,rt);

  if (vrs<vrt){
    ecriregistre(registre,lireunregistre(registre,rd),1);
  }
  else{
    ecriregistre(registre,lireunregistre(registre,rd),0);
  }
}


int opSRL(int *bine,int nombre_ligne,int registre[35]){
    int rd=0;
    int rt=0;
    int sa=0;
    int resultat;
    int vrd;
    int vrt;
    int i=0;
    int brd[32];
    int brt[32];

  rd = (bine[20+nombre_ligne]*1) + (bine[19+nombre_ligne]*2) + (bine[18+nombre_ligne]*4) + (bine[17+nombre_ligne]*8) + (bine[16+nombre_ligne]*16);

  rt= (bine[15+nombre_ligne]*1) + (bine[14+nombre_ligne]*2) + (bine[13+nombre_ligne]*4) + (bine[12+nombre_ligne]*8) + (bine[11+nombre_ligne]*16);

  sa= (bine[25+nombre_ligne]*1) + (bine[24+nombre_ligne]*2) + (bine[23+nombre_ligne]*4) + (bine[22+nombre_ligne]*8) + (bine[21+nombre_ligne]*16);
 
  vrd=lireunregistre(registre,rd);
  vrt=lireunregistre(registre,rt);


    for(i=0; vrt > 0; i++)  
    {  
      brt[i] = vrt%2;  
      vrt = vrt/2;  
    } 

while(sa != 0){
  for(i=0;i<33;i++){
    if(i!=0){
      brt[i-1]=brt[i];
    }
    else brt[0]=0;
    
  }
  sa = sa -1;
}

  for(i=0;i<32;i++){
    resultat=(brt[i]*pow(2,31-i))+resultat;
  }


  ecriregistre(registre,lireunregistre(registre,rd),resultat);


  return resultat;
}


int opSUB(int *bine,int nombre_ligne,int registre[35]){
    int rd=0;
    int rt=0;
    int rs=0;
    int resultat;

  rd = (bine[20+nombre_ligne]*1) + (bine[19+nombre_ligne]*2) + (bine[18+nombre_ligne]*4) + (bine[17+nombre_ligne]*8) + (bine[16+nombre_ligne]*16);

  rt= (bine[15+nombre_ligne]*1) + (bine[14+nombre_ligne]*2) + (bine[13+nombre_ligne]*4) + (bine[12+nombre_ligne]*8) + (bine[11+nombre_ligne]*16);

  rs= (bine[10+nombre_ligne]*1) + (bine[9+nombre_ligne]*2) + (bine[8+nombre_ligne]*4) + (bine[7+nombre_ligne]*8) + (bine[6+nombre_ligne]*16);

  resultat = lireunregistre(registre,rs) - lireunregistre(registre,rt) ;
  ecriregistre(registre,lireunregistre(registre,rd),resultat);

  return resultat;
}

int opXOR(int *bine,int nombre_ligne,int registre[35]){
    int rd=0;
    int rt=0;
    int rs=0;
    int resultat;
    int vrs;
    int vrt;
    int i=0;
    int brs[32];
    int brt[32];

  rd = (bine[20+nombre_ligne]*1) + (bine[19+nombre_ligne]*2) + (bine[18+nombre_ligne]*4) + (bine[17+nombre_ligne]*8) + (bine[16+nombre_ligne]*16);

  rt= (bine[15+nombre_ligne]*1) + (bine[14+nombre_ligne]*2) + (bine[13+nombre_ligne]*4) + (bine[12+nombre_ligne]*8) + (bine[11+nombre_ligne]*16);

  rs= (bine[10+nombre_ligne]*1) + (bine[9+nombre_ligne]*2) + (bine[8+nombre_ligne]*4) + (bine[7+nombre_ligne]*8) + (bine[6+nombre_ligne]*16);
 
  vrs=lireunregistre(registre,rs);
  vrt=lireunregistre(registre,rt);

    for(i=0; vrs > 0; i++)  
    {  
      brs[i] = vrs%2;  
      vrs = vrs/2;  
    } 

    for(i=0; vrt > 0; i++)  
    {  
      brt[i] = vrt%2;  
      vrt = vrt/2;  
    } 


  for(i=0;i<32;i++){
    resultat=((brs[i]^brs[i])*pow(2,31-i))+resultat;
  }

    

 
  ecriregistre(registre,lireunregistre(registre,rd),resultat);


  return resultat;
}


int opADDI(int *bine,int nombre_ligne,int registre[35]){
    int im=0;
    int rt=0;
    int rs=0;
    int resultat;
    int i=0;
  

  for(i=0;i<16;i++){
    im = (bine[31-i]*pow(2,i))+im;
  }

  rt= (bine[15+nombre_ligne]*1) + (bine[14+nombre_ligne]*2) + (bine[13+nombre_ligne]*4) + (bine[12+nombre_ligne]*8) + (bine[11+nombre_ligne]*16);

  rs= (bine[10+nombre_ligne]*1) + (bine[9+nombre_ligne]*2) + (bine[8+nombre_ligne]*4) + (bine[7+nombre_ligne]*8) + (bine[6+nombre_ligne]*16);

  resultat = lireunregistre(registre,rs) +im;
  ecriregistre(registre,lireunregistre(registre,rt),resultat);

  return resultat;
}

int opBEQ(int *bine,int nombre_ligne,int registre[35]){
    int offset=0;
    int rt=0;
    int rs=0;
    int resultat=0;
    int i=0;
  

  for(i=0;i<16;i++){
    offset = (bine[31-i]*pow(2,i))+offset;
  }

  rt= (bine[15+nombre_ligne]*1) + (bine[14+nombre_ligne]*2) + (bine[13+nombre_ligne]*4) + (bine[12+nombre_ligne]*8) + (bine[11+nombre_ligne]*16);

  rs= (bine[10+nombre_ligne]*1) + (bine[9+nombre_ligne]*2) + (bine[8+nombre_ligne]*4) + (bine[7+nombre_ligne]*8) + (bine[6+nombre_ligne]*16);

  if (lireunregistre(registre,rt)==lireunregistre(registre,rs)){
    ecriregistre(registre,0,offset);
  }
  else ecriregistre(registre,0,0);
  
  resultat=offset;
  return resultat;
}

int opBGTZ(int *bine,int nombre_ligne,int registre[35]){
    int offset=0;
    int rs=0;
    int resultat=0;
    int i=0;
  

  for(i=0;i<16;i++){
    offset = (bine[31-i]*pow(2,i))+offset;
  }


  rs= (bine[10+nombre_ligne]*1) + (bine[9+nombre_ligne]*2) + (bine[8+nombre_ligne]*4) + (bine[7+nombre_ligne]*8) + (bine[6+nombre_ligne]*16);

  if (0<lireunregistre(registre,rs)){
    ecriregistre(registre,0,offset);
  }
  else ecriregistre(registre,0,0);
  
  resultat=offset;
  return resultat;
}

int opBLEZ(int *bine,int nombre_ligne,int registre[35]){
    int offset=0;
    int rs=0;
    int resultat=0;
    int i=0;
  

  for(i=0;i<16;i++){
    offset = (bine[31-i]*pow(2,i))+offset;
  }


  rs= (bine[10+nombre_ligne]*1) + (bine[9+nombre_ligne]*2) + (bine[8+nombre_ligne]*4) + (bine[7+nombre_ligne]*8) + (bine[6+nombre_ligne]*16);

  if (0>=lireunregistre(registre,rs)){
    ecriregistre(registre,0,offset);
  }
  else ecriregistre(registre,0,0);
  
  resultat=offset;
  return resultat;
}



int opBNE(int *bine,int nombre_ligne,int registre[35]){
    int offset=0;
    int rt=0;
    int rs=0;
    int resultat=0;
    int i=0;
  

  for(i=0;i<16;i++){
    offset = (bine[31-i]*pow(2,i))+offset;
  }

  rt= (bine[15+nombre_ligne]*1) + (bine[14+nombre_ligne]*2) + (bine[13+nombre_ligne]*4) + (bine[12+nombre_ligne]*8) + (bine[11+nombre_ligne]*16);

  rs= (bine[10+nombre_ligne]*1) + (bine[9+nombre_ligne]*2) + (bine[8+nombre_ligne]*4) + (bine[7+nombre_ligne]*8) + (bine[6+nombre_ligne]*16);

  if (lireunregistre(registre,rt)!=lireunregistre(registre,rs)){
    ecriregistre(registre,0,offset);
  }
  else ecriregistre(registre,0,0);
  
  resultat=offset;
  return resultat;
}



int opSW(int *bine,int nombre_ligne,int registre[35],int memory[224]){
    int offset=0;
    int rt=0;
    int base=0;
    int resultat=0;
    int i=0;
  

  for(i=0;i<16;i++){
    offset = (bine[31-i]*pow(2,i))+offset;
  }

  rt= (bine[15+nombre_ligne]*1) + (bine[14+nombre_ligne]*2) + (bine[13+nombre_ligne]*4) + (bine[12+nombre_ligne]*8) + (bine[11+nombre_ligne]*16);

  base= (bine[10+nombre_ligne]*1) + (bine[9+nombre_ligne]*2) + (bine[8+nombre_ligne]*4) + (bine[7+nombre_ligne]*8) + (bine[6+nombre_ligne]*16);

  ecrirmemoire(memory,lireunregistre(registre,base)+offset,lireunregistre(registre,rt));
  
  resultat=lireunregistre(registre,rt);
  return resultat;
}




int opLW(int *bine,int nombre_ligne,int registre[35],int memory[224]){
    int offset=0;
    int rt=0;
    int base=0;
    int resultat=0;
    int i=0;
  

  for(i=0;i<16;i++){
    offset = (bine[31-i]*pow(2,i))+offset;
  }

  rt= (bine[15+nombre_ligne]*1) + (bine[14+nombre_ligne]*2) + (bine[13+nombre_ligne]*4) + (bine[12+nombre_ligne]*8) + (bine[11+nombre_ligne]*16);

  base= (bine[10+nombre_ligne]*1) + (bine[9+nombre_ligne]*2) + (bine[8+nombre_ligne]*4) + (bine[7+nombre_ligne]*8) + (bine[6+nombre_ligne]*16);

  ecriregistre(registre,rt,lireunecasememoire(memory,lireunregistre(registre,base)+offset));
  
  resultat=lireunecasememoire(memory,lireunregistre(registre,base)+offset);
  return resultat;
}
