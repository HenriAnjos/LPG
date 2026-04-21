#include <stdio.h>

int main() {
    double a, b, c, tmp;
    scanf("%lf %lf %lf", &a, &b, &c);

    /* Ordenar em ordem decrescente: a >= b >= c */
    if (a < b) { tmp = a; a = b; b = tmp; }
    if (a < c) { tmp = a; a = c; c = tmp; }
    if (b < c) { tmp = b; b = c; c = tmp; }

    if (a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }

    if (a * a == b * b + c * c)
        printf("TRIANGULO RETANGULO\n");
    else if (a * a > b * b + c * c)
        printf("TRIANGULO OBTUSANGULO\n");
    else
        printf("TRIANGULO ACUTANGULO\n");

    if (a == b && b == c)
        printf("TRIANGULO EQUILATERO\n");
    else if (a == b || b == c || a == c)
        printf("TRIANGULO ISOSCELES\n");

    return 0;
}
