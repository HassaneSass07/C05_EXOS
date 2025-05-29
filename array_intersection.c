#include <stdio.h>

int main() {
    int n1, n2, i, j, k = 0;

    // Lire la taille du premier tableau
    scanf("%d", &n1);
    int a[n1];
    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    // Lire la taille du deuxième tableau
    scanf("%d", &n2);
    int b[n2];
    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    // On suppose que l'intersection ne dépassera pas n1 (ou n2)
    int inter[n1];
    
    // Pour chaque élément du premier tableau
    for (i = 0; i < n1; i++) {
        // Vérifier s'il existe dans le deuxième tableau
        int trouve = 0;
        for (j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                trouve = 1;
                break;
            }
        }

        // Si trouvé, vérifier qu'il n'est pas déjà dans l'intersection
        if (trouve) {
            int deja = 0;
            for (j = 0; j < k; j++) {
                if (inter[j] == a[i]) {
                    deja = 1;
                    break;
                }
            }

            // S'il n'est pas encore dans l'intersection, on l'ajoute
            if (!deja) {
                inter[k] = a[i];
                k++;
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
