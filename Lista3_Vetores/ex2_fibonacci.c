#include <stdio.h>

void fibonacci(int v[], int n) {
    if (n <= 0) return;
    v[0] = 1;
    if (n == 1) return;
    v[1] = 1;
    for (int i = 2; i < n; i++)
        v[i] = v[i - 1] + v[i - 2];
}

int main(int argc, char *argv[]) {
    int n;
    printf("Quantidade de termos: ");
    scanf("%d", &n);

    int v[n];
    fibonacci(v, n);

    printf("Fibonacci: ");
    for (int i = 0; i < n; i++) printf("%d ", v[i]);
    printf("\n");

    return 0;
}
