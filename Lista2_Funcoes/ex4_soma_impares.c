#include <stdio.h>

int soma_impares(int x, int y) {
    int inicio, fim;
    if (x < y) {
        inicio = x;
        fim = y;
    } else {
        inicio = y;
        fim = x;
    }

    int soma = 0;
    for (int i = inicio + 1; i < fim; i++) {
        if (i % 2 != 0) soma += i;
    }
    return soma;
}

int main(int argc, char *argv[]) {
    int x, y;
    printf("Insira x e y: ");
    scanf("%d %d", &x, &y);
    printf("Soma dos impares entre %d e %d: %d\n", x, y, soma_impares(x, y));
    return 0;
}
