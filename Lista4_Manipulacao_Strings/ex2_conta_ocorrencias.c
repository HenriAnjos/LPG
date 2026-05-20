#include <stdio.h>

int contaOcorrencias(char s[], char c) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c)
            count++;
    }
    return count;
}

int main() {
    char s[100];
    char c;

    printf("Digite uma string: ");
    fgets(s, 100, stdin);

    printf("Digite um caractere: ");
    scanf("%c", &c);

    int ocorrencias = contaOcorrencias(s, c);
    printf("O caractere '%c' ocorre %d vez(es) na string.\n", c, ocorrencias);

    return 0;
}
