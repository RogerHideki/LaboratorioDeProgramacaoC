#include <stdio.h>

int main(){
    float lado;

    printf("Digite o tamanho do lado de um quadrado em metros: ");
    scanf(" %f", &lado);

    printf("\nÁrea do quadrado: %.2f m\n", lado * lado);
    printf("Perímetro do quadrado: %.2f m\n", lado * 4);

    return 0;
}