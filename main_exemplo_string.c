#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char x[50], y[50];
	
	printf("Digite a 1a string: ");
	//scanf("%[^\n]", x);
	gets( x );
	
	printf("String 1 : '%s'\n", x);
	
	
	printf("Digite a 2a string: \n");
	fgets( y, 50, stdin );
	
	printf("String 2 : '%s'\n", y);
	
	y[ strlen(y)-1 ] = 0; // '\0'; --> coloca o '\0' no lugar no '\n'
	//gets( y );
	//scanf("%s", y);
	
	printf("String 2 : '%s'\n", y);
	
	int n = strcmpi( x, y );
	
	if( n == 0 )
		printf("x == y\n");
	else
		if( n > 0 )
			printf("x > y\n");
		else
			printf("x < y\n");
	
	return 0;
}
