#include <stdio.h>

void busca_todos(int v[], int n, int chave, int indices[]) {
    int pos = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == chave)
            indices[pos++] = i;
    }
    while (pos < n)
        indices[pos++] = -1;
}

int main(int argc, char *argv[]) {
    int n;
    printf("Tamanho do vetor: ");
    scanf("%d", &n);

    int v[n], indices[n];

    printf("Insira os valores:\n");
    for (int i = 0; i < n; i++) scanf("%d", &v[i]);

    int chave;
    printf("Chave de busca: ");
    scanf("%d", &chave);

    busca_todos(v, n, chave, indices);

    printf("Indices: {");
    for (int i = 0; i < n; i++) {
        printf("%d", indices[i]);
        if (i < n - 1) printf(", ");
    }
    printf("}\n");

    return 0;
}
