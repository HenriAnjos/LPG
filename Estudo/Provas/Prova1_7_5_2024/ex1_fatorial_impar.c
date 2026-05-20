#include <stdio.h>
#include <stdlib.h>

int fat_impar_iter(int n){
    if (n <= 0 || n % 2 == 0) return 0;

    int fatorial = 1;
    for (int i = 1; i <= n; i += 2)
        fatorial *= i;

    return fatorial;
}

int fat_impar_rec(int n){
    if (n <= 0 || n % 2 == 0) return 0;
    if (n == 1) return 1;
    return n * fat_impar_rec(n - 2);
}

int main(){
    int n;
    printf("Insira n:\n");
    scanf("%d", &n);

    printf("Iterativo:  %d\n", fat_impar_iter(n));
    printf("Recursivo:  %d\n", fat_impar_rec(n));

    return 0;
}
