#include <stdio.h>

int main(){
    float salarioMinimo, salario;

    printf("Digite o valor do salário mínimo: R$ ");
    scanf(" %f", &salarioMinimo);
    printf("Digite o valor do salário do funcionário: R$ ");
    scanf(" %f", &salario);

    printf("\nO funcionário receberá %.2f salários mínimos.\n", salario / salarioMinimo);

    return 0;
}