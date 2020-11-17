/*Manejo de un vector con punteros*/
#include<stdio.h>
#define N 5
int main()
{
	int VEC[N];
	int I;
	/*Ingreso de datos*/
	for(I=0;I<N;I++){
		printf("\nIngrese un valor: ");
		scanf("%d",VEC+I); //"VEC" es un puntero
	}
	/*Impresión de valores*/
	printf("\nValores ingresados\n");
		for(I=0;I<N;I++){
		printf("\n%d",*(VEC+I)); //Por lo tanto puedo utilizarlo como uno
	}
	return 0;
}
