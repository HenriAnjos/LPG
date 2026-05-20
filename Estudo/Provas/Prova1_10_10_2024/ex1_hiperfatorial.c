#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int hiper(int n){
    int resultado = 1;
    for (int i = 1; i <= n; i++){
        int pot = pow(i, i);
        resultado *= pot;
    }
    return resultado;
}

int main (int argc, char *argv[]){

    int n;
    printf("Insira o n:\n");
    scanf("%d", &n);
    
    printf("%d", hiper(n));


    return 0;
}