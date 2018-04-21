/*
Programa naturales.c
--------------------
Uso de variables entersa para representar números naturales (N)
Atención especial a los operandos y a los resultados posibles e inesperados
Atención especial alos flags de formato

@author Paco González MOya
@version 1.0
@date feb 2018
*/
#include<stdio.h>

int main() {
	//Variables para repesentar num. naturales
	unsigned int salario=0;		//entero sin signo -> natural
	unsigned char caracter=0;	//caracteres
	unsigned short int habitantes;		//natural corto
	unsigned long distancia_metros;		//natural largo
	unsigned long long distancia_estelar; 	//natural muy largo


	//Uso de caracteres
	caracter=65;
	printf("\nCaracter actual: %u\n", caracter);
	printf("En hexadecimal: %X\n", caracter);
	printf("En octal: %o\n", caracter);
	printf("Como caracter: %c\n", caracter);

	//¿Es posible?¿Resultado?
	caracter=caracter+5;
	printf("\nCaracter actual: %u\n", caracter);
	printf("En hexadecimal: %X\n", caracter);
	printf("En octal: %o\n", caracter);
	printf("Como caracter: %c\n", caracter);

	//¿Es posible?¿Resultado?¿Qué ha pasado?
	caracter=caracter + 252;
	printf("\nCaracter actual: %u\n", caracter);
	printf("En hexadecimal: %X\n", caracter);
	printf("En octal: %o\n", caracter);
	printf("Como caracter: %c\n", caracter);


	//Habitantes...¿qué ocurre?
	habitantes=-1;	//¿es posible?
	printf("\nHabitantes (-1): %u\n", habitantes);

	habitantes=65535;
	printf("Habitantes: %u\n", habitantes);
	habitantes=habitantes+1; //Un recién llegado;
	printf("Habitantes (+1): %u\n", habitantes);

	//salario: ojalá!!
	salario=4294967295; //¿cabe?
	printf("\nSalario (eur): %u\n", salario);
	printf("Salario (eur) no sale bien : %d\n", salario);
	salario=salario+1; //IPC?
	printf("Salario (eur): %u\n", salario); //¡horror!
	salario=-10; //¿AEAT?
	printf("Salario (eur): %u\n", salario);
	


	//distancia en metros
	distancia_metros=4294967295; //¿cabe?
	printf("\nDistancia (m): %lu\n", distancia_metros);
	printf("Distancia (m) no sale bien : %d\n", distancia_metros);
	distancia_metros=distancia_metros+1;
	printf("Distancia (m): %lu\n", distancia_metros); //¡horror!
	distancia_metros=-10; //¿es posible?
	printf("Distancia (m): %lu\n", distancia_metros);

	//distancia estelar:¿qué pasa aquí?
	distancia_estelar =-1024; //posible? es correcto?
	printf("\nDistancia estelar: %lu\n", distancia_estelar);
	distancia_estelar=18446744073709551615;
	printf("Distancia estelar: %llu\n", distancia_estelar);

	return 0;
}
	
