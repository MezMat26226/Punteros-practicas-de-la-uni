/*Punteros a vector estructuras*/
#include <STDIO.H>
#define N 3
struct ESTRU{
	int NOTA;
	char NOM[11];
};
void INGRESO(struct ESTRU*, int );
void IMPRIMIR(struct ESTRU*, int );
void ORDENAR(struct ESTRU *, int );
int main()
{
	struct ESTRU X[N];
	int I;
	
	INGRESO(X,N);
	ORDENAR(X,N);
	IMPRIMIR(X,N);
	return 0;
}
void INGRESO(struct ESTRU *V, int TAM)
{
	int I;
	for (I=0;I<N;I++){
		fflush(stdin); 
		printf("Ingrese nombre: ");
		gets((V+I)->NOM);
		printf("Ingrese nota: ");
		scanf("%d",&(V+I)->NOTA);
	}
}
void IMPRIMIR(struct ESTRU *V, int TAM)
{
	int I;
	printf("\n%10s\t%4s","NOMBRE","NOTA");
	for (I=0;I<N;I++){
		printf("\n%10s\t%4d",(V+I)->NOM,(V+I)->NOTA);
	}
}
void ORDENAR(struct ESTRU *V, int TAM)
{
	int I,J;
	struct ESTRU AUX;
	for(I=0;I<TAM-1;I++)
		for(J=0;J<TAM-1-I;J++)
			if((V+J)->NOTA<(V+J+1)->NOTA)	/*if(V[J].NOTA<V[J+1].NOTA)*/
			{
				AUX=*(V+J);			/*	AUX=V[J];		*/
				*(V+J)=*(V+J+1);	/*	V[J]=V[J+1];	*/
				*(V+J+1)=AUX;		/*	V[J+1]=AUX;		*/
			}
}
