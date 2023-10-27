#include<stdio.h>
#include<stdlib.h>

//ceci est une procédure : ne renvoie rien
void bonjour(){
	
	printf("bonjour Bienvenue dans mon super programme de calcul d'aire\n");
	
}

//ceci est une fonction renvoie un resultat
int calculAire(int cote){
	
	return cote*cote ;
}

//fonction principale
int main(){
	//déclaration des variables
	int longueur, resultat ;
	bonjour();
	do{	
		printf("\nDonner le cote du carre : ");
		scanf("%d", &longueur);
	}while(longueur<0);
	
		printf("\nl'aire du carre est : %d  \n",calculAire(longueur));

	return 1;
}