#include <stdio.h>


int taille(){
	int rows;
	do{
		printf("Entrez le nombre de lignes : ");
        scanf("%d", &rows);
		
	}while(rows<2);
}

int main() {
    int rows = taille();
	int	i, j, space;

    for(i = 1; i <= rows; i++) {
        // Imprimer les espaces
        for(space = 1; space <= rows - i; space++)
            printf(" ");

        // Imprimer les étoiles
        for(j = 1; j <= 2 * i - 1; j++)
            printf("*");

        // Passer à la ligne suivante
        printf("\n");
    }

    return 0;
}