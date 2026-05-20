#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int converte (char s[], int ini, int fim);

int main (int argc, char *argv[]){
    char s[20];
    printf("Digite uma Data (DD/MM/AAAA)\n");
    scanf("%s", s);

    int n;
    for( n = 0; s[n] != 0; n++);
    
    if(n != 10)
        printf("Fomato da Data Invalido\n");
    else 
    if (s[2] != '/' || s[5] != '/')
        printf("Separadores incorretos\n");
     else{
        int dia, mes, ano;
        dia = converte(s, 0, 1);
        if(dia == -1)
            printf("Dia Invalido!\n");
        else
            mes = converte (s, 3, 4);
        if (mes == -1) 
            printf("Mes Invalido!\n");
        else
            ano = converte(s, 6, 9);
        if(ano == -1)
            printf("Ano Invalido!");
        else{
            printf("Entrada correta!\n");
            printf("Dia: %d\n", dia);
            printf("Mes: %d\n", mes);
            printf("Ano: %d\n", ano);
        }
            
    }

    return 0;
}

int converte (char s[], int ini, int fim) {
    int i, soma = 0, pot = 1;
    for( i = fim; i >= ini; i--){
        if (s[i] < '0' || s[i] > '9') return -1;

    soma += (s[i] -'0') * pot;
    pot *= 10;
    }
    return soma;
}