#include <stdio.h>

int main(){
    float salario;
    int V;

    printf("Digite o salário fixo do vendedor: ");
    scanf(" %f", &salario);
    printf("Digite o total de vendas efetuadas no mês: ");
    scanf(" %d", &V);

    if (V > 100 && V <= 500)
        salario = salario + 500.00;
    else if (V > 500 && V <= 750)
        salario = salario + 700.00;
    else if (V > 750)
        salario = salario + 1000.00;
    
    return 0;
}