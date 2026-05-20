#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
int n,k;
printf("Tamanho da matriz:\n");
scanf("%d %d", &n, &k);
printf("M[%d x %d] \n", n, k);

int m[n][k], i, j;
for ( i = 0; i < n; i ++){
    for ( j = 0; j < k; j++){
        printf("M[%d, %d] = \n", i, j);
        scanf("%d", &m[i][j]);
    }
    printf("\n");
}

printf("\nMatriz:\n");
for (i = 0; i < n; i++) {
    for (j = 0; j < k; j++) {
        printf("%d ", m[i][j]);
    }
    printf("\n");
}

return 0;

}
