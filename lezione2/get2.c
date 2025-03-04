/* Leggere caratteri dal terminale */

#include <stdio.h>

int main(void)
{
	char c;
	printf("Digita un carattere: ");
	c=getchar();
	getchar(); //prova a rimuovere questa chiamata
	printf("Hai digitato: %c\n",c);
	printf("Digitane un altro: ");
	c=getchar();
	printf("Hai digitato: %c\n",c);

	return 0;
}
