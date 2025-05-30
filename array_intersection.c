#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d", &n1);          // Taille du 1er tableau
    int a[n1];
    for (int i = 0; i < n1; i++) scanf("%d", &a[i]);

    scanf("%d", &n2);          // Taille du 2e tableau
    int b[n2];
    for (int i = 0; i < n2; i++) scanf("%d", &b[i]);

    // Afficher les éléments communs sans doublon
    for (int i = 0; i < n1; i++) {
        int deja_affiche = 0;

        // Vérifier si a[i] a déjà été affiché
        for (int k = 0; k < i; k++) {
            if (a[i] == a[k]) {
                deja_affiche = 1;
                break;
            }
        }

        if (deja_affiche) continue;

        // Chercher a[i] dans b[]
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    printf("\n");
    return 0;
}
