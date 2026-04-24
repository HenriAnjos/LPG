#include <stdio.h>

int soma_iterativa(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) s += i;
    return s;
}

int soma_recursiva(int n) {
    if (n <= 1) return n;
    return n + soma_recursiva(n - 1);
}

int main(int argc, char *argv[]) {
    int n;
    printf("Insira n: ");
    scanf("%d", &n);
    printf("Soma iterativa:  %d\n", soma_iterativa(n));
    printf("Soma recursiva:  %d\n", soma_recursiva(n));
    return 0;
}
