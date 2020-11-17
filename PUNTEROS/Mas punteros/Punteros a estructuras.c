/*Punteros a estructuras*/
#include<stdio.h>
struct ESTRU{
	int A;
	char B;
	float C;
};
int main()
{
	struct ESTRU X;
	struct ESTRU *P;
	P=&X;
	/*INGRESO DE DATOS*/
	printf("Ingrese un entero: ");
	scanf("%d",&P->A);		//Se utiliza el operador "->" (flecha) en reemplazo de (*P).A
	fflush(stdin);			//Se lee como "El campo A de lo apuntado por P"
	printf("\nIngrese un caracter: "); 
	scanf("%c",&P->B);                //El puntero apunta a la estructura por fuera, entonces tengo que entrar
	printf("\nIngrese un flotante: ");//al campo, y obtener la dirección
	scanf("%f",&P->C);
	/*IMPRESIÓN DE DATOS*/
	printf("Valores ingresados\n\n");
	printf("Entero: %d\n",P->A);  //Me da el valor y no la dirección
	printf("Caracter: %c\n",P->B);
	printf("Flotante: %f\n",P->C);
	return 0;
}
