#include <stdio.h>

int main() {
    int n1, n2, i, j, k = 0;

    // Lecture de la taille du premier tableau
    scanf("%d", &n1);
    int tab1[n1];
    for (i = 0; i < n1; i++) {
        scanf("%d", &tab1[i]);
    }

    // Lecture de la taille du second tableau
    scanf("%d", &n2);
    int tab2[n2];
    for (i = 0; i < n2; i++) {
        scanf("%d", &tab2[i]);
    }

    // Taille maximale de l'intersection = taille du plus petit tableau
    int taille_max;
    if (n1 < n2) {
        taille_max = n1;
    } else {
        taille_max = n2;
    }

    int inter[taille_max]; // Tableau pour stocker l'intersection sans doublons

    // Parcours du premier tableau
    for (i = 0; i < n1; i++) {
        int present_dans_tab2 = 0;

        // Vérifie si tab1[i] est présent dans tab2
        for (j = 0; j < n2; j++) {
            if (tab1[i] == tab2[j]) {
                present_dans_tab2 = 1;
                break;
            }
        }

        // Si l'élément n'existe pas dans tab2, on continue
        if (present_dans_tab2 == 0) {
            continue;
        }

        // Vérifie si l'élément est déjà dans inter[]
        int deja_present = 0;
        for (j = 0; j < k; j++) {
            if (inter[j] == tab1[i]) {
                deja_present = 1;
                break;
            }
        }

        // Si pas encore présent, on l'ajoute
        if (deja_present == 0) {
            inter[k] = tab1[i];
            k++;
        }
    }

    // Affichage de l'intersection
    printf("Intersection :");
    for (i = 0; i < k; i++) {
        printf(" %d", inter[i]);
    }
    printf("\n");

    return 0;
}
