#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d", &n1);             // Lire la taille du premier tableau
    int a[n1];
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);       // Lire les éléments du premier tableau

    scanf("%d", &n2);             // Lire la taille du deuxième tableau
    int b[n2];
    for (int i = 0; i < n2; i++)
        scanf("%d", &b[i]);       // Lire les éléments du deuxième tableau

    // Parcours du premier tableau
    for (int i = 0; i < n1; i++) {
        int deja_affiche = 0;

        // Vérifier si a[i] a déjà été traité
        for (int k = 0; k < i; k++) {
            if (a[i] == a[k]) {
                deja_affiche = 1;
                break;
            }
        }

        if (deja_affiche) continue;

        // Chercher a[i] dans le deuxième tableau
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                printf("%d ", a[i]);  // Afficher si élément commun
                break;
            }
        }
    }

    printf("\n");
    return 0;
}
