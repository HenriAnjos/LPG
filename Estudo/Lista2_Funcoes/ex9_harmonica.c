#include <stdio.h>
#include <stdlib.h>

float harmonica_iter(int n){
    float soma = 0;
    for (int i = 1; i <= n; i++)
        soma += 1.0 / i;
    return soma;
}

float harmonica_rec(int n){
    if (n <= 0) return 0;
    return 1.0 / n + harmonica_rec(n - 1);
}

int main(int argc, char *argv[]){
    int n;
    printf("Insira n:\n");
    scanf("%d", &n);

    printf("Iterativa:  %.4f\n", harmonica_iter(n));
    printf("Recursiva:  %.4f\n", harmonica_rec(n));

    return 0;
}
