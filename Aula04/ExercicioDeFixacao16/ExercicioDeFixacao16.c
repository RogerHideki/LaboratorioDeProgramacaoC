#include <stdio.h>
#include <memory.h>

int main()
{
    int i, j, contador;
    float matriz[4][5], vetor[5];

    memset(vetor, 0, sizeof(float) * 5);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("M[%d][%d] = ", i, j);
            scanf(" %f", &matriz[i][j]);

            vetor[j] += matriz[i][j];
        }
    }

    contador = 0;
    for (i = 0; i < 5; i++)
    {
        if (vetor[i] > 10)
        {
            printf(" %.2f\t", vetor[i]);
            contador++;
        }
    }

    if (contador == 0)
        printf("Vetor só tem valores menores ou iguais a 10\n");

    return 0;
}