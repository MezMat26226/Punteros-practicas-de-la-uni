#include<stdio.h>
#include<string.h>
#define N 3
void ingreso(struct DATO *, struct DATO *, int );
struct DATO{
	char nombre[10];
	int nota;
};
int main()
{
	struct DATO X[N];
	struct DATO *P;
	ingreso(&X,&P,N);
}
void ingreso(struct DATO * VEC, struct DATO * P, int TAM)
{
	int I;
	for(P=VEC;P<VEC+N;P++){
		printf("\nIngrese el nombre del alumno: ");
		fflush(stdin);
		gets(P->nombre);
		printf("\nIngrese la nota del alumno: ");
		scanf("%d",&P->nota);
	}
}
