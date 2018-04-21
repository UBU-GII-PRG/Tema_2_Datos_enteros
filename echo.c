/*
Programa echo.c
------------------------
Echo de un número tecleado, expresándolo en distintos formatos

@author Paco González MOya
@version 1.0
@date feb 2018
*/
#include<stdio.h>

int main() {
	int numero;	//valor a teclear
	printf("\nTeclea un número entero: ");
	scanf("%d", &numero);
	printf("El valor tecleado es : %i\n", numero);
	printf("\nDistintas salidas\n");
	printf("Formato d: %d\n", numero);
	printf("Formato u: %u\n", numero);
	printf("Formato a 8 digitos: %8i\n", numero);

	printf("Formato octal: %o\n", numero);
	printf("Formato hex: %x\n", numero);
	printf("Formato HEX: %X\n", numero);

	return 0;
}
	
