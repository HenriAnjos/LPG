#include <stdio.h>

/* Gregory-Leibniz: pi = 4/1 - 4/3 + 4/5 - 4/7 + ... */
double gregory_leibniz(int k) {
    double pi = 0.0;
    for (int n = 0; n < k; n++) {
        double sinal = (n % 2 == 0) ? 1.0 : -1.0;
        pi += sinal * 4.0 / (2 * n + 1);
    }
    return pi;
}

/* Nilakantha: pi = 3 + 4/(2*3*4) - 4/(4*5*6) + 4/(6*7*8) - ...
   Para n >= 1: termo n usa denominador (2n)*(2n+1)*(2n+2) */
double nilakantha(int k) {
    double pi = 3.0;
    for (int n = 1; n <= k; n++) {
        double sinal = (n % 2 == 1) ? 1.0 : -1.0;
        double den = (2.0 * n) * (2.0 * n + 1) * (2.0 * n + 2);
        pi += sinal * 4.0 / den;
    }
    return pi;
}

int main() {
    int k;

    printf("Numero de termos: ");
    scanf("%d", &k);

    printf("Gregory-Leibniz (%d termos): %.10f\n", k, gregory_leibniz(k));
    printf("Nilakantha      (%d termos): %.10f\n", k, nilakantha(k));

    return 0;
}
