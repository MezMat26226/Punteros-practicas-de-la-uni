/*Manejo de un vector con punteros*/
#include<stdio.h>
#define N 5
int main()
{
	int *PTR;
	int VEC[N];
	PTR=VEC;
	/*Ingreso de datos*/
	for(PTR=VEC;PTR<VEC+N;PTR++){
		printf("\nIngrese un valor: ");
		scanf("%d",PTR); 
	}
	/*Impresión de valores*/
	printf("\nValores ingresados\n");
		for(PTR=VEC;PTR<VEC+N;PTR++){
		printf("\n%d",*PTR); 
	}
	return 0;
}
