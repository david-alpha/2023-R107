#include<stdio.h>
#include<stdlib.h>

int main(){

	//déclaration des variables
	int longueur,valeur,i ;
	int *tableau;
	//récupération de la longueur du tableau
	do{	
	printf("\nDonner la longueur du tableau : ");
	scanf("%d", &longueur);
	}while(longueur<2);
	//déclaration du Tableau
	tableau = (int(*))malloc(longueur*sizeof(int));
	//Remplissage du tableau
	for(i=0 ; i<longueur ; ++i){
		printf("\nDonner la valeur de la %d note : ",i);
		scanf("%d", &tableau[i]);
	}
	for(i=0 ; i<longueur ; ++i){
		printf("\nvaleur de la %d note : %d  ",i, tableau[i]);
	}
	
	return 1;
	
}