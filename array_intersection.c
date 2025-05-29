#include <stdio.h>  

int main() {
    int n1, n2, i, j, k = 0;

    int tab1[n1];  // Déclaration du premier tableau 
    // Lire la taille du premier tableau
    scanf("%d", &n1);
    

    // Lire les éléments du premier tableau
    for (i = 0; i < n1; i++) {
        scanf("%d", &tab1[i]);
    }

    int tab2[n2];  // Déclaration du deuxième tableau
    // Lire la taille du deuxième tableau
    scanf("%d", &n2);
    

    // Lire les éléments du deuxième tableau
    for (i = 0; i < n2; i++) {
        scanf("%d", &tab2[i]);
    }

    // Déterminer la taille maximale possible de l'intersection
    int max_inter;
    if (n1 < n2)
        max_inter = n1;
    else
        max_inter = n2;

    int intersection[max_inter];  // Tableau pour stocker les éléments communs

    // Parcourir tous les éléments de tab1
    for (i = 0; i < n1; i++) {
        int commun = 0;

        // Vérifier si tab1[i] est présent dans tab2
        for (j = 0; j < n2; j++) {
            if (tab1[i] == tab2[j]) {
                commun = 1;  
                break;       
            }
        }

        // Vérifier si tab1[i] est déjà présent dans le tableau intersection
        int deja_ajoute = 0;
        for (j = 0; j < k; j++) {
            if (intersection[j] == tab1[i]) {
                deja_ajoute = 1;  // Marquer comme déjà ajouté
                break;
            }
        }

        // Ajouter à l'intersection si l'élément est commun et pas encore ajouté
        if (commun && !deja_ajoute) {
            intersection[k] = tab1[i];
            k++;  
        }
    }

    // Afficher le résultat
    printf("Intersection :");
    for (i = 0; i < k; i++) {
        printf(" %d", intersection[i]);  // Afficher chaque élément trouvé
    }
    printf("\n");

    return 0;
}
