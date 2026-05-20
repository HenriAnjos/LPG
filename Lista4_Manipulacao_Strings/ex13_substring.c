#include <stdio.h>

void substring(char str[], int ini, int n, char sub[]) {
    int tam = 0;
    while (str[tam] != '\0') tam++;

    if (ini >= tam) {
        sub[0] = '\0';
        return;
    }

    int j = 0;
    for (int i = ini; i < ini + n && i < tam; i++) {
        sub[j++] = str[i];
    }
    sub[j] = '\0';
}

int main() {
    char str[] = "Alguma Coisa 123";
    char sub[100];

    substring(str, 7, 5, sub);
    printf("(1) sub = \"%s\"\n", sub);

    substring(str, 13, 3, sub);
    printf("(2) sub = \"%s\"\n", sub);

    substring(str, 13, 10, sub);
    printf("(3) sub = \"%s\"\n", sub);

    substring(str, 20, 5, sub);
    printf("(4) sub = \"%s\"\n", sub);

    return 0;
}
