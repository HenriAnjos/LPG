#include <stdio.h>
#include <stdlib.h>

int fibo(int n){
    if (n <= 2) return 1;
    int anterior = 1, atual = 1;
    for (int i = 2; i < n; i++){
        int proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }
    return atual;
}

int main(int argc, char *argv[]){
    int n;
    printf("Quantos termos? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        printf("%d", fibo(i));
        if (i < n) printf(", ");
    }
    printf("\n");

    return 0;
}
