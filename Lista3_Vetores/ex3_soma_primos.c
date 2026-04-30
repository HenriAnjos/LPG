#include <stdio.h>

int eh_primo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int soma_primos(int v[], int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        if (eh_primo(v[i])) soma += v[i];
    }
    return soma;
}

int main(int argc, char *argv[]) {
    int n;
    printf("Tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];
    printf("Insira os valores:\n");
    for (int i = 0; i < n; i++) scanf("%d", &v[i]);

    printf("Soma dos primos: %d\n", soma_primos(v, n));
    return 0;
}
