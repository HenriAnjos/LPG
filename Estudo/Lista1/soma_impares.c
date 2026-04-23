#include <stdio.h>

int main(int argc, char *argv[]) {

    int x, y, soma;

    soma = 0;

    printf("Insira os valores de x e y: \n");
    scanf("%d %d", &x, &y);

    if (x > y) {
        for (int i = y + 1; i < x; i++) {
            if ( i % 2 != 0){
                soma += i;
            }
        }
    } else {
        for (int i = x + 1; i < y; i++) {
            if ( i % 2 != 0){
                soma += i;
            }
        }
    }
        printf("O valor da soma e: %d \n", soma);




    return 0;
}