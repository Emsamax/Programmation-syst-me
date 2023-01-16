#include <stdio.h>
#define N 4

float fibonacci(int k){
    int valueA = 0;
    int valueB = 1;

    for(int i = 0; i<k; i++){
        int somme = valueA + valueB;
        valueA = valueB;
        valueB = somme;
    }
    return valueA;
}

float fibonnaciWhile(int k){
    int valueA = 0;
    int valueB = 1;
    int i = 0;
    while(i != k){
        int somme = valueA + valueB;
        valueA = valueB;
        valueB = somme;
        i++;
    }
    return valueA;
}
//renvoie la moyenne d'un tableau d'int d'une taille de 4 éléments.
double moyenneTab(int tab[N]){
    int somme = 0;
    for(int i = 0; i<N; i++){
        somme += tab[i];
    }
    return (double) somme/4;
}

int main() {

    int a = 2;
    int b = 3;
    int c = 11;
    float moy = (a+b+c)/3;
    printf("%.2f\n", moy);

    printf("avec for %.0f\n",fibonacci(20));

    printf("avec while %.0f\n", fibonnaciWhile(20));

    int tab[N] = {2, 4, 8, 5};
    printf("moyenne tab %.2f\n", moyenneTab(tab));

}
