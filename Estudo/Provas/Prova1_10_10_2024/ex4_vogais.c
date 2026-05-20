#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copia_vogais(char orig[], char dest[]){
    int j = 0;

    for (int i = 0; orig[i] != '\0'; i++){
        if (orig[i] == 'a' || orig[i] == 'e' || orig[i] == 'i' ||
            orig[i] == 'o' || orig[i] == 'u' || orig[i] == 'A' ||
            orig[i] == 'E' || orig[i] == 'I' || orig[i] == 'O' ||
            orig[i] == 'U'){
            dest[j++] = orig[i];
        }
    }
    dest[j] = '\0';
}