#include <stdio.h>

int soma_especial(int n, int k, int x) {
    int primeiro = x;
    if (primeiro % k != 0)
        primeiro = (x / k + 1) * k;

    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += primeiro + i * k;
    }
    return soma;
}

int main(int argc, char *argv[]) {
    int n, k, x;
    printf("Insira n (quantidade), k (multiplo) e x (inicio): ");
    scanf("%d %d %d", &n, &k, &x);
    printf("Soma: %d\n", soma_especial(n, k, x));
    return 0;
}
