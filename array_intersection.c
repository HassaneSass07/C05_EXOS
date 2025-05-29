#include <stdio.h>

int main() {
    int n1, n2, i, j, k = 0;

    // Lire la taille et les éléments du premier tableau
    scanf("%d", &n1);
    int a[n1];
    for (i = 0; i < n1; i++) scanf("%d", &a[i]);

    // Lire la taille et les éléments du deuxième tableau
    scanf("%d", &n2);
    int b[n2], inter[n1 < n2 ? n1 : n2]; // Taille max = min(n1, n2)
    for (i = 0; i < n2; i++) scanf("%d", &b[i]);

    // Parcourir chaque élément du tableau a[]
    for (i = 0; i < n1; i++) {
        // Vérifier si l'élément a[i] existe dans b[]
        for (j = 0; j < n2; j++)
            if (a[i] == b[j]) break;
        if (j == n2) continue; // pas trouvé dans b[], on passe au suivant

        // Vérifier si a[i] est déjà dans le tableau inter[]
        for (j = 0; j < k; j++)
            if (inter[j] == a[i]) break;

        // Si pas encore présent dans inter[], on l'ajoute
        if (j == k) inter[k++] = a[i];
    }

    // Afficher les éléments de l'intersection
    printf("Intersection : ");
    for (i = 0; i < k; i++)
        printf("%d%s", inter[i], i < k - 1 ? " " : "\n");

    return 0;
}
