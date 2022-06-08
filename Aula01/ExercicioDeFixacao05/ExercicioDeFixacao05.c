#include <stdio.h>

int main(){
    float trabalho, avaliacao, exame;

    printf("Digite a nota do trabalho de laboratório: ");
    scanf(" %f", &trabalho);
    printf("Digite a nota da avaliação semestral: ");
    scanf(" %f", &avaliacao);
    printf("Digite a nota do exame final: ");
    scanf(" %f", &exame);

    printf("\nMédia ponderada: %.2f \n", (trabalho * 2 + avaliacao * 3 + exame * 5) / 10);

    return 0;
}