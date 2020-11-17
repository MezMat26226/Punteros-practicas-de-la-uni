#include<stdio.h>
#define n 5
void esc_pila(int *, int**, int , int );
int main()
{
	int pila[10],val,i;
	int *sp;
	sp=pila;
	for(i=0;i<n;i++){
		pila[i]=0;
	}
	for(i=0;i<n;i++){
		printf("Ingrese valor a cargar: ");
		scanf("%d",&val);
		esc_pila(pila,&sp,5,val); 
	}
	for(i=0;i<n;i++){
		printf("\nPILA[%d]: %d",i,pila[i]);
	}
	return 0;	
}
void esc_pila(int *inicio, int**sp, int tam, int num)
{
	if(*sp==inicio+tam){
		printf("Pila completa.\n"); 
	}
	else{
		**sp=num;
		(*sp)++;	
	}
}

