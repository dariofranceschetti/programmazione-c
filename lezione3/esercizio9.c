#include <stdio.h>
#include <ctype.h>

int main() {
    char c;

    // Chiede all'utente di inserire un carattere
    printf("Inserisci un carattere: ");
    scanf("%c", &c);

    // Controlla se il carattere è alfabetico
    if (!isalpha(c)) {
        printf("Il carattere %c non è alfabetico.\n", c);
    } else {
        if (isupper(c)) {
            printf("Il carattere %c è una lettera maiuscola.\n", c);
        } else {
            printf("Il carattere %c è una lettera minuscola.\n", c);
        }
    }

    return 0;
}