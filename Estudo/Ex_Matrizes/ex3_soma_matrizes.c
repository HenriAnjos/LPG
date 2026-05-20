#include <stdio.h>
#include <stdlib.h>

#define LIN 4
#define COL 5

void gera_valores_matriz(int l, int c, int x[l][c], int limite);
void mostra_matriz(int l, int c, int x[l][c]);
void soma_matriz(int l, int c, int x[l][c], int b[l][c], int soma[l][c]);

int main(int argc, char *argv[]){
    
    int m[LIN][COL], b[LIN][COL], soma[LIN][COL];

    gera_valores_matriz(LIN, COL, m, 10);
    mostra_matriz(LIN, COL, m);
    gera_valores_matriz(LIN, COL, b, 10);
    mostra_matriz(LIN, COL, b);
    soma_matriz(LIN, COL, m, b, soma);
    mostra_matriz(LIN, COL, soma);
    
    return 0;
}


void gera_valores_matriz(int l, int c, int x[l][c], int limite){
    int i, j;
    for(i = 0; i < l; i++)
        for(j = 0; j < c; j++)
    x[i][j] = rand() % limite + 1;
}

void mostra_matriz(int l, int c, int x[l][c]) {
    int i, j;
    printf("Valores da Matriz[%d x %d]:\n", l, c);
    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++)
        printf("%d\t", x[i][j]);
        printf("\n");
    }
    printf("\n");
}

void soma_matriz(int l, int c, int x[l][c], int b[l][c], int soma[l][c]){
    int i, j;
    for(i = 0; i < l; i++)
        for(j = 0; j < c; j++)
        soma[i][j] = x[i][j] + b[i][j];
}

