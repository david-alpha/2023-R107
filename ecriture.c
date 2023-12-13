#include <stdio.h>

int main() {
    FILE *fichier;

    // Ouverture du fichier en mode écriture ("w")
    fichier = fopen("fichier.txt", "a");

    // Vérification si le fichier a été ouvert avec succès
    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return 1; // Retourne 1 pour indiquer une erreur
    }

    // Écriture du mot "Bonjour" dans le fichier
    fprintf(fichier, "Bonjour4 ");

    // Fermeture du fichier
    fclose(fichier);

    printf("Le mot 'Bonjour' a été écrit dans 'fichier.txt'.\n");

    return 0; // Retourne 0 pour indiquer que tout s'est bien passé
}