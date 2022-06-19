#include <stdio.h>

void subMenuVendas ()
{
    do
    {
        system ("cls");
        printf ("\n\n********MENU VENDAS********\n");
        printf ("1. Nova Venda \n");
        printf ("2. Listar Venda do Cliente \n");
        printf ("9. Sair \n");
        printf ("***************************\n");
        printf ("\nSelecione o número correspondente: ");
        scanf (" %d", &subMenu1);

        switch (subMenu1)
        {
            case 1:
                system ("cls");
                printf ("\n\nRealizar Nova Venda: \n");

                system ("pause");
                break;
            case 2:
                system ("cls");
                printf ("\n\nLista da Nova Venda do Cliente: \n");

                system ("pause");
                break;
            case 9:
                menu = 0;
                break;
            default:
                printf ("Comando Inválido! \n");
                break;
        }
    } while (subMenu1 != 9);
}