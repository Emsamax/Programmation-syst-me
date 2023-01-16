#include <stdio.h>

#define N 4

float fibonacci(int k) {
    int valueA = 0;
    int valueB = 1;

    for (int i = 0; i < k; i++) {
        int somme = valueA + valueB;
        valueA = valueB;
        valueB = somme;
    }
    return valueA;
}

float fibonnaciWhile(int k) {
    int valueA = 0;
    int valueB = 1;
    int i = 0;
    while (i != k) {
        int somme = valueA + valueB;
        valueA = valueB;
        valueB = somme;
        i++;
    }
    return valueA;
}

//renvoie la moyenne d'un tableau d'int d'une taille de 4 éléments.
double moyenneTab(int tab[N]) {
    int somme = 0;
    for (int i = 0; i < N; i++) {
        somme += tab[i];
    }
    return (double) somme / 4;
}

int affichage(char chaine[]) {
    int i = 0;
    //chaine[i] != '\0' car pointeur vise un tableau de caracters or on a besoin que du premier mots
    // donc du premier élément du sous tableau de caractere qui compose argV
    // on s'arette au premier element vide qui correspond à '\0'
    while (chaine[i] != '\0') {
        printf("%c", chaine[i]);
        i++;
    }
    printf("\n%d\n", i);
    return 0;
}

int palyndrome(char chaine[]) {
    int i = 0;
    while (chaine[i] != '\0') {
        i++;
    }
    printf("%d", i);
    char inverse[i];
    int z = 0;
    for (int j = i - 1; j >= 0; --j) {
        printf("%c", chaine[j]);
        inverse[z] = chaine[j];
        z++;
    }
    printf("%s", inverse);

    if (inverse == chaine) {
        printf("LESSSSSSSSSSGOOOOOO %s", inverse);
    }
}

int main(int argc, char *argv[]) {

    int a = 2;
    int b = 3;
    int c = 11;
    float moy = (a + b + c) / 3;
    printf("%.2f\n", moy);

    printf("avec for %.0f\n", fibonacci(20));

    printf("avec while %.0f\n", fibonnaciWhile(20));

    int tab[N] = {2, 4, 8, 5};
    printf("moyenne tab %.2f\n", moyenneTab(tab));

    printf("%s\n", affichage(argv[1]));
    for (int j = 1; j < argc; ++j) {
        int i = 0;
        while (argv[j][i] != '\0') {
            printf("%c", argv[j][i]);
            i++;
        }
        printf("\n%d\n", i);
    }

    palyndrome(argv[1]);

}
