#include <stdio.h>
#include <stdlib.h>

void busca_todos(int v[], int n, int chave, int indices[]){
    int cont = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == chave) {
            indices[cont++] = i;
        }
    }
    for (int i = cont; i < n; i++) {
        indices[i] = -1;
    }
}

int main (int argc, char *argv[]) {
    int n;
    printf("Informe o tamanho do vetor:\n");
    scanf("%d", &n);

    int v[n];
    printf("Informe os valores do vetor de tamanho %d\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &v[i]);

    int chave;
    printf("Informe o valor da chave de busca:\n");
    scanf("%d", &chave);

    int indices[n];
    busca_todos(v, n, chave, indices);
   
    printf("Indices: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", indices[i]);    
    }

    return 0;
}