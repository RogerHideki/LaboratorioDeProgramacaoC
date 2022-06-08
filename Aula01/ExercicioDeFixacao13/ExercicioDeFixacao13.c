#include <stdio.h>

int main(){
    int consultores, maquinas;
    float salarioMinimo, preco, salarioTotal;

    printf("Digite a quantidade de consultores de venda da loja no mês: ");
    scanf(" %d", &consultores);
    printf("Digite o valor do salário mínimo: R$ ");
    scanf("%f", &salarioMinimo);
    printf("Digite o preço de custo de cada máquina agrícola: R$ ");
    scanf("%f", &preco);
    printf("Digite a quantidade de máquinas agrícolas vendidas no mês: ");
    scanf("%d", &maquinas);

    salarioTotal = salarioMinimo * 2 + preco * 0.1 * maquinas / consultores;

    printf("\nSalário total de cada empregado: R$ %.2f \n", salarioTotal);
    printf("Lucro líquido da loja: R$ %.2f \n", preco * 1.5 * maquinas - (salarioTotal * consultores + preco * maquinas));

    return 0;
}