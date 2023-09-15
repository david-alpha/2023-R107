#include <stdio.h>
#include <stdlib.h>
int main(){
		//definir
		float a,b,resultat;
		//fin definir

		//debut
		printf("donner la valeur de a svp : \n");
		scanf ("%f",&a);
		printf("donner la valeur de b svp : \n");
		scanf ("%f",&b);
		if(b==0){
			printf("pas de resultat, division par zero\n");
			return 1;
		}else{
			resultat = a/b;
		}
		printf("le resultat de %f/%f est : %f\n",a,b,resultat);
		//fin
		return 1;
}