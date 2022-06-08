#include <stdio.h>

int main(){
    char nome[100], sexo;
    int idade;
    float salario;

    printf("Qual é o seu nome? ");
    scanf(" %[^\n]s", nome);
    printf("Qual é a sua idade? ");
    scanf(" %d", &idade);
    printf("Qual é o valor do seu salário? ");
    scanf(" %f", &salario);
    printf("Qual é o seu sexo? ");
    scanf(" %c", &sexo);

    printf("\nNome: %s \n", nome);
    printf("Idade: %d \n", idade);
    printf("Salário: %.2f \n", salario);
    printf("Sexo: %c \n", sexo);

    return 0;
}