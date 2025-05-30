#include <stdio.h>

int main() {
    int n1, n2;

    // Lire la taille du premier tableau
    scanf("%d", &n1);
    int a[n1];
    for (int i = 0; i < n1; i++) scanf("%d", &a[i]);

    // Lire la taille du deuxième tableau
    scanf("%d", &n2);
    int b[n2];
    for (int i = 0; i < n2; i++) scanf("%d", &b[i]);

    // Initialisation de l'intersection
    int inter[n1 < n2 ? n1 : n2];  // Taille maximale possible
    int k = 0; // Compteur pour l'intersection

    // Pour chaque élément de a[]
    for (int i = 0; i < n1; i++) {
        // Vérifier s’il est dans b[]
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                // Vérifier qu'il n'est pas déjà dans inter[]
                int existe = 0;
                for (int m = 0; m < k; m++) {
                    if (inter[m] == a[i]) {
                        existe = 1;
                        break;
                    }
                }
                if (existe == 0) {
                    inter[k] = a[i];
                    k++;
                }
                break; // Ne pas ajouter deux fois si doublon dans b[]
            }
        }
    }

    // Affichage de l'intersection
    printf("Intersection :");
    for (int i = 0; i < k; i++) {
        printf(" %d", inter[i]);
    }
    printf("\n");

    return 0;
}
