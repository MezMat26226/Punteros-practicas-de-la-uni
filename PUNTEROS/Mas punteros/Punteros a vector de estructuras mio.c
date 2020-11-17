/*Punteros a vector de estructuras*/
#include<stdio.h>
#include<string.h>
#define N 3
struct ESTRU{
	char nombre[10];
	int nota;
};
void ingreso(struct ESTRU * , int );
void imprimir(struct ESTRU * , int );
int main()
{
	struct ESTRU X[N];
	ingreso(X,N);
	return 0;
}
void ingreso(struct ESTRU * V, int TAM)
{
	int I;
	for(I=0;I<TAM;I++){
		fflush(stdin);
		printf("\nIngrese el nombre del alumno: ");
		gets((V+I)->nombre);
		printf("\nIngrese la nota: ");
		scanf("%d",&(V+I)->nota);
	}
}
void imprimir(struct ESTRU * V, int TAM)
{
	int I;
	printf("\n%10s\t%4s","NOMBRE","NOTA");
	for(I=0;I<TAM;I++){
		printf("\n%10s\t%4d",(V+I)->nombre,(V+I)->nota);
	}
}
