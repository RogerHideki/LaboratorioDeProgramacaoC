#include <stdio.h>

int main(){
    int dia, mes, ano, diaAtual, mesAtual, anoAtual, idade;

    printf("Digite os valores do dia, do mês e do ano de nascimento da pessoa respectivamente:\n");
    scanf(" %d %d %d", &dia, &mes, &ano);
    printf("Digite os valores do dia, do mês e do ano da data atual respectivamente:\n");
    scanf(" %d %d %d", &diaAtual, &mesAtual, &anoAtual);

    if (mesAtual > mes || (mesAtual == mes && diaAtual >= dia))
        idade = anoAtual - ano;
    else
        idade = anoAtual - ano - 1;

    printf("\nIdade: %d \n", idade);

    if (idade >= 16)
        printf("A pessoa tem idade para votar.\n");
    else
        printf("A pessoa não tem idade para votar.\n");

    return 0;
}