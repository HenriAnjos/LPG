#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int soDigitos(char s[]){
    if(s[0] == '\0') return 0;
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] < '0' || s[i] > '9')
            return 0;
    }
    return 1;
}

int main (int argc, char *argv[]){
    char s[100];

    printf("Insira uma string:\n");
    fgets(s, 100, stdin);

    int tam = 0;
    while (s[tam] != '\0') tam++;
    if(tam > 0 && s[tam-1] == '\n') s[--tam] = '\0';

    if(soDigitos(s))
        printf("A string contem somente digitos.\n");
    else
        printf("A string nao contem somente digitos.\n");

    return 0;
}