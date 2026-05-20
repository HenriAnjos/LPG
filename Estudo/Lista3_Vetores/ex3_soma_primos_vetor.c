#include <stdio.h>
#include <stdlib.h>


int eh_primo(int p) {
    if ( p < 2) return 0;
    for ( int i = 2; i * i <= p; i++) {
        if ( p % 2 == 0 ) return 0;
    }
    return 1;
}

int soma_primos(int v[], int n){
    int soma = 0;
    for ( int i = 0; i < n; i++) {
        if (eh_primo(v[i])) soma += v[i];
    }    
    return soma;
}

int main (int argc, char *argv[]) {
    int n;
    
    printf("Informe o tamanho do vetor: \n");
    scanf("%d", &n);

    int v[n], soma;

    printf("Insira os valores:\n");
        for( int i = 0; i < n; i++) scanf("%d", &v[i]);

    printf("Soma dos Primos: %d\n", soma_primos(v, n));
    return 0;

}