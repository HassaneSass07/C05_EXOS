#include <stdio.h>

int main() {
    int n1, n2, i, j, k = 0;

    // Lire la taille du premier tableau
    scanf("%d", &n1);
    int a[n1];
    // Lire les éléments du premier tableau
    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    // Lire la taille du deuxième tableau
    scanf("%d", &n2);
    int b[n2];
    // Lire les éléments du deuxième tableau
    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    // Calculer la taille maximale possible pour l'intersection
    int max_size;
    if (n1 < n2) {
        max_size = n1;
    } else {
        max_size = n2;
    }

    int inter[max_size]; // Tableau pour stocker les éléments communs

    // Rechercher les éléments communs sans doublons
    for (i = 0; i < n1; i++) {
        // Vérifier si a[i] existe dans b[]
        int trouve = 0;
        for (j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                trouve = 1;
                break;
            }
        }
        if (!trouve) {
            continue; // On passe à l'élément suivant
        }

        // Vérifier si a[i] est déjà dans inter[]
        int deja_present = 0;
        for (j = 0; j < k; j++) {
            if (inter[j] == a[i]) {
                deja_present = 1;
                break;
            }
        }

        // Si ce n'est pas déjà dans l'intersection, on l'ajoute
        if (!deja_present) {
            inter[k] = a[i];
            k++;
        }
    }

    // Afficher l'intersection
    printf("Intersection : ");
    for (i = 0; i < k; i++) {
        printf("%d", inter[i]);
        if (i < k - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
