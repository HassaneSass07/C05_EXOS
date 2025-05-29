#include <stdio.h>

int main() {
    int n1, n2, i, j, k = 0;

    // Lire la taille du 1er tableau et ses éléments
    scanf("%d", &n1);
    int t1[n1];
    for (i = 0; i < n1; i++) scanf("%d", &t1[i]);

    // Lire la taille du 2e tableau et ses éléments
    scanf("%d", &n2);
    int t2[n2];
    for (i = 0; i < n2; i++) scanf("%d", &t2[i]);

    // Définir la taille max de l'intersection (le plus petit des deux)
    int min = (n1 < n2) ? n1 : n2;
    int inter[min];  // Pour stocker les éléments communs

    // Pour chaque élément de t1
    for (i = 0; i < n1; i++) {
        // Chercher s’il est dans t2
        for (j = 0; j < n2; j++) {
            if (t1[i] == t2[j]) {
                // Vérifier qu’on ne l’a pas déjà mis dans inter[]
                int deja = 0;
                for (int m = 0; m < k; m++) {
                    if (inter[m] == t1[i]) {
                        deja = 1;
                        break;
                    }
                }
                // Si pas encore présent, on l’ajoute à inter[]
                if (!deja) inter[k++] = t1[i];
                break;  // Inutile de continuer à chercher dans t2
            }
        }
    }

    // Afficher les éléments communs
    printf("Intersection :");
    for (i = 0; i < k; i++) printf(" %d", inter[i]);
    printf("\n");

    return 0;
}
