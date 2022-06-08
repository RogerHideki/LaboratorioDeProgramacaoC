#include <stdio.h>

const int tam = 20;

int main(){
    int i, quantidade;
    float notas[tam], soma, media;

    soma = 0.0;
    for (i = 0; i < tam; i++){
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf(" %f", &notas[i]);
        soma += notas[i];
    }

    media = soma / tam;

    quantidade = 0;
    for (i = 0; i < tam; i++){
        if (notas[i] > media)
            quantidade++;
    }

    printf("\nMédia: %.2f\n", media);
    printf("Quantidade de alunos acima da média: %d\n", quantidade);

    return 0;
}