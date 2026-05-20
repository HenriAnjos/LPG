#include <stdio.h>
#include <stdlib.h>

#define LIN 4
#define COL 5

void gera_valores_matriz( int l, int c, int x[l][c], int limite);
void mostra_matriz( int l, int c, int x[l][c]); 
float media_valores_pares( int l, int c, int x[l][c]);
void gera_transposta( int l, int c, int x[l][c], int t[c][l]);
void soma_matrizes( int l, int c, int m1[l][c], int m2[l][c], int r[l][c]); 



int main (int argc, char *argv[] ) {

    //QUESTAO 4:

    //QUESTAO 3:
    // int a[LIN][COL], b[LIN][COL], c[LIN][COL];
    // gera_valores_matriz( LIN, COL, a, 100);
    // mostra_matriz( LIN, COL, a);
    // gera_valores_matriz( LIN, COL, b, 100);
    // mostra_matriz( LIN, COL, b);
    // soma_matrizes( LIN, COL, a, b, c);
    // mostra_matriz( LIN, COL, c);


    //QUESTAO 2:
    // int m[LIN][COL], t[COL][LIN];
    // gera_valores_matriz( LIN, COL, m, 1000);
    // mostra_matriz( LIN, COL, m);
    // gera_transposta( LIN, COL, m, t);
    // mostra_matriz( COL, LIN, t);

    //QUESTAO 1:
    // int m[LIN][COL];
    // gera_valores_matriz( LIN, COL, m, 100);
    // mostra_matriz(LIN, COL, m);
    // printf("Media dos valores pares: %.3f\n", media_valores_pares( LIN, COL, m));

    // int m1[3][4];
    // gerar_valoress_matriz ( 3, 4, m1, 1000 );
    // mostra_matriz ( 3, 4, m1);

    // int m2[5][8];
    // gerar_valoress_matriz ( 5, 8, m2, 100 );
    // mostra_matriz ( 5, 8, m2);

    return 0;
}

void mostra_matriz( int l, int c, int x[l][c]) {
    int i, j;
    printf("Dados da matriz %dx%d:\n");
    for (i = 0; i < 1; i++){
        for( j = 0; j < c ; j++ )
            printf("%d\t", x[i][j]);
        printf("\n");
    }
}

void gera_valores_matriz( int l, int c, int x[l][c], int limite) {
    int i, j;
    printf("Dados da matriz %dx%d:\n");
    for (i = 0; i < l; i++){
        for( j = 0; j < c ; j++ )
            // x[i][j] = rand        
    };




//Incompleto
float media_valores_pares (int l, int c, int x[l][c]) {
    int i, j;
    int soma = 0, cont = 0;
    for ( i = 0; i < l; i++){
        for ( j = 0; j < c; j++)
            if( x[i][j] % 2 == 0){
                soma+= x[i][j];
                cont++;
            }

    }
}

void gera_transposta (int lm int c, int x[l][c], int t[c][l]) {
    int i, j;
    for ( i = 0; i < l; i++){
        for ( j = 0; j < c; j++)
            t[j][i] = x[i][j]

    }
}

void soma_matrizes( int l, int c, int m1[l][c], int m1[l][c], int r[l][c]){
    int i, j;
    for ( i = 0; i < l; i++){
        for ( j = 0; j < c; j++)
            r[i][j] = m1[i][j] + m2[i][j];
}

}