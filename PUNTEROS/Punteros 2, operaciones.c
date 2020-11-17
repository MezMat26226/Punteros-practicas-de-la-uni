/*Incremento de punteros con casteo*/
#include<stdio.h>
int main()
{
	/* int DATOI;
	char DATOC;
	int *PTRI;
	char *PTRC;
	PTRI=&DATOI;
	printf("\nDireccion cargada en PTRI: %p\n",PTRI);
	PTRI++;
	printf("\nDireccion cargada en PTRI incrementada: %p\n",PTRI);
	PTRC=&DATOC;
	printf("\nDireccion cargada en PTRC: %p\n",PTRC);
	PTRC--;
	printf("\nDireccion cargada en PTRC incrementada: %p\n",PTRC);
	El incremento/decremento es segun la cantidad de bytes del tipo base;*/
	int DATOI;
	char DATOC;
	int *PTRI;
	char *PTRC;
	PTRC=(char *)&DATOI; //De esta forma incremento en un byte (tipo char), un puntero de tipo entero
	printf("\nDireccion cargada en PTRI: %p\n",PTRC);
	PTRC++;
	printf("\nDireccion cargada en PTRI incrementada: %p\n",PTRC);
	PTRC=&DATOC;
	printf("\nDireccion cargada en PTRC: %p\n",PTRC);
	PTRC--;
	printf("\nDireccion cargada en PTRC incrementada: %p\n",PTRC);
	return 0;
}
