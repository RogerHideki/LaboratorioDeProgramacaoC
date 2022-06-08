#include <stdio.h>

const int tam = 5;

int main(){
    int i;
    float vetor1[tam], vetor2[tam], produto;

    for (i = 0; i < tam; i++){
        printf("Digite o valor da posição %d do vetor 1: ", i + 1);
        scanf(" %f", &vetor1[i]);
    }

    produto = 0.0;
    for (i = 0; i < tam; i++){
        printf("Digite o valor da posição %d do vetor 2: ", i + 1);
        scanf(" %f", &vetor2[i]);
        produto += vetor1[i] * vetor2[i];
    }

    printf("\nProduto escalar: %.2f\n", produto);

    return 0;
}