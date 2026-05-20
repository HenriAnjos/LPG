#include <stdio.h>

int palindrome(char s[]) {
    int tam = 0;
    while (s[tam] != '\0') tam++;

    for (int i = 0; i < tam / 2; i++) {
        if (s[i] != s[tam - 1 - i])
            return 0;
    }
    return 1;
}

int main() {
    char s[100];

    printf("Digite uma string: ");
    fgets(s, 100, stdin);

    int tam = 0;
    while (s[tam] != '\0') tam++;
    if (tam > 0 && s[tam-1] == '\n') s[--tam] = '\0';

    if (palindrome(s))
        printf("\"%s\" eh palindrome.\n", s);
    else
        printf("\"%s\" NAO eh palindrome.\n", s);

    return 0;
}
