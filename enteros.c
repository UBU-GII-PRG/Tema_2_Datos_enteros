/*
Programa enteros.c
------------------
Uso de variables entera para representar números enteros (Z)
Atención especial a los operandos y a los resultados posibles e inesperados
Atención especial a los flags de formato

@author Paco González MOya
@version 1.0
@date feb 2018
*/
#include<stdio.h>

int main() {
	//Variables para repesentar num. naturales
	signed int salario=0;		//entero sin signo -> natural
	signed char caracter=0;		//caracteres...?
	signed short int habitantes;		//entero corto
	signed long distancia_metros;		//entero largo
	signed long long distancia_estelar; 	//entero muy largo


	//Uso de caracteres
	caracter=65;
	printf("\nCaracter actual: %u\n", caracter);
	printf("En hexadecimal: %X\n", caracter);
	printf("En octal: %o\n", caracter);
	printf("Como caracter: %c\n", caracter);

	//¿Es posible?¿Resultado?
	caracter=caracter-70;
	printf("\nCaracter actual (1): %u\n", caracter);
	printf("En hexadecimal: %X\n", caracter);
	printf("En octal: %o\n", caracter);
	printf("Como caracter: %c\n", caracter);

	//¿Es posible?¿Resultado?¿Qué ha pasado?
	caracter=caracter + 252;
	printf("\nCaracter actual (2): %u\n", caracter);
	printf("En hexadecimal: %X\n", caracter);
	printf("En octal: %o\n", caracter);
	printf("Como caracter: %c\n", caracter);


	//Habitantes...¿qué ocurre?
	habitantes=-1;	//¿es posible?
	printf("\nHabitantes (-1): %d\n", habitantes);
	printf("Habitantes (u): %u\n", habitantes);


	habitantes=32767;
	printf("Habitantes: %d\n", habitantes);
	habitantes=habitantes+1; //Un recién llegado;
	printf("Habitantes (+1): %d\n", habitantes);

	//salario: ojalá!!
	salario=2147483647; //¿cabe?
	printf("\nSalario (eur): %d\n", salario);
	printf("Salario (eur) no sale bien? : %u\n", salario);
	salario=salario+1; //IPC?
	printf("Salario (eur): %u\n", salario); //¡horror!
	salario=-10; //¿AEAT?
	printf("Salario (eur): %u\n", salario);
	


	//distancia en metros
	distancia_metros=2147483647; //¿cabe?
	printf("\nDistancia (m): %ld\n", distancia_metros);
	printf("Distancia (m) no sale bien? : %d\n", distancia_metros);
	distancia_metros=distancia_metros+1;
	printf("Distancia (m): %ld\n", distancia_metros); //¡horror!
	distancia_metros=-10; //¿es posible?
	printf("Distancia (m): %ld\n", distancia_metros);

	//distancia estelar:¿qué pasa aquí?
	distancia_estelar =-1024; //posible? es correcto?
	printf("\nDistancia estelar: %ld\n", distancia_estelar);
	distancia_estelar=9223372036854775807;
	printf("Distancia estelar (1): %lld\n", distancia_estelar);
	distancia_estelar=distancia_estelar+1;
	printf("Distancia estelar (2): %lld\n", distancia_estelar);


	return 0;
}
	
