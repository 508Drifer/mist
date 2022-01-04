#include "fonctions.h"




int lectureregistre(char line[32],int i,int registre[32][32]){
	int k=0;
	int j=0;
	int re;
	int val=0;
	int con;
	char temp[0];
	

	
	
	
	while (con!=1){
		if (line[i] == ','){
			if (line[i-2] == '$'){
				temp[0] = line[i-1];
				re = atoi(temp);
				con=1;
			} 
			else{
				temp[0] = line[i-1];
				re = atoi(temp);
				temp[0] = line[i-2];
				re = re + atoi(temp)*10;
				con=1;
			}
		}
		i++;
	}
	printf("\n%d\n",re);
	printf("\n%d\n",registre[5][6]);
	for(j=0;j<32;j++){
		val = val + registre[j][re]*pow(2,31-j);
		j++;
	}
	return val;
}