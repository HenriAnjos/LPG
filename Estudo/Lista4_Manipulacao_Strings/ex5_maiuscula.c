#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void paraMinusculas(char s[]){
    for(int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
    }
}

int main (int argc, char *argv[]){

    char s[100];

    printf("Insira uma String:\n");
    fgets(s, 100, stdin);

    paraMinusculas(s);
    printf("Resltado: %s", s);

    return 0;
}