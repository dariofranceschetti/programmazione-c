/* Un esempio di selezione con l'istruzione if */

#include <stdio.h>
#include <ctype.h> //Per la funzione int isdigit(int c) della libreria

int main(void)
{	
	char c;
	
	printf("Digita un carattere: ");
	c=getchar();	
	
	if ( isdigit(c) ) //Vera se c e' una cifra. Equivale a isdigit(c)!=0
		printf("Hai digitato una cifra.\n");
	else
		printf("Non hai digitato una cifra.\n");
		
	return 0;
}
