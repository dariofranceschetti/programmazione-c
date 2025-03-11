#include <stdio.h>

int main() {
    double num1, num2, result;
    int choice;

    do {
        printf("Inserisci il primo valore reale: ");
        scanf("%lf", &num1);
        printf("Inserisci il secondo valore reale: ");
        scanf("%lf", &num2);

        printf("Scegli l'operazione da eseguire:\n");
        printf("1. Somma\n");
        printf("2. Sottrazione\n");
        printf("3. Moltiplicazione\n");
        printf("4. Divisione\n");
        printf("5. Esci\n");
        printf("Inserisci la tua scelta (1, 2, 3, 4, 5): ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Risultato della somma: %.2lf\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Risultato della sottrazione: %.2lf\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Risultato della moltiplicazione: %.2lf\n", result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Risultato della divisione: %.2lf\n", result);
            } else {
                printf("Errore: divisione per zero non consentita.\n");
            }
            break;
        case 5:
            printf("Uscita dal programma.\n");
            break;
        default:
            printf("Scelta non valida.\n");
            break;
        }
    } while (choice != 5);

    return 0;
}
