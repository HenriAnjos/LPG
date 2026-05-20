#include <stdio.h>
#include <stdlib.h>

int soma_iter(int n){
    int soma = 0;
    for (int i = 1; i <= n; i++)
        soma += i;
    return soma;
}

int soma_rec (int n){
    if (n <= 0) return 0;
    return n + soma_rec(n - 1);
}

int main(int argc, char *argv[]){
    int n;
    printf("Insira n:\n");
    scanf("%d", &n);

    printf("Iterativa:  %d\n", soma_iter(n));
    printf("Recursiva:  %d\n", soma_rec(n));

    return 0;
;

