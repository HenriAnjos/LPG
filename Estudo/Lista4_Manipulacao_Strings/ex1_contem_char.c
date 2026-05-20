#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contem(char s[], char c) {
    for(int i = 0; s[i] != '\0'; i++){
        if (s[i] == c) return 1;
    }
    return 0;
}

int main (int argc, char *argv[]){
    char s[100];
    char c;

    printf("Digite  uma string:\n");
    fgets(s, 100, stdin);

    printf("Digite  um caractere:\n");
    scanf("%c", &c);

    if(contem(s, c))
        printf("A String contem o caractere '%c'. \n", c);
    else 
        printf("A String nao possui o caractere '%c'. \n", c);

    return 0;
}