#include <stdio.h>
#include <stdlib.h>

int main(){
	//definir
	int a,b,echange;
	//fin definir
	//debut
		printf("donnez la valeur de a svp : \n");
		scanf("%d",&a);
		printf("donnez la valeur de b svp : \n");
		scanf("%d",&b);
		echange = a;
		a = b;
		b = echange;
		printf("la valeur de a est %d, la valeur de b est %d ",a,b);
		return 1;
	//fin
}