#include <stdio.h>

void subMenuProdutos ()
{
    do
    {
        system ("cls");
        printf ("\n\n**********MENU DE PRODUTOS*********\n");
        printf ("1. Cadastrar Novo Produto\n");
        printf ("2. Atualizar Informações de Produto\n");
        printf ("3. Estoque Por Setor\n");
        printf ("4. Produtos Com Estoque Baixo\n");
        printf ("9. Sair\n");
        printf ("***********************************\n");
        printf ("\nSelecione o número correspondente: ");
        scanf (" %d", &subMenu3);
        switch (subMenu3)
        {
            case 1:
                system ("cls");
                printf ("\n\nCadastro de Novo Produto: \n");
                arq = fopen ("Produtos.csv", "a+");
                if (arq != NULL)
                {
                    int qtdCadProd;
                    printf ("Quantos produtos quer cadastrar? \n");
                    scanf (" %d", &qtdCadProd);
                    for (int i = 0; i < qtdCadProd; i++)
                    {
                        system ("cls");
                        printf ("\n\nIdentificação: \n");
                        scanf (" %d", &produtos.idenProd);
                        printf ("Setor do produto: \n");
                        scanf (" %[^\n]s", produtos.setor);
                        printf ("Nome: \n");
                        scanf (" %[^\n]s", produtos.nome);
                        printf ("Preço: \n");
                        scanf (" %lf", &produtos.preco);
                        printf ("Data de válidade: \n");
                        printf ("Dia: \n");
                        scanf (" %d", &produtos.dataVal.dia);
                        printf ("Mês: \n");
                        scanf (" %d", &produtos.dataVal.mes);
                        printf ("Ano: \n");
                        scanf (" %d", &produtos.dataVal.ano);
                        printf ("Quantidade no estoque: \n");
                        scanf (" %d", &produtos.qtdEstoq);

                        fprintf (arq, "%d; ", produtos.idenProd);
                        fprintf (arq, "%s; ", produtos.setor);
                        fprintf (arq, "%s; ", produtos.nome);
                        fprintf (arq, "%.2lf; ", produtos.preco);
                        fprintf (arq, "%d/%d/%d; ", produtos.dataVal.dia, produtos.dataVal.mes, produtos.dataVal.ano);
                        fprintf (arq, "%d; \n", produtos.qtdEstoq);
                        fflush (arq);
                    }
                        fclose (arq);
                }
                else
                {
                    printf ("Erro na abertura do arquivo! \n");
                }
                system ("pause");
                break;
            case 2: 
                system ("cls");
                printf ("\n\nAtualização de Informações dos Produtos: \n");
                arq = fopen ("Produtos.csv", "a+");
                if (arq != NULL)
                {
                    int iden;
                    TProduto novoProduto;
                    printf ("Entre com a identificação do produto: \n");
                    scanf (" %d", &iden);
                    fseek (arq, sizeof(TProduto)*(iden-1), SEEK_SET);
                    fread (&novoProduto, sizeof(TProduto), 1, arq);
                    printf (" %d, %s, %s, %lf, %d/%d/%d, %d \n", novoProduto.idenProd, novoProduto.setor, novoProduto.nome, novoProduto.preco, novoProduto.dataVal.dia, novoProduto.dataVal.mes, novoProduto.dataVal.ano, novoProduto.qtdEstoq);
                    printf ("\n\nIdentificação: \n");
                    scanf (" %d", &novoProduto.idenProd);
                    printf ("Setor do produto: \n");
                    scanf (" %[^\n]s", novoProduto.setor);
                    printf ("Nome: \n");
                    scanf (" %[^\n]s", novoProduto.nome);
                    printf ("Preço: \n");
                    scanf (" %lf", &novoProduto.preco);
                    printf ("Data de válidade: \n");
                    printf ("Dia: \n");
                    scanf (" %d", &novoProduto.dataVal.dia);
                    printf ("Mês: \n");
                    scanf (" %d", &novoProduto.dataVal.mes);
                    printf ("Ano: \n");
                    scanf (" %d", &novoProduto.dataVal.ano);
                    printf ("Quantidade no estoque: \n");
                    scanf (" %d", &novoProduto.qtdEstoq);
                    fseek (arq, sizeof(TProduto)*(iden-1), SEEK_SET);
                    fwrite (&novoProduto, sizeof(TProduto), 1, arq);
                    fflush (arq);
                    fclose (arq);
                    printf ("\n\nInformações do Produto Modificadas com Sucesso! \n");
                }
                else
                {
                    printf ("Erro na Abertura do Arquivo! \n");
                }
                    system ("pause");
                break;
            case 3:
                system ("cls");
                printf ("\n\nLista de Estoque por setor: \n");

                system ("pause");
                break;
            case 4:
                system ("cls");
                printf ("Lista de Produtos Com Estoque Baixo: \n");

                system ("pause");
                break;
            default:
                menu = 0;
                break;
        }
    } while (subMenu3 != 9);
}