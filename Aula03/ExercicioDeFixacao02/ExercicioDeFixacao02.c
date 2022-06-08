#include <stdio.h>

int main(){
    int idade, i;
    float soma;

    printf("Digite a idade de um indivíduo: ");
    scanf(" %d", &idade);
    soma = 0;
    i = 0;
    while (idade > 0)
    {
        soma += idade;
        i++;
        printf("Digite a idade de um indivíduo: ");
        scanf(" %d", &idade);
    }
    
    if (soma > 0)
        printf("\nIdade média: %.2f \n", soma / i);
    else
        printf("\nIdade inválida.\n");

    return 0;
}