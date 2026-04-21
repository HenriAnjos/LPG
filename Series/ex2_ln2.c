#include <stdio.h>

int main() {
    int k;
    double soma = 0.0;

    printf("Numero de termos: ");
    scanf("%d", &k);

    for (int n = 1; n <= k; n++) {
        /* (-1)^(n+1) / n */
        double sinal = (n % 2 == 1) ? 1.0 : -1.0;
        double termo = sinal / n;
        soma += termo;
        printf("Termo %d: %+.6f\n", n, termo);
    }

    printf("Somatorio: %.6f\n", soma);
    return 0;
}
