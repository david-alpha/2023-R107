#include <stdio.h>
#include <stdlib.h>

typedef struct Voiture Voiture;
struct Voiture
{
    int puissance;
    int porte;
    char couleur;
};

int main(void)
{


   Voiture test;
   test.puissance = 10;
   test.porte = 10;
   test.couleur = 'a';

   printf("puissance : %d - porte : %d - couleur : %c\n", test.puissance, test.porte, test.couleur);
    return 0;
}