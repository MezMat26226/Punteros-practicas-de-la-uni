#include<stdio.h>
#define N 3
void agregar(int *, int **, int );
int main()
{
	int VEC[N],*P_Ultimo,A;
	P_Ultimo=VEC;
	agregar(VEC,&P_Ultimo,A);
	return 0;
}
void agregar(int *VEC, int **P, int nuevo)
{
	if(*P==VEC+N)
	{
		printf("No ha lugar");
		return;
	}
	**P=nuevo;
	(*P)++;
}
