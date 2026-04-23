#include <stdio.h>

int main (int argc, char *argv[] ) {

    int valores;
    double a, b, c, media;


    printf("Insira o valor da quantidade de linhas de casos: \n");
    scanf("%d", &valores);

    for (int i = 0; i <= valores; i++) {

        printf("Insira as notas: \n");
        scanf("%lf %lf %lf", &a, &b, &c);

        media = (a * 2 + b * 3 + c * 5)/ 10.0;
        printf("%.1f \n", media);

    }



    return 0;
}