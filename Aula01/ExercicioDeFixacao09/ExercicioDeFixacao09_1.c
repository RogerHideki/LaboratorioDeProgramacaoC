#include <stdio.h>

int main(){
    float peso;

    printf("Digite o peso de uma pessoa em quilogramas: ");
    scanf(" %f", &peso);

    printf("\nPeso se a pessoa engordar 15%%: %.2f kg\n", peso * 1.15);
    printf("Peso se a pessoa emagrecer 20%%: %.2f kg\n", peso * 0.80);

    return 0;
}