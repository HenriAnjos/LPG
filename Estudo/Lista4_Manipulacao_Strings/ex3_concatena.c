#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void concatena( char str1[], char str2[] ){
    int i = 0;
    while (str1[i] != '\0')
        i++;

    str1[i] = ' ';
    i++;

    int j = 0;
    while (str2[j] != '\0'){
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}

static void removeNewLine(char s[]){
    int i = 0;
    while (s[i] != '\0') i++;
    if (i > 0 && s[i-1] == '\n') s[i-1] = '\0';
}

int main(int argc, char *argv[]){
    char str1[100];
    char str2[100];

    printf("Digite o Valor da Primeira String:\n");
    fgets(str1, 100, stdin);
    removeNewLine(str1);

    printf("Digite o Valor da Segunda String:\n");
    fgets(str2, 100, stdin);
    removeNewLine(str2);

    concatena(str1, str2);
    printf("Resultado: %s", str1);

    return 0;
}