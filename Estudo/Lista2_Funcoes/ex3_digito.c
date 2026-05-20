#include <stdio.h>
#include <stdlib.h>

int eh_digito (char c) {
    return  c >= '0' && c <= '9';
}

int main (int argc, char argv[]) {

    char c;
    printf("Digite um numero: \n");
    scanf("%c", &c);

    if (eh_digito(c)) {
        int valor = c - '0';
        printf("E um digito. Valor inteiro: %d\n", valor);
    } else {
        printf("Nao eh um valor");
    }
    return 0;
}