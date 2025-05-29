#include <stdio.h>

// Fonction pour lire un tableau
void lire_tableau(int t[], int taille) {
    for (int i = 0; i < taille; i++) {
        scanf("%d", &t[i]);
    }
}

// Fonction pour vérifier si un élément existe déjà dans un tableau
int existe_deja(int t[], int taille, int valeur) {
    for (int i = 0; i < taille; i++) {
        if (t[i] == valeur) return 1;
    }
    return 0;
}

// Fonction pour afficher un tableau
void afficher_tableau(int t[], int taille) {
    printf("Intersection :");
    for (int i = 0; i < taille; i++) {
        printf(" %d", t[i]);
    }
    printf("\n");
}

// Fonction principale
int main() {
    int n1, n2;

    // Lire les tailles
    scanf("%d", &n1);
    int t1[n1];
    lire_tableau(t1, n1);

    scanf("%d", &n2);
    int t2[n2];
    lire_tableau(t2, n2);

    // Tableau pour stocker l'intersection
    int inter[n1 + n2];
    int k = 0;

    // Recherche des éléments communs sans doublons
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (t1[i] == t2[j]) {
                if (!existe_deja(inter, k, t1[i])) {
                    inter[k++] = t1[i];
                }
                break;
            }
        }
    }

    // Affichage du résultat
    afficher_tableau(inter, k);

    return 0;
}
