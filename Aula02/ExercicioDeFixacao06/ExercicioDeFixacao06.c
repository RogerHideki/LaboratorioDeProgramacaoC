#include <stdio.h>

int main(){
    float altura;
    char sexo;

    printf("Digite a altura da pessoa em metros: ");
    scanf(" %f", &altura);
    printf("Digite o sexo da pessoa ('M' ou 'F'): ");
    scanf(" %c", &sexo);

    if (sexo == 'M')
        printf("\nPeso ideal: %.2f kg\n", 72.6 * altura - 58);
    else
        printf("\nPeso ideal: %.2f kg\n", 62.1 * altura - 44.7);
}