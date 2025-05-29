#include <stdio.h>

int main() {
    int n1, n2, i, j, k = 0; // n1, n2 : tailles des tableaux ; k : taille de l'intersection

    // Lire la taille du premier tableau
    scanf("%d", &n1);
    int a[n1];

    // Lire les éléments du premier tableau
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    // Lire la taille du deuxième tableau
    scanf("%d", &n2);
    int b[n2];

    // Lire les éléments du deuxième tableau
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    // Déterminer la taille maximale possible pour l'intersection
    int max;
    if (n1 < n2)
        max = n1;
    else
        max = n2;

    int inter[max]; // Tableau pour stocker l'intersection

    // Parcourir chaque élément du tableau a[]
    for (i = 0; i < n1; i++) {
        // Vérifier si a[i] est présent dans le tableau b[]
        for (j = 0; j < n2; j++) {
            if (a[i] == b[j])
                break; // trouvé → sortir de la boucle
        }

        // Si l'élément n'a pas été trouvé dans b[], passer au suivant
        if (j == n2)
            continue;

        // Vérifier si a[i] est déjà dans l'intersection
        for (j = 0; j < k; j++) {
            if (inter[j] == a[i])
                break; // déjà présent → ne pas l'ajouter
        }

        // S'il n'est pas encore dans l'intersection, on l'ajoute
        if (j == k) {
            inter[k] = a[i];
            k++;
        }
    }

    // Afficher les éléments de l'intersection
    printf("Intersection :");
    for (i = 0; i < k; i++)
        printf(" %d", inter[i]);
    printf("\n");

    return 0;
}
