#include <stdio.h>

int maior(int a, int b, int c) {
    int m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    return m;
}

int main(int argc, char *argv[]) {
    int a, b, c;
    printf("Insira tres valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Maior valor: %d\n", maior(a, b, c));
    return 0;
}
