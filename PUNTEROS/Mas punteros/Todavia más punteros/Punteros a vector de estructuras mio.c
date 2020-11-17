/*Punteros a vector de estructuras*/
#include<stdio.h>
#include<string.h>
#define N 3
struct ESTRU{
	char nombre[11];
	int nota;
};
void ingreso(struct ESTRU * , int );
void imprimir(struct ESTRU * , int );
void ordenar(struct ESTRU * , int );
int main()
{
	struct ESTRU X[N];
	ingreso(X,N);
	imprimir(X,N);
	ordenar(X,N);
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
void ordenar(struct ESTRU * V, int TAM)
{
	int I,J;
	struct ESTRU AUX;
	for(I=0;I<TAM-1;I++){
		for(J=0;J<TAM-1-I;J++){
			if((V+J)->nota<(V+J+1)->nota){
				AUX=*(V+J);
				*(V+J)=*(V+J+1);
				*(V+J+1)=AUX;
			}
		}
	}
}
