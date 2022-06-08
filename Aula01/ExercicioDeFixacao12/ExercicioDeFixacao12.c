#include <stdio.h>

int main(){
    float horas, salario, horasExtras;

    printf("Digite o número de horas trabalhadas: ");
    scanf(" %f", &horas);
    printf("Digite o valor do salário mínimo: R$ ");
    scanf(" %f", &salario);
    printf("Digite o número de horas extras trabalhadas: ");
    scanf(" %f", &horasExtras);

    printf("\nO salário a receber equivale a R$ %.2f \n", horas * salario / 8 + horasExtras * salario / 4);

    return 0;
}