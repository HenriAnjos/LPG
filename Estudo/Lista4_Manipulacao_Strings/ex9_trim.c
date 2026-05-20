#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void trim( char srt[] );


int main (int argc, char *argv[]){
    char s[100];

    printf("Insira uma String:\n");
    fgets(s, 100, stdin);

    int tam = 0;
    while(s[tam] != '\0') tam++;
    if(tam > 0 && s[tam - 1] == '\n') s[--tam] = '\0';

    printf("Antes: %s\n", s);
    trim(s);
    printf("Depois: %s\n", s);

    return 0;
}

void trim( char srt[] ){
    int inicio = 0;
    while(srt[inicio] == ' ') inicio++;

    int tam = inicio;
    while(srt[tam] != '\0') tam++;
    int fim = tam - 1;
    while(fim >= inicio && srt[fim] == ' ') fim--;

    int j = 0;
    for( int i = inicio; i <= fim; i++){
        srt[j++] = srt[i];
    }
    srt[j] = '\0';
}