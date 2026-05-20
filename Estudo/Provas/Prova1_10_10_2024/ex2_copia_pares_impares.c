#include <stdio.h>
#include <stdlib.h>

void copia_pares_impares (int v[], int n, int vp[], int vi[]){
    int i;
    int j = 0, k = 0;
    for(i = 0; i < n; i++){
        if (v[i] % 2 == 0){
            vp[j++] = v[i];
        } else {
            vi[k++] = v[i];
        }
    }
    vp[j] = -1;
    vi[k] = -1;
}



int main(){
    int v[] = {11, 5, 2, 8, 44, 15, 12, 19, 6, 20};
    int n = 10;
    int vp[n+1], vi[n+1];

    copia_pares_impares(v, n, vp, vi);

    printf("Pares:   ");
    for(int i = 0; vp[i] != -1; i++) printf("%d ", vp[i]);
    printf("-1\n");

    printf("Impares: ");
    for(int i = 0; vi[i] != -1; i++) printf("%d ", vi[i]);
    printf("-1\n");

    return 0;
}

