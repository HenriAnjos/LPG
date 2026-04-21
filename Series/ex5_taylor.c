#include <stdio.h>

int main() {
    double x, soma = 0.0, fatorial = 1.0, potencia = 1.0;
    int n;

    printf("Valor de x: ");
    scanf("%lf", &x);
    printf("Numero de termos: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            fatorial = 1.0;
            potencia = 1.0;
        } else {
            fatorial *= i;
            potencia *= x;
        }

        double termo = potencia / fatorial;
        soma += termo;
        printf("Termo %d: x^%d/%d! = %.10f\n", i, i, i, termo);
    }

    printf("e^%.4f aproximado: %.10f\n", x, soma);
    return 0;
}
