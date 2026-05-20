#include <stdio.h>
#include <stdlib.h>

int soma_especial(int n, int k, int x){
    int primeiro = x;
    while (primeiro % k != 0) primeiro++;

    int soma = 0;
    for (int i = 0; i < n; i++){
        soma += primeiro;
        primeiro += k;
    }
    return soma;
}

int main(int argc, char *argv[]){
    int n, k, x;
    printf("Insira n, k e x:\n");
    scanf("%d %d %d", &n, &k, &x);

    printf("Soma: %d\n", soma_especial(n, k, x));

    return 0;
}
