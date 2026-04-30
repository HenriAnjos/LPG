#include <stdio.h>

int busca_seq_rec(int v[], int n, int chave) {
    if (n == 0) return -1;
    if (v[0] == chave) return 0;
    int resultado = busca_seq_rec(v + 1, n - 1, chave);
    if (resultado == -1) return -1;
    return resultado + 1;
}

int main(int argc, char *argv[]) {
    int n;
    printf("Tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];
    printf("Insira os valores:\n");
    for (int i = 0; i < n; i++) scanf("%d", &v[i]);

    int chave;
    printf("Chave de busca: ");
    scanf("%d", &chave);

    int idx = busca_seq_rec(v, n, chave);
    if (idx == -1)
        printf("Chave %d nao encontrada.\n", chave);
    else
        printf("Chave %d encontrada no indice %d.\n", chave, idx);

    return 0;
}
