/*Suma de enteros del tipo de base de punteros*/
#include<stdio.h>
int main()
{
	int DATO,RESTA;
	int *PTR,*PTR2;
	PTR=&DATO;
	PTR2=(int *)0x0022FEB8;
	printf("\nDireccion cargada en PTR: %p",PTR);
	printf("\nDireccion cargada en PTR2: %p",PTR2);
	RESTA=PTR2-PTR;
	printf("\nResultado de la resta de los punteros: %d",RESTA);
	return 0;
}
