#include <stdio.h>

int fibo(int n) {
    if (n <= 1) return 1;
    int a = 1, b = 1;
    for (int i = 2; i <= n; i++) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int main(int argc, char *argv[]) {
    int n;
    printf("Quantidade de termos: ");
    scanf("%d", &n);

    printf("Fibonacci: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibo(i));
    }
    printf("\n");
    return 0;
}
