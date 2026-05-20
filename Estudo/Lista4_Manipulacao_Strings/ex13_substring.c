#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void substring( char str[], int ini, int n, char sub[] ){
    int tam = 0;
    while(str[tam] != '\0') tam++;

    if (ini >= tam) {
        sub[0] = '\0';
        return;
    }

    int j = 0;
    for(int i = ini; i < ini + n && i < tam; i++ ){
        sub[j++] = str[i];
    }


}

int main (int argc, char *argv[]){
    char s[100];
    
    printf("Inisira uma String:\n");
    fgets(s, 100, stdin);

    int tam = 0;
    while(s[tam] != '\0') tam++;
    if(tam > 0 && s[tam - 1] == '\n') s[--tam] = '\0';

    int ini, n;
    
    printf("Inisra a posicao de onde deseja comecar:\n");
    scanf("%d", &ini);

    printf("Inisra quantos valores a diante que deseja ler:\n");
    scanf("%d", &n);

    char c[100];
    substring(s, ini, n, c);
    printf("%s", c);

    return 0;
}