#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void menuVendas() {
    //Imprime o menu de vendas
    printf("1. Cadastrar uma nova venda");
    printf("2. Listar compras do cliente");
    printf("9. Sair");
}
void menuClientes() {
    //Imprime o menu de clientes
    printf("1. Cadastrar novo cliente");
    printf("2. Atualizar pontuação");
    printf("3. Atualizar cliente");
    printf("4. Mostrar a quantidade de clientes entre 18 e 25 anos");
    printf("5. Listar clientes com mais de 1000 pontos");
    printf("9. Sair");
}
void menuProdutos() {
    //Imprime o menu de produtos
    printf("1. Cadastrar novo produto");
    printf("2. Alterar dados de um produto");
    printf("3. Listar produtos por setor");
    printf("4. Listar produtos com estoque abaixo de 5");
    printf("9. Sair");
}
int main() {
    SetConsoleOutputCP(65001);

    //Variáveis locais
    int opcao;

    //Imprime o menu principal
    printf("1. Vendas");
    printf("2. Clientes");
    printf("3. Produtos");
    printf("9. Sair");

    //Pede uma opção, anota a opção escolhida e depois limpa a tela
    printf("Digite uma opção: ");
    scanf(" %c", opcao);
    system("cls");

    //Seleciona a opção escolhida
    switch(opcao){
        case '1':
            menuVendas();
            break;
        case '2':
            menuClientes();
            break;
        case '3':
            menuProdutos();
            break;
        case '9':
            printf("Programa finalizado");
            break;
        default:
            printf("Opção inválida");
    }
}