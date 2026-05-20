#include<stdio.h>
#include<stdlib.h>

#define LIN 5
#define COL 6

void gerar__valores_matriz(int l, int c, int x[l][c], int limite);
void mostrar_matriz(int l, int c, int x[l][c]);
void gera_transposta(int l, int c, int x[l][c], int t[c][l]);

int main (int argc, char *argv[]){
    int m[LIN][COL], t[COL][LIN];

    gerar__valores_matriz(LIN, COL, m, 10);
    mostrar_matriz(LIN, COL, m);
    gera_transposta(LIN, COL, m, t);
    mostrar_matriz(COL, LIN, t);

    return 0;
}


void gerar__valores_matriz(int l, int c, int x[l][c], int limite){
    int i, j;
    for (i = 0; i < l; i++)
        for (j = 0; j < c; j++)
        x[i][j] = rand() % limite + 1;
}

void mostrar_matriz(int l, int c, int x[l][c]){
    int i, j;
    printf("Valores da Matriz[%d x %d]:\n", l, c);
    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++)
        printf("%d\t", x[i][j]);
        printf("\n");
    }
    printf("\n");
}

void gera_transposta(int l, int c, int x[l][c], int t[c][l]){
    int i, j;
    for(i = 0; i < l; i++)
        for(j = 0; j < c; j++)
        t[j][i] = x[i][j];
}