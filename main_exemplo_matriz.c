#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 3
#define COL 4

void gera_valores( int v[], int n, int limite );
void mostra_vetor( int v[], int n );

int main(int argc, char *argv[]) {
	int m[LIN][COL];
	int i, j;
	
	/*
	srand( time(0) );
	for( i = 0 ; i < LIN ; i++ )
		for( j = 0 ; j < COL ; j++ )
			m[i][j] = rand() % 1000 + 1;
	*/
	gera_valores( m, LIN*COL, 1000 );	
	
	
	for( i = 0 ; i < LIN ; i++ ){
		for( j = 0 ; j < COL ; j++ )
			printf("%d\t", m[i][j]);
		printf("\n");
	}
	
	for( i = 0 ; i < LIN ; i++ ){
		mostra_vetor( m[i], COL );
		printf("\n");
	}
	
	printf("Mostra matriz toda como um vetor:\n");
	mostra_vetor( m, LIN*COL );
	
	
	return 0;
}

void gera_valores( int v[], int n, int limite ){
	int i;
	srand( time(0) );
	for( i = 0 ; i < n ; i++ )
		v[i] = rand() % limite + 1;
}

void mostra_vetor( int v[], int n ){
	int i;
	for( i = 0 ; i < n ; i++ )
		printf("[%d] : %d\n", i , v[i]);
}

