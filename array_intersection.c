#include <stdio.h>

int main() {
    int n1, n2, i;

    // Lire la taille du premier tableau
    scanf("%d", &n1);
    int a[n1];
    for (i = 0; i < n1; i++) scanf("%d", &a[i]);

    // Lire la taille du deuxième tableau
    scanf("%d", &n2);
    int b[n2];
    for (i = 0; i < n2; i++) scanf("%d", &b[i]);

    // Supposons que les valeurs sont toutes dans [0, 999]
    int present_a[1000] = {0};
    int deja_imprime[1000] = {0};

    // Marquer les éléments présents dans le 1er tableau
    for (i = 0; i < n1; i++) {
        present_a[a[i]] = 1;
    }

    // Afficher les éléments de b[] qui sont aussi dans a[]
    printf("Intersection :");
    for (i = 0; i < n2; i++) {
        if (present_a[b[i]] && !deja_imprime[b[i]]) {
            printf(" %d", b[i]);
            deja_imprime[b[i]] = 1;  // Pour éviter les doublons
        }
    }
    printf("\n");

    return 0;
}
