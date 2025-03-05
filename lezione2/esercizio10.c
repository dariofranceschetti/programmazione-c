#include <stdio.h>

int main() {
    int a, b;

    
    printf("Inserisci il primo numero intero: ");
    scanf("%d", &a);

    printf("Inserisci il secondo numero intero: ");
    scanf("%d", &b);

    
    printf("\nRisultati:\n");
    printf("Somma: %d + %d = %d\n", a, b, a + b);
    printf("Sottrazione: %d - %d = %d\n", a, b, a - b);
    printf("Prodotto: %d * %d = %d\n", a, b, a * b);

    
    if (b != 0) {
        printf("Divisione intera: %d / %d = %d\n", a, b, a / b);
        printf("Resto della divisione: %d %% %d = %d\n", a, b, a % b); 
    } else {
        printf("Errore: divisione per zero.\n");
    }

    return 0;
}
