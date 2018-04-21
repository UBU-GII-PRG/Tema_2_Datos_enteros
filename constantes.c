/*
	Programa constantes.c
Prueba de concepto para ver cómo se declaran constantes como directivas
de preprocesador, y cómo se usan constantes literales en operaciones
@author Paco González Moya
@version 1.0
@date feb 2018
*/
#include<stdio.h>
//Ejemplo de uso de constantes "famosas" como directivas del preprocesador
#define M_PI 3.141592
#define AUTHOR "Paco González Moya"

int main () {
	unsigned int suma=0;
	unsigned int area=0;
	unsigned int radio=0;
	unsigned int circunferencia=0;

	const int ANCHO=80;
	const int ALTO=20;
	unsigned int superficie;
	
	//Un poco de ego, por favor
	printf("Código realizado por %s\n", AUTHOR);	
	printf("--------------------------------------\n");


	//Valores para suma
	suma=suma + 1;
	printf("Primer valor de suma: %i\n", suma);
	suma=suma + 05;	//Cero cinco es constante OCTAL
	printf("Segundo valor de suma: %i\n", suma);
	suma=suma + 0xA; //Cero equis A es constante hexadecimal
	printf("Tercer valor de suma: %i\n", suma);

	//Uso de directivas del preprocesador:  PI en expresiones: ¿ qué pasa con los decimales?
	printf("\nTeclea el radio: ");
	scanf("%i", &radio);
	area = M_PI * radio * radio;
	circunferencia = 2 * M_PI * radio;
	printf("Circunferencia: %d unidades de longitud\n", circunferencia);
	printf("Area : %d unidades de superficie\n", area);

	//Uso de constantes (NO directivas de preprocesador)
	superficie=ALTO*ANCHO;
	printf("Valor de la superficie: %d unidades de superficie\n", superficie);
	//¿podemos sumar  2 a ALTO?
	//ALTO=ALTO+2;
	return 0;
}
