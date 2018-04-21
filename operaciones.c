/*
Programa operaciones.c
------------------------
Operaciones y expresiones con números naturales y enteros
Atención especial al orden y precedencia de los operadores, 
así como su asociatividad
Atención especial a los flags de formato

@author Paco González MOya
@version 1.0
@date feb 2018
*/
#include<stdio.h>

int main() {
	//Variables para repesentar num. naturales
	signed int salario=0;		//entero con signo
	unsigned int euros,libras;	//naturales
	unsigned int peniques;		//naturales;
	short int habitantes, pueblos, censo;	//natural corto
	short grados;			//entero corto
	long distancia_metros;		//entero largo
	long long distancia_estelar; 	//entero muy largo

	//Precedencia natural
	salario=15000*1.015+0.001/2;
	printf("Nuevo salario: %d\n", salario);
	
	//Tratamiento de decimales
	euros=250;
	libras=euros * 0.890123;
	printf("Equivalencia en libras para %u euros son: %u\n", euros, libras);

	peniques = (unsigned int) (100*euros * 0.890123) % 100;
	printf("Equivalencia en libras para %u euros son: %u y %u peniques\n", euros, libras, peniques);

	//Desbordamiento "silencioso"
	pueblos=125;
	censo=350;
	habitantes=pueblos * censo;
	printf("Habitantes actuales: %u pueblos por censo medio de %u: %u\n", pueblos, censo, habitantes); //cuidado!!

	//Operadores de desplazamiento
	grados=16;
	printf("Grados antes: %u\n", grados);
	grados = grados << 1;
	printf("Grados después de << 1: %u\n", grados);
	grados = grados << 2;
	printf("Grados después de << 2: %u\n", grados);
	grados = grados >> 3;
	printf("Grados después de >> 3: %u\n", grados);

	//Operadores de pre /post incremento y acumulación
	grados=16;
	printf("Grados actuales: %u\n", ++grados);
	grados*=2+1; // cuidado!!
	//grados=grados*2+1;
	printf("Grados al final: %u\n", grados--);
	printf("Estado de grados: %u\n", grados);



	return 0;
}
	
