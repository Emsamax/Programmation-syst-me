//
// Created by emsam on 30/01/2023.
//

#include <stdio.h>
#include <stdlib.h>
#define N 2

int** alloue_matrice(){
    int** t = malloc(N * sizeof(int));
    for(int i = 0; i<N; i++){
        t[i] = malloc(N * sizeof (int));
    }
    return t;
}

void afficher(int ** mat){
    for(int i =0; i<N; i++){
        for (int j = 0; j < N; ++j) {
            //4d = affichage occupe 4 espace.
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }
}

int ** multiplier(int ** mat1, int ** mat2){
    int ** resultat = alloue_matrice();

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            int res = 0;
            for (int k = 0; k < N; ++k) {
                res += mat1[i][k] * mat2[k][j];
            }
            resultat[i][j] = res;
        }
    }
    return resultat;
}

int main(){
    //printf("Hello, World!\n %d", N);
    int **matrice = alloue_matrice();
    matrice[0][0] = 1;
    matrice[0][1] = 0;
    matrice[1][0] = 2;
    matrice[1][1] = 3;
    afficher(matrice);

    printf("\n");

    int **matrice1 = alloue_matrice();
    matrice1[0][0] = 4;
    matrice1[0][1] = 3;
    matrice1[1][0] = 7;
    matrice1[1][1] = 1;
    afficher(matrice1);
    return 0;
}
