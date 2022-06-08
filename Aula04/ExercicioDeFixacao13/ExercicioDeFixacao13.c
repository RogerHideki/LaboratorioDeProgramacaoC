#include <stdio.h>

const int tam = 150;

int main()
{
    int dimensao, i, j;
    float A[tam][tam], B[tam][tam], C[tam][tam];

    printf("Digite a dimensão das matrizes: ");
    scanf(" %d", &dimensao);

    if (dimensao > 0 && dimensao <= 150)
    {
        for (i = 0; i < dimensao; i++)
        {
            for (j = 0; j < dimensao; j++)
            {
                printf("A[%d][%d] = ", i, j);
                scanf(" %f", &A[i][j]);
            }
        }

        for (i = 0; i < dimensao; i++)
        {
            for (j = 0; j < dimensao; j++)
            {
                printf("B[%d][%d] = ", i, j);
                scanf(" %f", &B[i][j]);
            }
        }

        for (i = 0; i < dimensao; i++)
        {
            for (j = 0; j < dimensao; j++)
            {
                C[i][j] = A[i][j] + B[i][j];
                printf(" %.2f\t", C[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Dimensão inválida.");

    return 0;
}