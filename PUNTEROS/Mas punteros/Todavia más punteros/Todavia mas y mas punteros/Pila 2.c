/*Crear una pila y una función para escribir en la misma*/
#include <STDIO.H>
#define N 10
void ESC_PILA(int *, int **, int , int );
main()
{
	int PILA[10], VAL, I;
	int *SP;
	SP=PILA;
	for (I=0;I<10;I++){
		PILA[I]=0;
	}
	for (I=0;I<N;I++){
		printf("\nIngrese valor a cargar: ");
		scanf("%d",&VAL);
		ESC_PILA(PILA, &SP, 10, VAL);
	}
	for (I=0;I<10;I++){
		printf("\nPILA[%d]: %d",I,PILA[I]);
	}
}
void ESC_PILA(int *INICIO, int **SP, int TAM, int NUM)
{
	/*printf("\nSP=%p",*SP);*/
	if (*SP==INICIO+TAM){
		printf("\n PILA COMPLETA");}
	else {
		**SP=NUM;
		(*SP)++;
	}
	/*printf("\nSP=%p",*SP);*/
}
