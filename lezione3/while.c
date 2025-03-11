/* Un esempio di ciclo while */
#include <stdio.h>

int main(void)
{
	// Precondizioni: base > 0, esp >= 0, ris = 1
	int base=2, esp=3, ris=1;
	
	printf("Calcolo %d elevato alla %d: \n",base,esp);
	
	while (esp)
	{				//Questo intero blocco...
		ris=ris*base;
		esp=esp-1;
	}				//...conta come una istruzione.
	
	printf("%d.\n",ris);
	
	return 0;
}