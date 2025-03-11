/* L'algoritmo euclideo delle sottrazioni successive */
// Input: due interi a,b>0.
// Output: mcd(a,b) 
#include <stdio.h>
int main(void)
{
	int a=110, b=15;
	printf("Il mcd di %d e %d e': ",a,b);
	
	while (a != b)
	{
		if (a>b)
			a=a-b;
		else
			b=b-a;
	}
	printf("%d.\n", a);
	return 0;
}
