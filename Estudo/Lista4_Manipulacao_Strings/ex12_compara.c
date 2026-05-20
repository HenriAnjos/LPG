#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compara( char str1[], char str2[] ){
    int i = 0;
    while(str1[i] != '\0' && str2[i] != '\0'){
        if (str1[i] != str2[i])
            return str1[i] - str2[i];
        i++;
    }
    return str1[i] - str2[i]; 
}

int main (int argc, char *argv[]){
    char s[100];
    char c[100];


    printf("Insira a Primeira String:\n");
    fgets(s, 100, stdin);

    int tam1 = 0;
    while(s[tam1] != '\0') tam1++;
    if(tam1 > 0 && s[tam1 - 1] == '\n') s[--tam1] = '\0';

    printf("Insira a Segunda String:\n");
    fgets(c, 100, stdin);

    int tam2 = 0;
    while(c[tam2] != '\0') tam2++;
    if(tam2 > 0 && c[tam2 - 1] == '\n') c[--tam2] = '\0';

    int resultado = compara(s, c);

    if(resultado == 0)
        printf("As strings sao iguais\n");
    else if (resultado < 0)
        printf("\"%s\" vem antes de \"%s\" alfabeticamente\n", s, c);
    else
        printf("\"%s\" vem antes de \"%s\" alfabeticamente\n", c, s);

    return 0;
}