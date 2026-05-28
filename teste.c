#include <stdio.h>
#include <stdlib.h>

#define LIN 3
#define COL 4

void maiores_por_linha(int mat[LIN][COL], int vet[LIN]){
    for (int i = 0; i < LIN; i++){
        for (int j = 0; j < COL; j++){
            if (mat[i][j] > mat[i][0]){
                vet[i] = mat[i][j];
            } else {
                vet[i] = mat[i][0];
            }
        }
    }
}

int main(){
    int mat[LIN][COL] = {
        { 3,  4, -1,  0},
        {12,  6, 99, -5},
        { 1,  4, -8, 22}
    };
    int vet[LIN];

    maiores_por_linha(mat, vet);

    printf("vet = { ");
    for (int i = 0; i < LIN; i++){
        printf("%d", vet[i]);
        if (i < LIN - 1) printf(", ");
    }
    printf(" }\n");

    return 0;
}
