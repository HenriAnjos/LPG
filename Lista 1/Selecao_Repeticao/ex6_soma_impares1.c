#include <stdio.h>

int main() {
    int x, y, soma = 0, tmp;
    scanf("%d %d", &x, &y);

    /* Garantir que x <= y */
    if (x > y) { tmp = x; x = y; y = tmp; }

    for (int i = x + 1; i < y; i++) {
        if (i % 2 != 0)
            soma += i;
    }

    printf("%d\n", soma);

    return 0;
}
