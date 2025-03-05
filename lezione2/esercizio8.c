#include <stdio.h>
#include <float.h>

int main() {
    float num = FLT_MIN;
    printf("Valore iniziale di num: %g\n", num);

    num = num / FLT_MAX;
    printf("Valore di num dopo la divisione: %g\n", num);

    return 0;
}
