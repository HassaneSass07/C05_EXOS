#include <stdio.h>

int main() {
    int n1, n2;
    
    scanf("%d", &n1);
    int a[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }
    
    scanf("%d", &n2);
    int b[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }
    
    int first_element = 1;
    
    for (int i = 0; i < n1; i++) {
        // Éviter les doublons en vérifiant les éléments précédents
        int is_duplicate = 0;
        for (int prev = 0; prev < i; prev++) {
            if (a[i] == a[prev]) {
                is_duplicate = 1;
                break;
            }
        }
        if (is_duplicate) continue;
        
        // Chercher dans le deuxième tableau
        int found = 0;
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                found = 1;
                break;
            }
        }
        
        // Afficher si trouvé
        if (found) {
            if (!first_element) printf(" ");
            printf("%d", a[i]);
            first_element = 0;
        }
    }
    
    printf("\n");
    return 0;
}