#include <stdio.h>
#include <stdlib.h>

int converte( char s[], int ini, int fim );

int main(int argc, char *argv[]) {
	char s[20];
	printf("Digite uma data no formato 'dd/mm/aaaa': ");
	scanf("%s", s);
	
	int n;
	for( n = 0 ; s[n] != 0 ; n++ ) ; // n = strlen( s );
	
	if( n != 10 )
		printf("Entrada com tamanho diferente!\n");
	else
		if( s[2] != '/' || s[5] != '/' )
			printf("Separadores incorretos!\n");
		else{
			int dia, mes, ano;
			dia = converte( s, 0, 1 );
			if( dia == -1 )
				printf("Dia invalido!\n");
			else
				mes = converte( s, 3, 4 );
				if( mes == -1 )
					printf("Mes invalido!\n");
				else
					ano = converte( s, 6, 9 );
					if( ano == -1 )	
						printf("Ano invalido!\n");
					else{
						// Aqui está tudo certo!
						printf("Entrada correta!\n");
						printf("Dia: %d\n", dia+1 );
						printf("Mes: %d\n", mes+1 );
						printf("Ano: %d\n", ano+1 );					
					}
		}
	
	return 0;
}


int converte( char s[], int ini, int fim ){
	int i, soma = 0, pot = 1;
	for( i = fim ; i >= ini ; i-- ){
		if( s[i] < '0' || s[i] > '9' )
			return -1 ; // Erro!
		
		soma += (s[i] - '0') * pot;
		pot *= 10;
	}
	return soma;	
}



