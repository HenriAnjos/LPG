#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int eh_numero (char s[]) {
    int i;
    for ( i = 0; s[i] != 0; i++) {
        if(s[i] < '0' || s[i] > '9')
            return 0; //Falso
    } 
    return 1; //Verdadeiro
}