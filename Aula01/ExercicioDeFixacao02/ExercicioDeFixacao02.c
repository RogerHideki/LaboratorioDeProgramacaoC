#include <stdio.h>
#include <stdbool.h>

int main(){
    int idade = 18;
    float mediaIdades = 19.5;
    char nome[50] = "Roger Hideki";
    char genero = 'M';
    float salario = 1212.00;
    float altura = 1.73;
    int dias = 30;
    float preco = 150.00;
    char cep[10] = "78068-687";
    char telefone[20] = "+55 (65) 98108-9208";
    bool cadastrado = true;

    printf("Idade: %d \n", idade);
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