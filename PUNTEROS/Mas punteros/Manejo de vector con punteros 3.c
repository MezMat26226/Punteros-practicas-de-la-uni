/*Manejo de un vector con punteros*/
#include<stdio.h>
#define N 5
void ordenar(int *, int );
int main()
{
	int *PTR;
	int VEC[N];
	PTR=VEC;
	/*Ingreso de datos*/
	for(PTR=VEC;PTR<VEC+N;PTR++){ //A PTR le doy la direcci�n inicial del vector
		printf("\nIngrese un valor: ");
		scanf("%d",PTR);  
	}
	/*Impresi�n de datos ordenados*/
	ordenar(VEC,N);
	printf("\nValores ingresados\n");
		for(PTR=VEC;PTR<VEC+N;PTR++){ //Entonces opero con "PTR"
		printf("\n%d",*PTR); 
	}
	printf("\n\tFin del programa.\n\n");
	return 0;
}
void ordenar(int *V, int TAM)
{
	int I,J,AUX;
	for(I=0;I<TAM;I++){
		for(J=0;J<TAM-I-1;J++){
			if(*(V+J)>*(V+J+1)){
				AUX=*(V+J);
				*(V+J)=*(V+J+1);
				*(V+J+1)=AUX;
			}
		}
	}
}
