#include <stdio.h>
#include <limits.h>

int main() {
    int num = INT_MAX;
    printf("Valore iniziale di num: %d\n", num);

    num = num + 1;
    printf("Valore di num con sommato 1: %d\n", num);

    return 0;
}
