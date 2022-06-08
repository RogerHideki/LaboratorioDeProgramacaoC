#include <stdio.h>

int main(){
    float base1, base2, altura;

    printf("Digite o tamanho de uma das bases do trapézio em metros: ");
    scanf(" %f", &base1);
    printf("Digite o tamanho da outra base do trapézio em metros: ");
    scanf("%f", &base2);
    printf("Digite a altura do trapézio em metros: ");
    scanf("%f", &altura);

    printf("\nÁrea do trapézio: %.2f m\n", (base1 + base2) * altura / 2);;

    return 0;
}