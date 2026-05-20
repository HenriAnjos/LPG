#include <stdio.h>
#include <stdlib.h>

int compara(float a[], float b[], int n) {
    for (int i = 0; i < n; i++){
        if(a[i] != b[i]) return 0;
    }
    return 1;
}

int main (int argc, char *argv[]) {
    int n;
    printf("Declare o tamanho do vetor: \n");
    scanf("%d", &n);

float a[n], b[n];

printf("Declare os valor do Vetor A: ");
for (int i = 0; i < n; i++) scanf("%f", &a[i]);

printf("Declare os valor do Vetor B: ");
for (int i = 0; i < n; i++) scanf("%f", &b[i]);

if(compara(a, b, n)) {
    printf("Os vetores sao Iguais.\n");
} else {
    printf("Os vetores sao Diferente.\n");
}

    return 0;
}