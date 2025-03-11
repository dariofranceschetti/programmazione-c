/* L'algoritmo euclideo delle sottrazioni successive */
// Input: due interi a,b>0.
// Output: mcd(a,b) 
#include <stdio.h>
int main(void)
{
	int a,b;
    printf("Inserisci due numeri interi positivi: ");
    scanf("%d%d",&a,&b);
    // Controllo che i numeri inseriti siano positivi
    if (a<=0 || b<=0)
    {
        printf("I numeri inseriti non sono positivi.\n");
        return -1;
    }

	printf("Il mcd di %d e %d e': ",a,b);
	while (a != b)
	{
		if (a>b)
			a=a-b;
		else
			b=b-a;
	}
	printf("%d.\n", a);
    
    //controllo quante volte viene eserguito il ciclo
    printf("Il ciclo e' stato eseguito %d volte.\n",a);

	return 0;
}