#include <stdio.h>

int main() {
    int n1, n2, i, j, k = 0;

    // Lire les tailles des deux tableaux
    scanf("%d", &n1);
    int a[n1];
    for (i = 0; i < n1; i++) scanf("%d", &a[i]);

    scanf("%d", &n2);
    int b[n2];
    for (i = 0; i < n2; i++) scanf("%d", &b[i]);

    // Déclaration du tableau résultat pour l'intersection
    int inter[n1 + n2];  // Taille maximale possible (au pire tous en commun)

    // Vérification de chaque élément de a[]
    for (i = 0; i < n1; i++) {
        // Chercher l'élément a[i] dans b[]
        for (j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                // Vérifier s’il est déjà présent dans inter[]
                int existe = 0;
                for (int m = 0; m < k; m++) {
                    if (inter[m] == a[i]) {
                        existe = 1;
                        break;
                    }
                }
                // Si ce n’est pas un doublon, on l’ajoute
                if (!existe) inter[k++] = a[i];
                break;  // Pas besoin de continuer à chercher dans b[]
            }
        }
    }

    // Affichage du résultat
    printf("Intersection :");
    for (i = 0; i < k; i++) printf(" %d", inter[i]);
    printf("\n");

    return 0;
}
