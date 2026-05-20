#include <stdio.h>
#include <stdlib.h>

int conta (int a, int c, int b) {
    int m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    return m;
}

int main (int argc, char *argv[] ) {
    int a, b, c;
    printf("Informe os 3 valores: \n");
    scanf("%d %d %d", &a, &b, &c);
    printf("O maior valor eh: %d \n", conta(a, b, c));
    return 0;
}