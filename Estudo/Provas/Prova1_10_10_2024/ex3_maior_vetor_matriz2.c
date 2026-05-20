#include <stdio.h>
#include <stdlib.h>

#define LIN 3
#define COL 4

void max_lin(int mat[LIN][COL], int vet[COL]) {
    int max = mat[0][0];
    int linha_max = 0;

    for (int i = 0; i < LIN; i++)
        for (int j = 0; j < COL; j++)
            if(mat[i][j] > max){
                max = mat[i][j];
                linha_max = i;
            }

    for (int j = 0; j < COL; j++)
        vet[j] = mat[linha_max][j];
}