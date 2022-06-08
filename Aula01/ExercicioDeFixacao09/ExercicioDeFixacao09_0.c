#include <stdio.h>

int main(){
    float salario, vendas, comissao;

    printf("Digite o salário fixo do funcionário: R$ ");
    scanf(" %f", &salario);
    printf("Digite o valor das vendas do funcionário: R$ ");
    scanf(" %f", &vendas);

    comissao = vendas * 0.04;

    printf("\nComissão: R$ %.2f \n", comissao);
    printf("Salário final: R$ %.2f \n", salario + comissao);

    return 0;
}