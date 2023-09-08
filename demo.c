#include <stdio.h>
#include <stdlib.h>
int main(){
	
	//déclaration d'une variable
	int a;
	//affectation
	a=5;
	printf("bonjour\n");
	//test
	if(a<10){
		printf("votre note est %d : non admis \n",a);
	}else{
		printf("votre note est %d : admis \n",a);
	}
	return 1;
}