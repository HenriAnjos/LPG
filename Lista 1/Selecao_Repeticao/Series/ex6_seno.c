#include <stdio.h>

int main() {
    double x, soma = 0.0;
    int n;

    printf("Valor de x (radianos): ");
    scanf("%lf", &x);
    printf("Numero de termos: ");
    scanf("%d", &n);

    /* seno(x) = sum_{n=0}^{inf} (-1)^n * x^(2n+1) / (2n+1)! */
    double potencia = x;       /* x^(2n+1), começa em x^1 */
    double fatorial = 1.0;     /* (2n+1)!, começa em 1! */

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            potencia = x;
            fatorial = 1.0;
        } else {
            /* De x^(2i-1) para x^(2i+1): multiplica x^2 */
            potencia *= x * x;
            /* De (2i-1)! para (2i+1)!: multiplica 2i * (2i+1) */
            fatorial *= (2.0 * i) * (2.0 * i + 1);
        }

        double sinal = (i % 2 == 0) ? 1.0 : -1.0;
        double termo = sinal * potencia / fatorial;
        soma += termo;
        printf("Termo %d: %+.10f\n", i, termo);
    }

    printf("seno(%.4f) aproximado: %.10f\n", x, soma);
    return 0;
}
