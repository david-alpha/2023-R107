#include <stdio.h>
#include <stdlib.h>
int main(){
		//definir
		int n,resultat;
		//fin definir
		//debut
		//récupération de n
		do{
		printf("donner n, svp : \n");
		scanf ("%d",&n);
		}while(n < 2);
		//initialisation
		resultat = 1;
		//itération
		while(n!=1){
			resultat = resultat * n;
			n--;
		}
		//affichage
		printf(" Le resultat est %d.\n", resultat);
		//fin
		return 1;
}