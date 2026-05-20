#include <stdio.h>
#include <stdlib.h>

int busca_seq_rec(int v[], int n, int chave) {
    if (n == 0) return -1;           // base: vetor vazio, não achou
    if (v[0] == chave) return 0;     // base: achou no primeiro elemento
    
    int resto = busca_seq_rec(v + 1, n - 1, chave); // busca no restante
    if (resto == -1) return -1;      // não achou no restante
    return resto + 1;                // achou, ajusta o índice
}

int main(int argc, char *argv[]) {
    int n;
    printf("Informe o tamanho do vetor:\n");
    scanf("%d", &n);

    int v[n];
    printf("Informe os valores do vetor de tamanho %d:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &v[i]);

    int chave;
    printf("Informe o valor da chave:\n");
    scanf("%d", &chave);

    int resultado = busca_seq_rec(v, n, chave);
    if (resultado == -1)
        printf("Chave nao encontrada.\n");
    else
        printf("A chave esta na posicao: %d\n", resultado);

    return 0;
}
