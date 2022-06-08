#include <stdio.h>

int main(){
    int i;
    float n, soma;

    i = 1;
    soma = 0;
    while (i <= 5)
    {
        printf("Digite um número: ");
        scanf(" %f", &n);
        soma += n;
        i++;
    }

    printf("\nSoma: %.2f \n", soma);

    return 0;
}