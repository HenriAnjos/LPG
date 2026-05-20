#include <stdio.h>
#include <stdlib.h>

#define LIN 3
#define COL 4

void gera_matriz(int l, int c, int x[l][c], int limite);
void max_lin(int mat[LIN][COL], int vet[COL]);
void mostra_vetor(int vet[COL]);

int main(){
    int m[LIN][COL];
    int vet[COL];

    gera_matriz(LIN, COL, m, 100);
    max_lin(m, vet);
    mostra_vetor(vet);

    return 0;
}

void gera_matriz(int l, int c, int x[l][c], int limite){
    int i, j;
    srand(42);
    for(i = 0; i < l; i++)
        for(j = 0; j < c; j++)
            x[i][j] = rand() % limite + 1;
}

void max_lin(int mat[LIN][COL], int vet[COL]){
    int max = mat[0][0];
    int linha_max = 0;

    for(int i = 0; i < LIN; i++)
        for(int j = 0; j < COL; j++)
            if(mat[i][j] > max){
                max = mat[i][j];
                linha_max = i;
            }

    for(int j = 0; j < COL; j++)
        vet[j] = mat[linha_max][j];
}

void mostra_vetor(int vet[COL]){
    printf("Linha com maior valor: ");
    for(int i = 0; i < COL; i++)
        printf("%d ", vet[i]);
    printf("\n");
}
