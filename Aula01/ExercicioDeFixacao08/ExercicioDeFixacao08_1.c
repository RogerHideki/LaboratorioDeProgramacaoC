#include <stdio.h>

int main(){
    float preco;

    printf("Digite o preço de um produto: R$ ");
    scanf(" %f", &preco);

    printf("\nPreço com desconto: R$ %.2f \n", preco * 0.85);

    return 0;
}