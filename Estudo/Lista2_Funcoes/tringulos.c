#include <stdio.h>

int main (int argc, char *argv[] ) {

int x, y, z;

printf("Valor do lado x: \n");
scanf("%d", &x);
printf("Valor do lado y: \n");
scanf("%d", &y);
printf("Valor do lado z: \n");
scanf("%d", &z);

if ( x >= (y + z) || y >= (x + z) || z >= (x + y)) {
    printf ("Os lados nao formam um triangulo");
} else if ( x == y && y == z) {
    printf ("Triangulo Equilatero");
} else if ( x == y || x == z || y == z) {
    printf("Triangulo Isoceles");
} else {
    printf("Triangulo Escaleno");
}

    return 0;
}