#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 4
#define COL 5

void gerar__valores_matriz ( int l, int c, int x[l][c], int limite);
void mostra_matriz(int l, int c, int x[l][c]);
float media_valores_pares(int l, int c, int x[l][c]);

int main (int argc, char *argv[]) {
// int n, k;
// printf("Informe o Tamanho da Matriz:\n");
// scanf("%d %d", &n, &k);
printf("Informe os Valores da Matirz[4 x 5]:\n");

int m[LIN][COL],i, j;
// for (i = 0; i < LIN; i++){
//     for (j = 0; j < COL; j++){
//         printf("M[%d x %d]:\n", i, j);
//         scanf("%d", &m[i][j]);
//     }
// }

// srand( time(0) );
// for( i = 0 ; i < LIN ; i++ )
// 	for( j = 0 ; j < COL ; j++ )
// 		m[i][j] = rand() % 1000 + 1;


// printf("\nMatriz:\n");
// for (i = 0; i < LIN; i++) {
//     for (j = 0; j < COL; j++) {
//         printf("%d ", m[i][j]);
//     }
//     printf("\n");
// }

gerar__valores_matriz(LIN, COL, m, 10);
mostra_matriz(LIN, COL, m);
printf("Media dos valores pares: %.3f\n", media_valores_pares( LIN, COL, m));


return 0;
}

void gerar__valores_matriz ( int l, int c, int x[l][c], int limite){
    srand( time(0) );
    int i, j;
    for ( i = 0; i < l; i++ )
        for ( j = 0; j < c; j++)
    x[i][j] = rand() % limite + 1;
}

void mostra_matriz ( int l, int c, int x[l][c]){
    int i, j;
    printf("Dados da Matriz[%d x %d]:\n", l, c);
    for (i = 0; i < l; i++){
        for (j = 0 ; j < c; j++){
            printf("%d\t", x[i][j]);
        }
		printf("\n");
    }
    printf("\n");
}

float media_valores_pares (int l, int c, int x[l][c]) {
    int i, j;
    int soma = 0, cout = 0;
        for (int i = 0; i < l; i++)
            for (int j = 0; j < c; j++)
                if(x[i][j] % 2 == 0) {
                    soma += x[i][j];
                    cout++;
                }
    return (float) soma/cout;
}