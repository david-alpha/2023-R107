#include <stdlib.h>
#include <stdio.h>
float montantimpot(int R, int n){
	
	if(R/n < 500.0){
		return (10.0/100.0)*R;
	}else{
		return (20.0/100.0)*R;
	}
}
int revenunet(int R, int n){
	return (R - montantimpot(R,n));
}
int main(){
	int R,n;
	do{
		printf("bonjour, donner le nombre de membre dans le foyer\n");
		scanf("%d", &n);
		
	}while(n<1);
	do{
		printf("Donner le revenu du foyer\n");
		scanf("%d", &R);
		
	}while(R<0);
	
	printf("le montant de l'impot est de : %.2f\n", montantimpot(R,n));
	printf("le revenu net est de  : %.d\n", revenunet(R,n));
	
	return 1;
}