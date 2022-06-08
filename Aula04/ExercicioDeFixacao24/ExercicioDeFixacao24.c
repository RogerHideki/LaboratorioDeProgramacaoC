#include <stdio.h>

const int tam = 15;

typedef struct tComparativo {
    char nome[100], telefone[20];
    float preco;
} tComparativo;

int main()
{
    tComparativo listaLojas[tam];
    int i;
    float somaPrecos, mediaPrecos;

    somaPrecos = 0.0;
    for (i = 0; i < tam; i++)
    {
        printf("Nome da loja %d: ", i+1);
        scanf(" %[^\n]s", listaLojas[i].nome);
        printf("Telefone da loja %d: ", i+1);
        scanf(" %[^\n]s", listaLojas[i].telefone);
        printf("Preço do eletrodoméstico da loja %d: ", i+1);
        scanf(" %f", &listaLojas[i].preco);

        somaPrecos += listaLojas[i].preco;
    }

    mediaPrecos = somaPrecos / tam;

    printf("\nMédia de preços: %.2f\n", mediaPrecos);
    printf("Nome e telefone das lojas cujo preço estava abaixo da média:\n");
    for (i = 0; i < tam; i++)
    {
        if (listaLojas[i].preco < mediaPrecos)
            printf(" %s \t %s\n", listaLojas[i].nome, listaLojas[i].telefone);
    }

    return 0;
}