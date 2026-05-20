#include <stdio.h>
#include <stdlib.h>

void substring (char orig[], char dest[], int ini, int fim){
    int tam = 0;
    while (orig[tam] != '\0') tam++;

    if(ini > tam){ 
        dest[0] = '\0';
        return; 
    }

    int j = 0;
    for(int i = ini; i <= fim && orig[i] != '\0'; i++){
        dest[j++] = orig[i];
    }
    dest[j] = '\0';
}