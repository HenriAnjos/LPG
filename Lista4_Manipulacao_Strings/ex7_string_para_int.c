#include <stdio.h>

int stringParaInteiro(char s[]) {
    int resultado = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        resultado = resultado * 10 + (s[i] - '0');
    }
    return resultado;
}

int main() {
    char s[100];

    printf("Digite uma string de digitos: ");
    fgets(s, 100, stdin);

    int tam = 0;
    while (s[tam] != '\0') tam++;
    if (tam > 0 && s[tam-1] == '\n') s[--tam] = '\0';

    int valor = stringParaInteiro(s);
    printf("Valor inteiro: %d\n", valor);

    return 0;
}
