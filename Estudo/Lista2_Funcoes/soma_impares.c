#include <stdio.h>
#include <stdlib.h>


int soma_impares ( int x, int y) {
    int inicio, fim;
    if (x < y) {
        inicio = x;
        fim = y;
    } else {
        inicio = y;
        fim = x;
    }

    int soma = 0;
    for ( int i = inicio + 1; i < fim; i++) {
        if (i % 2 != 0) soma += i;
    }

    return soma;
}

int main (int argc, char *argv[]) {
    int x, y;

    printf("Insta os valores de x e y: \n");
    scanf("%d %d", &x, &y);

    printf("A soma entre x e y eh: %d", soma_impares(x, y));

    return 0;
}