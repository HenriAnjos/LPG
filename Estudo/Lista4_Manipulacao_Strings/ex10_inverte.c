#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Inverte(char s[]){
    int tam = 0;
    while(s[tam] != '\0') tam++;

    int i = 0;
    int j = tam - 1;
    while(i < j){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}


int main(int argc, char *argv[]){
    char s[100];

    printf("Insira uma String:\n");
    fgets(s, 100, stdin);

    int tam = 0;
    while(s[tam] != '\0') tam++;
    if(tam > 0 && s[tam-1] == '\n') s[--tam] = '\0';

    printf("Antes: %s\n", s);
    Inverte(s);
    printf("Depois: %s\n", s);

    return 0;
}
