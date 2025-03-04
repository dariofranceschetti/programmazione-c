/* Leggere numeri dal terminale con scanf */

#include <stdio.h>

int main(void)
{
	int i; float f; double d;
	printf("Digita un int, un float, un double: ");
	/* & e' necessario. */
	scanf("%d%f%lf",&i,&f,&d); 
	
	printf("Hai digitato: %d,%g,%g.\n",i,f,d);

	return 0;
}
