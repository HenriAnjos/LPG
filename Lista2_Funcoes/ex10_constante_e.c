#include <stdio.h>

double fatorial(int n) {
    double f = 1.0;
    for (int i = 2; i <= n; i++) f *= i;
    return f;
}

double constante_e_iterativa(int n) {
    double s = 0.0;
    for (int i = 0; i <= n; i++) s += 1.0 / fatorial(i);
    return s;
}

double constante_e_recursiva(int n) {
    if (n == 0) return 1.0;
    return 1.0 / fatorial(n) + constante_e_recursiva(n - 1);
}

int main(int argc, char *argv[]) {
    int n;
    printf("Insira n: ");
    scanf("%d", &n);
    printf("Constante e iterativa:  %.10f\n", constante_e_iterativa(n));
    printf("Constante e recursiva:  %.10f\n", constante_e_recursiva(n));
    return 0;
}
