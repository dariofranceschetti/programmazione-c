/* Leggere caratteri dal terminale con scanf */

#include <stdio.h>

int main(void)
{
	char car;
	printf("Digita un carattere: ");
	/* & e' necessario. %*c legge un carattere
	ma non lo memorizza */
	scanf("%c%*c",&car); // %*c legge un carattere ma non lo memorizza
	
	printf("Hai digitato: %c\n",car);
	printf("Digitane un altro: ");
	scanf("%c",&car);
	printf("Hai digitato: %c\n",car);

	return 0;
}
