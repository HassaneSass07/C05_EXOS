#include <stdio.h>

int main() {
    int n1, n2;

    // Lire la taille du premier tableau
    scanf("%d", &n1);
    int arr1[n1];

    // Lire les éléments du premier tableau
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Lire la taille du deuxième tableau
    scanf("%d", &n2);
    int arr2[n2];

    // Lire les éléments du deuxième tableau
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Préparer le tableau pour stocker l'intersection
    int intersection[n1 < n2 ? n1 : n2];
    int taille_intersection = 0;

    // Trouver les éléments communs sans doublons
    for (int i = 0; i < n1; i++) {
        int trouve = 0;

        // Vérifier si arr1[i] est présent dans arr2
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                trouve = 1;
                break;
            }
        }

        // Si trouvé, vérifier qu'il n'est pas déjà dans l'intersection
        if (trouve) {
            int deja_present = 0;
            for (int k = 0; k < taille_intersection; k++) {
                if (intersection[k] == arr1[i]) {
                    deja_present = 1;
                    break;
                }
            }

            // Si pas encore présent, l'ajouter
            if (!deja_present) {
                intersection[taille_intersection] = arr1[i];
                taille_intersection++;
            }
        }
    }

    // Afficher l'intersection
    printf("Intersection : ");
    for (int i = 0; i < taille_intersection; i++) {
        printf("%d", intersection[i]);
        if (i < taille_intersection - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
