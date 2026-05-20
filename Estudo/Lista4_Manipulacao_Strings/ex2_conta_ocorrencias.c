#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ocorre(char s[], char c){
    int cout = 0;
    for(int i = 0; s[i] != '\0'; i++){
        if (s[i] == c) cout++;
    }
    return cout;
}

int main(int argc, char *argv[]){
    char s[100];
    char c;

    printf("Digite uma String:\n");
    fgets( s, 100, stdin);

    printf("Digite um caractere:\n");
    scanf("%c", &c);


    printf("O Caractere '%c' Ocorre %d Vezes na String:", c, ocorre(s, c));

    return 0;
}