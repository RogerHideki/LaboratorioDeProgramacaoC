#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include "subMenuVendas.c"
#include "subMenuClientes.c"
#include "subMenuProdutos.c"

void subMenuVendas ();
void subMenuClientes ();
void subMenuProdutos ();

typedef struct TData
{
    int dia;
    int mes;
    int ano;
} TData;
typedef struct TVenda 
{
    int idenVenda;
    int cpf;
    TData dataCompr;
    float valorTot;
    int qtdProd;
} TVenda;
typedef struct TProduto
{
    int idenProd;
    char setor[20];
    char nome[50];
    double preco;
    TData dataVal;
    int qtdEstoq;
} TProduto;
typedef struct TCliente
{
    char cpf[13];
    char nomeCliente[50];
    TData nasc;
    int idade;
    char end[50];
    char cid[50];
    char est[2];
    int point;
} TCliente;

int main ()
{
    SetConsoleOutputCP(65001);

    FILE *arq;
    int menu, subMenu1, subMenu2, subMenu3;
    TVenda vendas;
    TProduto produtos;
    TCliente clientes;

    do
    {
        system ("cls");
        printf ("\n\n*****MENU*****\n");
        printf ("1. Vendas \n");
        printf ("2. Clientes \n");
        printf ("3. Produtos \n");
        printf ("9. Sair \n");
        printf ("**************\n");
        printf ("\nSelecione o número correspondente: ");
        scanf (" %d", &menu);

        switch (menu)
        {
            case 1: //Vendas
                subMenuVendas();
                break;
            case 2: //Clientes
                subMenuClientes();
                break;
            case 3: //Produtos
                subMenuProdutos();
                break;
            case 9: //Sair
                printf ("\nPrograma Encerrado Pelo Usuário! \n");
                break;
            default:
                printf ("\nComando inválido! \n");
                break;
        }
    } while (menu != 9);
    
    return 0;
}