#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

typedef struct TData {
    int dia;
    int mes;
    int ano;
} TData;
typedef struct TVenda {
    int idenVenda;
    int cpf;
    TData dataCompr;
    float valorTot;
    int qtdProd;
} TVenda;
typedef struct TProduto {
    int idenProd;
    char setor[20];
    char nome[50];
    double preco;
    TData dataVal;
    int qtdEstoq;
} TProduto;
typedef struct TCliente {
    char cpf[13];
    char nomeCliente[50];
    TData nasc;
    int idade;
    char end[50];
    char cid[50];
    char est[2];
    int point;
} TCliente;

int main() {
    SetConsoleOutputCP(65001);

    FILE *arq;
    int menu, subMenu1, subMenu2, subMenu3;
    TVenda vendas;
    TProduto produtos;
    TCliente clientes;

    do {
        //system ("cls");
        printf("\n\n*****MENU*****\n");
        printf("1. Vendas \n");
        printf("2. Clientes \n");
        printf("3. Produtos \n");
        printf("9. Sair \n");
        printf("**************\n");
        printf("\nSelecione o número correspondente: ");
        scanf(" %d", &menu);

        switch (menu) {
            case 1: //Vendas
                do {
                    //system ("cls");
                    printf("\n\n********MENU VENDAS********\n");
                    printf("1. Nova Venda \n");
                    printf("2. Listar Venda do Cliente \n");
                    printf("9. Sair \n");
                    printf("***************************\n");
                    printf("\nSelecione o número correspondente: ");
                    scanf(" %d", &subMenu1);

                    switch (subMenu1) {
                        case 1:
                            //system ("cls");
                            printf("\n\nRealizar Nova Venda: \n");


                            //system ("pause");
                            break;
                        case 2:
                            //system ("cls");
                            printf("\n\nLista da Nova Venda do Cliente: \n");

                            //system ("pause");
                            break;
                        default:
                            menu = 0;
                            break;
                    }
                } while (subMenu1 != 9);
                break;
            case 2: //Clientes
                do {
                    //system ("cls");
                    printf("\n\n*************MENU CLIENTES*************\n");
                    printf("1. Cadastrar de Novo Cliente \n");
                    printf("2. Atualizar Pontuação \n");
                    printf("3. Atualizar Cliente \n");
                    printf("4. Listar Clientes Entre 18 a 25 \n");
                    printf("5. Listar Clientes acima de 200 pontos \n");
                    printf("9. Sair \n");
                    printf("***************************************\n");
                    printf("\nSelecione o número correspondente: ");
                    scanf(" %d", &subMenu2);

                    switch (subMenu2) {
                        case 1:
                            //system ("cls");
                            printf("\n\nCadastro de Novo Cliente: \n");

                            //system ("pause");
                            break;
                        case 2:
                            //system ("cls");
                            printf("\n\nAtualização de Pontos: \n");

                            //system ("pause");
                            break;
                        case 3:
                            //system ("cls");
                            printf("\n\nAtualização de Dados dos Cliente: \n");

                            //system ("pause");
                            break;
                        case 4:
                            //system ("cls");
                            printf("\n\nLista de Clientes Entre 18 a 25 Anos: \n");

                            //system ("pause");
                            break;
                        case 5:
                            //system ("cls");
                            printf("\n\nLista de Clientes Acima de 200 Pontos: \n");

                            //system ("pause");
                            break;
                        default:
                            menu = 0;
                            break;
                    }
                } while (subMenu2 != 9);
                break;
            case 3: //Produtos
                do {
                    //system ("cls");
                    printf("\n\n**********MENU DE PRODUTOS*********\n");
                    printf("1. Cadastrar Novo Produto\n");
                    printf("2. Atualizar Informações de Produto\n");
                    printf("3. Estoque Por Setor\n");
                    printf("4. Produtos Com Estoque Baixo\n");
                    printf("9. Sair\n");
                    printf("***********************************\n");
                    printf("\nSelecione o número correspondente: ");
                    scanf(" %d", &subMenu3);

                    switch (subMenu3) {
                        case 1:
                            system("cls");
                            printf("\n\nCadastro de Novo Produto: \n");
                            arq = fopen("Produtos.csv", "a+");
                            if (arq != NULL) {
                                int qtdCadProd;
                                printf("Quantos produtos quer cadastrar? \n");
                                scanf(" %d", &qtdCadProd);
                                for (int i = 0; i < qtdCadProd; i++) {
                                    system("cls");
                                    printf("\n\nIdentificação: \n");
                                    scanf(" %d", &produtos.idenProd);
                                    printf("Setor do produto: \n");
                                    scanf(" %[^\n]s", produtos.setor);
                                    printf("Nome: \n");
                                    scanf(" %[^\n]s", produtos.nome);
                                    printf("Preço: \n");
                                    scanf(" %lf", &produtos.preco);
                                    printf("Data de válidade: \n");
                                    printf("Dia: \n");
                                    scanf(" %d", &produtos.dataVal.dia);
                                    printf("Mês: \n");
                                    scanf(" %d", &produtos.dataVal.mes);
                                    printf("Ano: \n");
                                    scanf(" %d", &produtos.dataVal.ano);
                                    printf("Quantidade no estoque: \n");
                                    scanf(" %d", &produtos.qtdEstoq);

                                    fprintf(arq, "%d; ", produtos.idenProd);
                                    fprintf(arq, "%s; ", produtos.setor);
                                    fprintf(arq, "%s; ", produtos.nome);
                                    fprintf(arq, "%.2lf; ", produtos.preco);
                                    fprintf(arq, "%d/%d/%d; ", produtos.dataVal.dia, produtos.dataVal.mes,
                                            produtos.dataVal.ano);
                                    fprintf(arq, "%d; \n", produtos.qtdEstoq);
                                    fflush(arq);
                                }
                                fclose(arq);
                            } else {
                                printf("Erro na abertura do arquivo! \n");
                            }
                            system("pause");
                            break;
                        case 2:
                            system("cls");
                            printf("\n\nAtualização de Informações dos Produtos: \n");
                            arq = fopen("Produtos.csv", "a+");
                            if (arq != NULL) {
                                int iden;
                                TProduto novoProduto;
                                printf("Entre com a identificação do produto: \n");
                                scanf(" %d", &iden);
                                fseek(arq, sizeof(TProduto) * (iden - 1), SEEK_SET);
                                fread(&novoProduto, sizeof(TProduto), 1, arq);
                                printf(" %d, %s, %s, %lf, %d/%d/%d, %d \n", novoProduto.idenProd, novoProduto.setor,
                                       novoProduto.nome, novoProduto.preco, novoProduto.dataVal.dia,
                                       novoProduto.dataVal.mes, novoProduto.dataVal.ano, novoProduto.qtdEstoq);
                                printf("\n\nIdentificação: \n");
                                scanf(" %d", &novoProduto.idenProd);
                                printf("Setor do produto: \n");
                                scanf(" %[^\n]s", novoProduto.setor);
                                printf("Nome: \n");
                                scanf(" %[^\n]s", novoProduto.nome);
                                printf("Preço: \n");
                                scanf(" %lf", &novoProduto.preco);
                                printf("Data de válidade: \n");
                                printf("Dia: \n");
                                scanf(" %d", &novoProduto.dataVal.dia);
                                printf("Mês: \n");
                                scanf(" %d", &novoProduto.dataVal.mes);
                                printf("Ano: \n");
                                scanf(" %d", &novoProduto.dataVal.ano);
                                printf("Quantidade no estoque: \n");
                                scanf(" %d", &novoProduto.qtdEstoq);
                                fseek(arq, sizeof(TProduto) * (iden - 1), SEEK_SET);
                                fwrite(&novoProduto, sizeof(TProduto), 1, arq);
                                fflush(arq);
                                fclose(arq);
                                printf("\n\nInformações do Produto Modificadas com Sucesso! \n");
                            } else {
                                printf("Erro na Abertura do Arquivo! \n");
                            }
                            system("pause");
                            break;
                        case 3:
                            //system ("cls");
                            printf("\n\nLista de Estoque por setor: \n");

                            //system ("pause");
                            break;
                        case 4:
                            //system ("cls");
                            printf("Lista de Produtos Com Estoque Baixo: \n");

                            //system ("pause");
                            break;
                        default:
                            menu = 0;
                            break;
                    }
                } while (subMenu3 != 9);
                break;
        }

    } while (menu != 9);

    printf("\nPrograma Encerrado Pelo Usuário! \n");
    //system ("pause");

    return 0;
}