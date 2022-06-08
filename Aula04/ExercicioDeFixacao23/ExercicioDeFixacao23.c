#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct tPessoa
{
    char nome[100], cpf[15], sexo;
    float altura, peso, imc;
} tPessoa;

int main()
{
    tPessoa listaPessoas[5];
    int i;
    char cpf[15];
    bool achou;

    for (i = 0; i < 5; i++)
    {
        printf("Nome da pessoa %d: ", i + 1);
        scanf(" %[^\n]s", listaPessoas[i].nome);
        printf("Altura da pessoa %d: ", i + 1);
        scanf(" %f", &listaPessoas[i].altura);
        printf("Peso da pessoa %d: ", i + 1);
        scanf(" %f", &listaPessoas[i].peso);
        printf("CPF da pessoa %d: ", i + 1);
        scanf(" %[^\n]s", listaPessoas[i].cpf);
        printf("Sexo da pessoa %d (M ou F): ", i + 1);
        scanf(" %c", &listaPessoas[i].sexo);
        
        listaPessoas[i].imc = listaPessoas[i].peso / (listaPessoas[i].altura * listaPessoas[i].altura);
    }

    printf("Digite o CPF para buscar o IMC: ");
    scanf(" %[^\n]s", cpf);

    achou = false;
    i = 0;
    while (!achou && i < 5)
    {
        if (strcmp(cpf, listaPessoas[i].cpf) == 0)
        {
            printf("\nIMC = %.2f\n", listaPessoas[i].imc);
            achou = true;
        }
        i++;
    }
    if (!achou)
        printf("\nCPF não encontrado\n");

    return 0;
}