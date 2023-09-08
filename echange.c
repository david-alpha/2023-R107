#include <stdio.h>
#include <stdlib.h>
int main(){
		//definir
		int a,b,echange;
		//fin definir

		//debut
		printf("donner la valeur de a svp : \n");
		scanf ("%d",&a);
		printf("donner la valeur de b svp : \n");
		scanf ("%d",&b);
		printf("valeur de a avant echange : %d\n",a);
		printf("valeur de b avant echange : %d\n",b);
		echange = a ;
		a = b ;
		b = echange ;
		printf("valeur de a apres echange : %d\n",a);
		printf("valeur de b apres echange : %d\n",b);
		//fin
		return 1;
}