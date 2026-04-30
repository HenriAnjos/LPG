#include <stdio.h>

int main (int argc, char *argv[] ) {

    int n1, n2;
    printf("Informe o horario do inicio e do fim do jogo:");
    scanf("%i,%i", &n1, &n2);

    for ( int i = n1; i < n2; i++)
    {
        printf("O tempo de jogo foi: %i", i);
        return 0;
    }
    

    return 0;
}