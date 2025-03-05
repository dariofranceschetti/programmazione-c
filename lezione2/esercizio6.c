#include <stdio.h>
#include <float.h>

int main() {
    printf("Massimo valore rappresentabile:\n");
    printf("FLT_MAX: %g\n", FLT_MAX);
    printf("DBL_MAX: %g\n", DBL_MAX);

    printf("\nMinimo valore positivo rappresentabile:\n");
    printf("FLT_MIN: %g\n", FLT_MIN);
    printf("DBL_MIN: %g\n", DBL_MIN);

    return 0;
}