#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    if (n <= 0) return 1;
    return n * fatorial(n - 1);
}

float constante_iter(int n){
    float soma = 0;
    for (int i = 0; i <= n; i++)
        soma += 1.0 / fatorial(i);
    return soma;
}

float constante_rec(int n){
    if (n < 0) return 0;
    return 1.0 / fatorial(n) + constante_rec(n - 1);
}

int main(int argc, char *argv[]){
    int n;
    printf("Insira n:\n");
    scanf("%d", &n);

    printf("Iterativa:  %.6f\n", constante_iter(n));
    printf("Recursiva:  %.6f\n", constante_rec(n));

    return 0;
}
