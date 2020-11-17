#include<stdio.h>
#include<string.h>
#define n 3
struct info{
	char nombre[20];
	int nota;
};
int main()
{
	struct info vec[n], *punt[n], *p_aux;
	int i,j;
	/*Ingreso de datos*/
	for(p_aux=vec;p_aux<vec+n;p_aux++){
		fflush(stdin);
		gets(p_aux->nombre);
		scanf("%d",&(p_aux->nota));
	}
	/*Inicialización del vector de punteros*/
	for(i=0;i<n;i++){
		*(punt+i)=vec+i;
	}
	/*Ordenamiento*/
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(punt[j]->nota<punt[j+1]->nota){
				p_aux=punt[j];
				punt[j]=punt[j+1];
				punt[j+1]=p_aux;
			}
		}
	}
	/*Impresión de datos*/
	printf("\n\n\n");
	for(i=0;i<n;i++){
		printf("\n\t%12s\t%d",punt[i]->nombre,punt[i]->nota);
	}
	return 0;
}
