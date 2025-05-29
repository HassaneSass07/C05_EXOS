#include <stdio.h>

int main() {
    int n1, n2;
    
    // Lire la taille du premier tableau
    scanf("%d", &n1);
    
    // Déclarer et lire le premier tableau
    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    // Lire la taille du deuxième tableau
    scanf("%d", &n2);
    
    // Déclarer et lire le deuxième tableau
    int arr2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    // Tableau pour stocker l'intersection
    int intersection[n1 < n2 ? n1 : n2]; // Taille max = min(n1, n2)
    int taille_intersection = 0;
    
    // Trouver les éléments communs
    for (int i = 0; i < n1; i++) {
        // Vérifier si arr1[i] existe dans arr2
        int trouve_dans_arr2 = 0;
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                trouve_dans_arr2 = 1;
                break;
            }
        }
        
        // Si l'élément est trouvé dans arr2, vérifier qu'il n'est pas déjà dans l'intersection
        if (trouve_dans_arr2) {
            int deja_dans_intersection = 0;
            for (int k = 0; k < taille_intersection; k++) {
                if (intersection[k] == arr1[i]) {
                    deja_dans_intersection = 1;
                    break;
                }
            }
            
            // Ajouter à l'intersection si pas encore présent
            if (!deja_dans_intersection) {
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