#include <stdio.h>

int main() {
    int n, val;
    int pares = 0, impares = 0, positivos = 0, negativos = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        if (val % 2 == 0)
            pares++;
        else
            impares++;
        if (val > 0)
            positivos++;
        else if (val < 0)
            negativos++;
    }

    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);

    return 0;
}
