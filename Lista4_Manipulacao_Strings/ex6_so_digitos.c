#include <stdio.h>

int soDigitos(char s[]) {
    if (s[0] == '\0') return 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] < '0' || s[i] > '9')
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

    if (soDigitos(s))
        printf("A string contem somente digitos.\n");
    else
        printf("A string NAO contem somente digitos.\n");

    return 0;
}
