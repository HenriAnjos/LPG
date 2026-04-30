#include <stdio.h>

int compara(float a[], float b[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) return 0;
    }
    return 1;
}

int main(int argc, char *argv[]) {
    int n;
    printf("Tamanho dos vetores: ");
    scanf("%d", &n);

    float a[n], b[n];

    printf("Insira os valores do vetor A:\n");
    for (int i = 0; i < n; i++) scanf("%f", &a[i]);

    printf("Insira os valores do vetor B:\n");
    for (int i = 0; i < n; i++) scanf("%f", &b[i]);

    if (compara(a, b, n))
        printf("Os vetores sao iguais.\n");
    else
        printf("Os vetores sao diferentes.\n");

    return 0;
}
