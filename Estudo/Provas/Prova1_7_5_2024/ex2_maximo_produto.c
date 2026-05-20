#include <stdio.h>
#include <stdlib.h>

int maximo_produto (int v[], int n){
    if ( n < 2) return 0;

    int max = v[0]*v[1];
    for (int i = 0; i < n - 1; i++){
        if (v[i]*v[i+1] > max){
            max = v[i]*v[i+1];
        }
    }
    return max;
}
