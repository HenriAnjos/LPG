#include <stdio.h>

int main() {
    int n, x, y, soma, tmp;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        soma = 0;

        /* Garantir que x <= y */
        if (x > y) { tmp = x; x = y; y = tmp; }

        for (int j = x + 1; j < y; j++) {
            if (j % 2 != 0)
                soma += j;
        }

        printf("%d\n", soma);
    }

    return 0;
}
