#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h>

typedef struct tCadastro
{
    char nome[50], cpf[15], sexo;
    float altura, peso, imc;
} tCadastro;

int main()
{
    SetConsoleOutputCP(65001);

    tCadastro *cadastro;
    int quantidade, i;
    char cpfBusca[15];
    bool achou;

    printf("Quantidade de pessoas: ");
    scanf(" %d", &quantidade);

    cadastro = (tCadastro *) malloc (sizeof(tCadastro) * quantidade);
    if (cadastro != NULL)
    {
        for (i = 0; i < quantidade; i++)
        {
            printf("Nome da pessoa %d: ", i + 1);
            scanf(" %[^\n]s", cadastro[i].nome);
            printf("Altura da pessoa %d: ", i + 1);
            scanf(" %f", &cadastro[i].altura);
            printf("Peso da pessoa %d: ", i + 1);
            scanf(" %f", &cadastro[i].peso);
            printf("CPF da pessoa %d: ", i + 1);
            scanf(" %[^\n]s", cadastro[i].cpf);
            printf("Sexo da pessoa %d: ", i + 1);
            scanf(" %c", &cadastro[i].sexo);

            cadastro[i].imc = cadastro[i].peso / (cadastro[i].altura * cadastro[i].altura);
        }
        printf("CPF para busca: ");
        scanf(" %[^\n]s", cpfBusca);

        achou = false;
        i = 0;
        while (!achou && i < quantidade)
        {
            if (strcmp(cpfBusca, cadastro[i].cpf) == 0)
            {
                printf("IMC: %f", cadastro[i].imc);
                achou = true;
            }
            else
            {
                i++;
            }
        }
        if (i == quantidade)
        {
            printf("Não encontrado\n");
        }
        free(cadastro);
    }
    else
    {
        printf("Não foi possível alocar a memória");
    }

    return 0;
}