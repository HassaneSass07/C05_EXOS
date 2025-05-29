#include <stdio.h>

int main() {
    int n1, n2, i, j, k = 0;

    // Lecture de la taille et des éléments du premier tableau
    scanf("%d", &n1);
    int a[n1];
    for (i = 0; i < n1; i++) scanf("%d", &a[i]);

    // Lecture de la taille et des éléments du deuxième tableau
    scanf("%d", &n2);
    int b[n2];
    for (i = 0; i < n2; i++) scanf("%d", &b[i]);

    // Calcul de la taille maximale possible pour l'intersection
    int max;
    if (n1 < n2) max = n1;
    else max = n2;
    int inter[max]; // Tableau pour stocker l’intersection

    // Parcourir chaque élément du premier tableau
    for (i = 0; i < n1; i++) {
        // Vérifie si a[i] existe dans le deuxième tableau
        for (j = 0; j < n2 && a[i] != b[j]; j++);
        if (j == n2) continue; // a[i] non trouvé → passer à l'élément suivant

        // Vérifie si a[i] est déjà dans l'intersection
        for (j = 0; j < k && inter[j] != a[i]; j++);
        if (j == k) inter[k++] = a[i]; // Si ce n’est pas déjà là, on l’ajoute
    }

    // Affichage du tableau intersection
    printf("Intersection :");
    for (i = 0; i < k; i++) printf(" %d", inter[i]);
    printf("\n");

    return 0;
}
