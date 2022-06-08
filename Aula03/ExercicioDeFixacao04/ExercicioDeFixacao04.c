#include <stdio.h>

int main(){
    int A, B, anos;

    A = 90000000;
    B = 200000000;
    anos = 0;
    while (A < B)
    {
        A *= 1.030;
        B *= 1.015;
        anos += 1;
    }

    printf("Número de anos necessários para que a população do país A ultrapasse ou iguale a população do país B: %d anos\n", anos);

    return 0;
}