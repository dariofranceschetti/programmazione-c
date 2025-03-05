#include <stdio.h>

int main() {
    double a, b;

    
    printf("Inserisci il primo numero intero: ");
    scanf("%lf", &a);

    printf("Inserisci il secondo numero intero: ");
    scanf("%lf", &b);

    
    printf("\nRisultati:\n");
    printf("Somma: %lf + %lf = %lf\n", a, b, a + b);
    printf("Sottrazione: %lf - %lf = %lf\n", a, b, a - b);
    printf("Prodotto: %lf * %lf = %lf\n", a, b, a * b);

    
    if (b != 0) {
        printf("Divisione intera: %lf / %lf = %lf\n", a, b, a / b);
        printf("Resto della divisione: %lf %% %lf = %lf\n", a, b, a % b); 
    } else {
        printf("Errore: divisione per zero.\n");
    }

    return 0;
}