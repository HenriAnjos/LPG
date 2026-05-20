#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 30
#define N 5

void mostra_strings( char v[][MAX] , int n );
void ordena_strings( char v[][MAX] , int n );

int main(int argc, char *argv[]) {
	char nomes[N][MAX] = { "Fulano", "Paulo", "Beltrano", "Ciclano", "Ana" } ;
	
	mostra_strings( nomes, N );
	
	ordena_strings( nomes, N );
	
	mostra_strings( nomes, N );
	
	return 0;
}

void mostra_strings( char v[][MAX] , int n ){
	int i;
	for( i = 0 ; i < n ; i++ )
		printf("[%d] : '%s'\n", i, v[i]);
	printf("\n\n");
}

void ordena_strings( char v[][MAX] , int n ){
	int i;
	for( i = 0 ; i < n ; i++ ){
		int i_menor = i, j;
		for( j = i+1 ; j < n ; j++ ){
			if( strcmp( v[j] , v[i_menor] ) < 0 )
				i_menor = j;
		}
		char aux[MAX];		
		strcpy( aux , v[i] );
		strcpy( v[i] , v[i_menor] );
		strcpy( v[i_menor] , aux );
	}
}

