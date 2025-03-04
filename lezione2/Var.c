/* Uso delle variabili */

#include <stdio.h>

int main(void)
{
	//Dichiara x di tipo intero
	int x; 
	//Dichiara y di tipo double e le assegna -2.5
	double y=-2.5;
	//Assegna ad x il valore 5
	x=5;
	
	//Qui usiamo %g per visualizzare il valore di tipo double
	printf("x: %d\ny: %g\n",x,y);
	
	return 0;
}