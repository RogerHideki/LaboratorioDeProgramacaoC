#include <stdio.h>

int main() {
    float valor;
    int codigo;

    printf("Digite o valor de um produto: R$ ");
    scanf(" %f", &valor);

    printf("\nCódigo | Desconto (em %%) | Condição\n");
    printf("  33   |        10        | Qualquer valor\n");
    printf("  77   |        20        | Qualquer valor\n");
    printf(" 230   |        30        | Valor do produto maior que R$100,00\n");
    printf(" 230   |        25        | Caso contrário\n");

    printf("\nDigite um código de desconto: ");
    scanf(" %d", &codigo);

    switch (codigo) {
        case 33:
            valor = valor * 0.90;
            break;
        case 77:
            valor = valor * 0.80;
            break;
        case 230:
            if (valor > 100)
                valor = valor * 0.70;
            else
                valor = valor * 0.75;
            break;
        default :
            printf("\nDesconto inválido");
    }

    printf("\nValor do produto: R$ %.2f \n", valor);

    return 0;
}