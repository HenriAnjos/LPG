#include <stdio.h>
#include <stdlib.h>

#define LIN 4
#define COL 5

void gerar__valores_matriz (int l, int c, int x[l][c], int limite);
void mostrar_matriz(int l, int c, int x[l][c]);
float media_valores_pares (int l, int c, int x[l][c]);

int main (int argc, char *argv[]){
    int m[LIN][COL];
    
    gerar__valores_matriz(LIN, COL, m, 100);
    mostrar_matriz(LIN, COL, m);
    printf("Media dos valores pares: %.3d", media_valores_pares(LIN, COL, m));

    return 0;
}

void gerar__valores_matriz (int l, int c, int x[l][c], int limite){
    int i, j;
    for ( i = 0; i < l; i++)
        for ( j = 0; j < c; j++)
            x[i][j] = rand () % limite + 1;
}

void mostrar_matriz(int l, int c, int x[l][c]){
    int i, j;
    printf("Valores da Matriz[%d x %d]:\n", l, c);
    for ( i = 0; i < l; i++){
        for (j = 0; j < c; j++)
            printf("%d\t", x[i][j]);
        printf("\n");
    }
    printf("\n");
}

float media_valores_pares (int l, int c, int x[l][c]) {
    int i, j;
    int soma = 0, cout = 0;
    for ( i = 0; i < l; i++)
        for ( j = 0; j < c; j++)
        if (x[i][j] % 2 == 0){
            soma += x[i][j];
            cout++;
        }
    return (float)soma/cout;
}