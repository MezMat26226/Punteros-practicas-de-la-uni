#include<stdio.h>
#include<stdlib.h>
int* simple_variables_dinamicas(int* );
void simple_variables_dinamicas2(int **);
int main()
{
	int *nump_simple = (int*)malloc(sizeof(int));
	
	nump_simple = simple_variables_dinamicas(nump_simple);
	printf("\nNumero Referencia: %d",*nump_simple);
	
	simple_variables_dinamicas2(&nump_simple);
	printf("\nNumero Referencia: %d",*nump_simple);
}
int* simple_variables_dinamicas(int* num)
{
	printf("\nIngrese el numero: ");
	scanf("%d",num);
	return num;
}
void simple_variables_dinamicas2(int **num)
{
	printf("\nIngrese el numero: ");
	scanf("%d",(*num));
}
