#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int converte (char s[]) {
    if(!eh_numero(s))
        return -1; //Erro!
    int n;
    for(n = 0; s[n] != 0; n++);
    int soma = 0, pot = 1, i;
    for(i = n-1; i >= 0; i--) {
        soma += (s[i]-'0')*pot;
        pot*=10;
    }
    return soma;

}