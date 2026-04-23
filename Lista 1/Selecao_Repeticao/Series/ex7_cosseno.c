#include <stdio.h>

int main() {
    double x, soma = 0.0;
    int n;

    printf("Valor de x (radianos): ");
    scanf("%lf", &x);
    printf("Numero de termos: ");
    scanf("%d", &n);

    /* cos(x) = sum_{n=0}^{inf} (-1)^n * x^(2n) / (2n)! */
    double potencia = 1.0;     /* x^(2n), começa em x^0 = 1 */
    double fatorial = 1.0;     /* (2n)!, começa em 0! = 1 */

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            potencia = 1.0;
            fatorial = 1.0;
        } else {
            /* De x^(2i-2) para x^(2i): multiplica x^2 */
            potencia *= x * x;
            /* De (2i-2)! para (2i)!: multiplica (2i-1) * 2i */
            fatorial *= (2.0 * i - 1) * (2.0 * i);
        }

        double sinal = (i % 2 == 0) ? 1.0 : -1.0;
        double termo = sinal * potencia / fatorial;
        soma += termo;
        printf("Termo %d: %+.10f\n", i, termo);
    }

    printf("cos(%.4f) aproximado: %.10f\n", x, soma);
    return 0;
}
