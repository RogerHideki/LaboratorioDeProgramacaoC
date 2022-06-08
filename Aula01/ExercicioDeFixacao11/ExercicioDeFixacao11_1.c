#include <stdio.h>

int main(){
    float celcius;

    printf("Digite a temperatura em Celsius: ");
    scanf(" %f", &celcius);

    printf("\nTemperatura convertida em Fahrenheit: %.2f °F\n", 1.8 * celcius + 32);

    return 0;
}