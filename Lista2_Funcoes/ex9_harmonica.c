#include <stdio.h>

double harmonica_iterativa(int n) {
    double s = 0.0;
    for (int i = 1; i <= n; i++) s += 1.0 / i;
    return s;
}

double harmonica_recursiva(int n) {
    if (n <= 1) return 1.0;
    return 1.0 / n + harmonica_recursiva(n - 1);
}

int main(int argc, char *argv[]) {
    int n;
    printf("Insira n: ");
    scanf("%d", &n);
    printf("Serie harmonica iterativa:  %.6f\n", harmonica_iterativa(n));
    printf("Serie harmonica recursiva:  %.6f\n", harmonica_recursiva(n));
    return 0;
}
