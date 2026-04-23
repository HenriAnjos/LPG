#include <stdio.h>

int main() {
    int k;
    double soma = 0.0;

    printf("Numero de termos: ");
    scanf("%d", &k);

    for (int i = 1; i <= k; i++) {
        double termo = 1.0 / i;
        soma += termo;
        printf("Termo %d: 1/%d = %.6f\n", i, i, termo);
    }

    printf("Somatorio: %.6f\n", soma);
    return 0;
}
