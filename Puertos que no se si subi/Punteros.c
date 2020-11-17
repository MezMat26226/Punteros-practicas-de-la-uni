#include<stdio.h>
int main()
{
	int DATO;
	int *PTR;
	/*	printf("Direccion de DATO: %p",&DATO); %p me permite imprimir una dirección de memoria*/
	PTR=(int*)0x0022FEB8; //Es la dirección donde se guardo "DATO"
	/*Otra opción: PTR=&DATO le asigno a mi puntero la dirección de "DATO"*/ 
	/*Otra opción: declaro otro puntero, ej: Q;
	Q=&DATO;
	PTR=Q; A mi primer puntero (PTR) le asigno la misma dirección que a Q*/
	printf("\nIngrese un valor: ");
	scanf("%d",PTR);
	printf("\nValor ingresado: %d\n\n",*PTR); //Agrego el * porque quiero imprimir lo que contiene el puntero
	return 0;
}
