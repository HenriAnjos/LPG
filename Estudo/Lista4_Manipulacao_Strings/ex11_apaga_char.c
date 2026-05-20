#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void apagaOcorrencias(char s[], char c){
    int j = 0;
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] != c){
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

int main(int argc, char *argv[]){
    char s[100];
    char c;

    printf("Insira uma String:\n");
    fgets(s, 100, stdin);

    int tam = 0;
    while(s[tam] != '\0') tam++;
    if(tam > 0 && s[tam - 1] == '\n') s[--tam] = '\0';

    printf("Digite o Caractere que Deseja Remover:\n");
    scanf("%c", &c);

    printf("Antes: %s\n", s);
    apagaOcorrencias(s, c);
    printf("Depois: %s\n", s);

    return 0;
}