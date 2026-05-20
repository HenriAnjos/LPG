#include <stdio.h>
#include <stdlib.h>

int fibo (int n){
    if ( n <= 2) return 1;
    
    int atual = 1, anterior = 0;
    for(int i = 0; i < n; i++){
        int proximo = anterior + atual;
        anterior = atual;
        atual = proximo;

    }
    return atual;
}

