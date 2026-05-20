#include <stdio.h>

void inverte(char s[]) {
    int tam = 0;
    while (s[tam] != '\0') tam++;

    for (int i = 0; i < tam / 2; i++) {
        char tmp = s[i];
        s[i] = s[tam - 1 - i];
        s[tam - 1 - i] = tmp;
    }
}

int main() {
    char s[100];

    printf("Digite uma string: ");
    fgets(s, 100, stdin);

    int tam = 0;
    while (s[tam] != '\0') tam++;
    if (tam > 0 && s[tam-1] == '\n') s[--tam] = '\0';

    printf("Antes: %s\n", s);
    inverte(s);
    printf("Depois: %s\n", s);

    return 0;
}
