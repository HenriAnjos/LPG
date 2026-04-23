#include <stdio.h>

int main ( int argc, char *argv[] ) {
    double x, y;
    printf("Informe os valores de x e y:");
    scanf( "%lf %lf", &x, &y);
    printf("Os valores de x e y sao: %lf %lf\n", x, y);

    if (x == 0 && y == 0) {
        printf ("Origem");
    } else if ( x == 0 && y != 0) {
        printf ("Esta em Eixo Y");
    } else if ( x != 0 && y ==0) {
        printf ("Esta em Eixo X");
    } else if ( x > 0 &&y > 0 ) {
        printf ("Esta em Q1");
    } else if ( x < 0 && y > 0) {
        printf ("Esta em Q2");
    } else if ( x < 0 && y < 0 ) {
        printf ("Esta em Q3");
    } else {
        printf ("Esta em Q4");
    }

    return 0;
}