#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int palindromo(char s[]){
    int tamanho = 0;
    while (s[tamanho] != '\0') tamanho++;

    int i = 0;
    int j = tamanho - 1;
    while (i < j) {
        if (s[i] != s[j]) return 0;
        i++;
        j--;
    }
    return 1;
}

int main (int argc, char *argv[]){
    char s[100];

    printf("Escreva uma String: \n");
    fgets(s, 100, stdin);

    int len = strlen(s);
    if (len > 0 && s[len-1] == '\n') s[len-1] = '\0';

    if(palindromo(s))
        printf("A String '%s' eh um palindromo\n", s);
    else
        printf("A String '%s' nao eh um palindromo\n", s);

    return 0;
}