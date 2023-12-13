#include <stdio.h>

int main() {
    FILE *fichier;
    char mot[] = "Bonjour"; // Déclaration et initialisation du tableau contenant le mot

    // Ouverture du fichier en mode écriture ("w")
    fichier = fopen("fichier.txt", "a");

    // Vérification si le fichier a été ouvert avec succès
    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return 1; // Retourne 1 pour indiquer une erreur
    }

    // Écriture du mot contenu dans le tableau dans le fichier
    fprintf(fichier, "%s", mot);

    // Fermeture du fichier
    fclose(fichier);

    printf("Le mot '%s' a été écrit dans 'fichier.txt'.\n", mot);

    return 0; // Retourne 0 pour indiquer que tout s'est bien passé
}
