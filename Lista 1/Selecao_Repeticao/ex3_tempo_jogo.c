#include <stdio.h>

int main() {
    int inicio, fim, duracao;
    scanf("%d %d", &inicio, &fim);

    if (fim > inicio)
        duracao = fim - inicio;
    else
        duracao = 24 - inicio + fim;

    /* Se inicio == fim, duracao = 0 - mas o enunciado diz max 24h, então 0 0 = 24h */
    if (duracao == 0)
        duracao = 24;

    printf("O JOGO DUROU %d HORA(S)\n", duracao);

    return 0;
}
