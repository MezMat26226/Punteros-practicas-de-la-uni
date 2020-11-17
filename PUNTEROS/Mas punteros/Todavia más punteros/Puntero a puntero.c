#include<stdio.h>
int main()
{
	int A,*P,**PP;
	A=10;
	P=&A;
	PP=&P;
	printf ("\nValor de A (directo): %d",A);
	printf ("\nValor de A (desde P): %d",*P);
	printf ("\nValor de A (desde PP): %d",**PP);
	printf ("\nDireccion de A: %p",&A);
	printf ("\nDireccion de P: %p",&P);
	printf ("\nDireccion de PP: %p",&PP);
	printf ("\nContenido de P: %p",P); //Contiene la dirección de "A"
	printf ("\nContenido de PP: %p",PP); //Contiene la dirección de "P"
	return 0;
}
