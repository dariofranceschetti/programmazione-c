/* Leggere caratteri dal terminale */

#include <stdio.h>

int main(void)
{
	char c;
	printf("Digita un carattere: ");
	c=getchar();
	printf("Hai digitato: %c\n",c);
	
	return 0;
}
