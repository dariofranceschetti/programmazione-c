#include <stdio.h>

int main(void)
{
	int a=0, b=1, aux; //E' necessaria una variabile ausiliaria
	
	printf("a=%d, b=%d.\n",a,b); //Prima
	
	aux=a; //...salva il valore di a in aux			
	a=b;   //...il valore di a e' perduto				
	b=aux; //...ma una copia era stata salvata in aux

	printf("a=%d, b=%d.\n",a,b); //Dopo
	
	return 0;
}