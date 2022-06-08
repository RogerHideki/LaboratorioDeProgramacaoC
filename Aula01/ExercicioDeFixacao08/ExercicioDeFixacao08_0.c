#include <stdio.h>

int main(){
    float nota1, nota2, nota3;

    printf("Digite a primeira nota: ");
    scanf(" %f", &nota1);
    printf("Digite a segunda nota: ");
    scanf(" %f", &nota2);
    printf("Digite a terceira nota: ");
    scanf(" %f", &nota3);

    printf("\nMédia ponderada: %.2f \n", (nota1 + nota2 * 2 + nota3 * 3) / 6);

    return 0;
}