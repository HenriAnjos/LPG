#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    int n, x;
    printf ("Digite o N:");
    scanf("%d", &n);

    for( x = 2; x <= n; x++){
        int i, count = 0;
        for( i = 1 ; i <= x ; i++){
            if( x % i == 0)
            count ++;
        }
        if( count == 2 )
            printf("%d\n", x);
    }
    return 0;
}