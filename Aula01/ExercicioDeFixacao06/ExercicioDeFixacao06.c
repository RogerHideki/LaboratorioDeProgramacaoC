#include <stdio.h>

int main(){
    float r, i, v;

    printf("Digite o valor da resistência elétrica (ohms): ");
    scanf(" %f", &r);
    printf("Digite o valor da corrente elétrica (ampères): ");
    scanf(" %f", &i);

    v = i * r;

    printf("\nTensão elétrica: %.2f volts\n", v);
    printf("Potência elétrica: %.2f watts\n", v * i);

    return 0;
}