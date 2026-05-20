#include <stdio.h>
#include <stdlib.h>

void menores_precos(int m, int n, float mat[m][n], float vet[n]){
    float soma_menor = 0;
    for (int j = 0; j < n; j++)
        soma_menor += mat[0][j];
    int linha_menor = 0;

    for (int i = 1; i < m; i++){
        float soma = 0;
        for (int j = 0; j < n; j++)
            soma += mat[i][j];
        if (soma < soma_menor){
            soma_menor = soma;
            linha_menor = i;
        }
    }

    for (int j = 0; j < n; j++)
        vet[j] = mat[linha_menor][j];
}