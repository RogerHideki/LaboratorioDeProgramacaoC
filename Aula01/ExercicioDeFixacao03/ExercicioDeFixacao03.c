#include <stdio.h>
#include <stdbool.h>

int main(){
    int idade;
    float mediaIdades;
    char nome[50];
    char genero;
    float salario;
    float altura;
    int dias;
    float preco;
    char cep[10];
    char telefone[20];
    int cadastrado;

    printf("Digite a idade: ");
    scanf(" %d", &idade);
    printf("Digite a média das idades de um grupo de pessoas: ");
    scanf(" %f", &mediaIdades);
    printf("Digite o nome: ");
    scanf(" %[^\n]s", nome);
    printf("Digite o gênero ('M' / 'F'): ");
    scanf(" %c", &genero);
    printf("Digite o salário: ");
    scanf(" %f", &salario);
    printf("Digite a altura de uma pessoa: ");
    scanf(" %f", &altura);
    printf("Digite a quantidade de dias do mês: ");
    scanf(" %d", &dias);
    printf("Digite o preço de uma mercadoria: ");
    scanf(" %f", &preco);
    printf("Digite o CEP: ");
    scanf(" %[^\n]s", cep);
    printf("Digite o telefone: ");
    scanf(" %[^\n]s", telefone);
    printf("Digite se o indivíduo é cadastrado ou não ('1' / '0'): ");
    scanf(" %d", &cadastrado);

    printf("\nIdade: %d \n", idade);
    printf("Média das idades: %.2f \n", mediaIdades);
    printf("Nome: %s \n", nome);
    printf("Gênero: %c \n", genero);
    printf("Salário: %.2f \n", salario);
    printf("Altura: %.2f \n", altura);
    printf("Dias: %d \n", dias);
    printf("Preço: %.2f \n", preco);
    printf("CEP: %s \n", cep);
    printf("Telefone: %s \n", telefone);
    printf("Cadastrado: %d \n", cadastrado);

    return 0;
}