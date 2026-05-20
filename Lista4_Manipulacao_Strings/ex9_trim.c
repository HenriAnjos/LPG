#include <stdio.h>

void trim(char str[]) {
    int inicio = 0;
    while (str[inicio] == ' ') inicio++;

    int tam = inicio;
    while (str[tam] != '\0') tam++;
    int fim = tam - 1;
    while (fim >= inicio && str[fim] == ' ') fim--;

    int j = 0;
    for (int i = inicio; i <= fim; i++) {
        str[j++] = str[i];
    }
    str[j] = '\0';
}

int main() {
    char s[100];

    printf("Digite uma string: ");
    fgets(s, 100, stdin);

    int tam = 0;
    while (s[tam] != '\0') tam++;
    if (tam > 0 && s[tam-1] == '\n') s[--tam] = '\0';

    printf("Antes: \"%s\"\n", s);
    trim(s);
    printf("Depois: \"%s\"\n", s);

    return 0;
}
