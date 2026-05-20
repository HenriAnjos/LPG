#include <stdio.h>

int contem(char s[], char c) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c)
            return 1;
    }
    return 0;
}

int main() {
    char s[100];
    char c;

    printf("Digite uma string: ");
    fgets(s, 100, stdin);

    printf("Digite um caractere: ");
    scanf("%c", &c);

    if (contem(s, c))
        printf("A string contem o caractere '%c'.\n", c);
    else
        printf("A string NAO contem o caractere '%c'.\n", c);

    return 0;
}
