#include <stdio.h>
#include <math.h>

const int tam = 10;

int main(){
    int i;
    float vetor[tam], soma, media, somatorio;

    soma = 0.0;
    for (i = 0; i < tam; i++){
        printf("Digite o valor da posição %d do vetor: ", i + 1);
        scanf(" %f", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / tam;

    for (i = 0; i < tam; i++){
        somatorio += pow(vetor[i] - media, 2);
    }

    printf("\nMédia: %.2f\n", media);
    printf("Desvio padrão: %.2f\n", sqrt(somatorio / tam));

    return 0;
}