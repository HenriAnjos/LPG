#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char* argv[]) {
    char x[50], y[50];

    printf("Digite a primeira string: ");
    scanf("%s", x);

    printf("String 1 : '%s'\n", x);  

    printf("Digite a segunda string: ");
    scanf("%s", y);

    printf("String 2 : '%s'\n", y);

    return 0;
}
