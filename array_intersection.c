#include <stdio.h>

int main() {
    int n1, n2, i, j, k = 0;

    // Lire la taille du premier tableau
    scanf("%d", &n1);
    int a[n1];
    for (i = 0; i < n1; i++) scanf("%d", &a[i]);

    // Lire la taille du deuxième tableau
    scanf("%d", &n2);
    int b[n2];
    for (i = 0; i < n2; i++) scanf("%d", &b[i]);

    int inter[n1 + n2]; // Stocke les éléments communs (sans doublons)

    // Parcourir a[]
    for (i = 0; i < n1; i++) {
        // Chercher a[i] dans b[]
        for (j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                // Vérifier si déjà dans inter[]
                int deja = 0;
                for (int m = 0; m < k; m++) {
                    if (inter[m] == a[i]) {
                        deja = 1;
                        break;
                    }
                }
                if (deja == 0) {
                    inter[k] = a[i];
                    k++;
                }
                break; // On ne cherche qu'une seule fois l'élément
            }
        }
    }

    // Afficher l'intersection
    printf("Intersection :");
    for (i = 0; i < k; i++) {
        printf(" %d", inter[i]);
    }
    printf("\n");

    return 0;
}
