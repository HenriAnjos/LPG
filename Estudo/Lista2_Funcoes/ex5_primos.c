#include <stdio.h>
#include <stdlib.h>

int eh_primo (int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main (int argc, char *argv[]) {
    int n, k;

    printf("Insira os valores de n e k: \n");
    scanf("%d %d", &n, &k);

    int encontrados = 0;
    int num = k + 1;

    printf("Os %d primeiros primos acima de %d:\n", n, k);
    while (encontrados < n) {
        if (eh_primo(num)) {
            printf("%d\n", num);
            encontrados++;
        }
        num++;
    }

    return 0;
}