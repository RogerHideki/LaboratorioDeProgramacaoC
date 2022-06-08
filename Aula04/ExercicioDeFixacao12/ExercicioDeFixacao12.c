#include <stdio.h>

const int tam = 10;

int main()
{
    int i, m;
    float V[tam];

    for (i = 0; i < tam; i++)
    {
        printf("V[%d] = ", i);
        scanf(" %f", &V[i]);
    }

    printf("\n| Inicio (i) | Tamanho (m) |\n");
    m = 1;
    for (i = 1; i <= tam; i++)
    {
        if (V[i - 1] < V[i] && i != tam)
            m++;
        else
        {
            printf("|     %d      |      %d      |\n", i - m, m);
            m = 1;
        }
    }

    return 0;
}