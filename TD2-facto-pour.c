#include <stdio.h>
#include <stdlib.h>
int main(){
		//definir
		int n,i,resultat;
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
		for(i=1;i<n+1;i++){
			resultat = resultat * i;
		}
		//affichage
		printf(" %d! = %d.\n",n, resultat);
		//fin
		return 1;
}