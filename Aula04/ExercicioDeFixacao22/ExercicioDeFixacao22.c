#include <stdio.h>

const int tam = 5;

int main()
{
    int i, j, linhas, k;
    float M[tam][tam];

    linhas = 0;
    for (i = 0; i < tam; i++)
        for (j = 0; j < tam; j++)
        {
            printf("M[%d][%d] = ", i, j);
            scanf(" %f", &M[i][j]);

            if (M[i][j] != 0)
                linhas++;
        }

    float condensada[linhas][3];

    k = 0;
    for (i = 0; i < tam; i++)
        for (j = 0; j < tam; j++)
            if (M[i][j] != 0)
            {
                condensada[k][0] = M[i][j];
                condensada[k][1] = i;
                condensada[k][2] = j;
                k++;
            }

    printf("\nValor, linha e coluna:\n");
    for (i = 0; i < linhas; i++)
        printf(" %.2f \t %.f \t %.f\n", condensada[i][0], condensada[i][1], condensada[i][2]);   

    return 0;
}