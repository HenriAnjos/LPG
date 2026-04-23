#include <stdio.h>

int main() {
    int n;
    double soma = 0.0, fatorial = 1.0;

    printf("Numero de termos: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (i == 0)
            fatorial = 1.0;   /* 0! = 1 */
        else
            fatorial *= i;    /* acumula i! */

        double termo = 1.0 / fatorial;
        soma += termo;
        printf("Termo %d: 1/%d! = %.10f\n", i, i, termo);
    }

    printf("e aproximado: %.10f\n", soma);
    return 0;
}
