#include <stdio.h>

int main() {
    int n1, n2, i, j, k = 0;

    // Lire la taille du premier tableau
    scanf("%d", &n1);
    int tab1[n1];

    // Lire les éléments du premier tableau
    for (i = 0; i < n1; i++) {
        scanf("%d", &tab1[i]);
    }

    // Lire la taille du deuxième tableau
    scanf("%d", &n2);
    int tab2[n2];

    // Lire les éléments du deuxième tableau
    for (i = 0; i < n2; i++) {
        scanf("%d", &tab2[i]);
    }

    // Choisir une taille suffisante pour stocker l'intersection
    int max_inter;
    if (n1 < n2)
        max_inter = n1;
    else
        max_inter = n2;

    int intersection[max_inter];

    // Trouver les éléments communs
    for (i = 0; i < n1; i++) {
        int commun = 0;

        // Chercher tab1[i] dans tab2[]
        for (j = 0; j < n2; j++) {
            if (tab1[i] == tab2[j]) {
                commun = 1;
                break;
            }
        }

        // Vérifier s'il est déjà dans l'intersection
        int deja_ajoute = 0;
        for (j = 0; j < k; j++) {
            if (intersection[j] == tab1[i]) {
                deja_ajoute = 1;
                break;
            }
        }

        // Ajouter à l'intersection s'il n'est pas déjà là
        if (!deja_ajoute) {
            intersection[k] = tab1[i];
            k++;
        }
    }

    // Afficher l'intersection
    printf("Intersection :");
    for (i = 0; i < k; i++) {
        printf(" %d", intersection[i]);
    }
    printf("\n");

    return 0;
}
