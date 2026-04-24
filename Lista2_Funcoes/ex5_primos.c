#include <stdio.h>

int eh_primo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(int argc, char *argv[]) {
    int k, n;
    printf("Insira k (a partir de) e n (quantidade de primos): ");
    scanf("%d %d", &k, &n);

    int count = 0;
    int num = k + 1;
    printf("Os %d primeiros primos acima de %d: ", n, k);
    while (count < n) {
        if (eh_primo(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");
    return 0;
}
