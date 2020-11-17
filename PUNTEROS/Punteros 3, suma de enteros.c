/*Suma de enteros del tipo de base de punteros*/
#include<stdio.h>
int main()
{
	int DATO;
	int *PTR;
	PTR=&DATO;
	printf("Direccion cargada en PTR: %p\n",PTR);
	PTR+=4; //Lo que se adiciona, son los bytes del tipo base
	printf("Direccion cargada en PTR sumado 4: %p\n",PTR); 
	return 0;
}
