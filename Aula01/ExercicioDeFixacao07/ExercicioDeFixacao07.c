#include <stdio.h>

int main(){
    float precoDeFabrica, percentualDeLucro, percentualDeImpostos, lucro, impostos;

    printf("Digite o preço de fábrica de um veículo: ");
    scanf(" %f", &precoDeFabrica);
    printf("Digite o percentual de lucro da concessionária: ");
    scanf(" %f", &percentualDeLucro);
    printf("Digite o percentual de impostos: ");
    scanf(" %f", &percentualDeImpostos);

    lucro = precoDeFabrica * percentualDeLucro / 100;
    impostos = (precoDeFabrica + lucro) * percentualDeImpostos / 100;

    printf("\nLucro da concessionária: %.2f \n", lucro);
    printf("Impostos: %.2f \n", impostos);
    printf("Preço final do veículo para o consumidor: %.2f \n", precoDeFabrica + lucro + impostos);

    return 0;
}