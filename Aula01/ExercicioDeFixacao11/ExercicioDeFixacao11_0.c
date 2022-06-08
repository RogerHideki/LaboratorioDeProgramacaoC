#include <stdio.h>

int main(){
    const float pi = 3.14;
    float raio;

    printf("Digite o valor do raio em metros: ");
    scanf(" %f", &raio);

    printf("\nComprimento da circunferência: %.2f m\n", 2 * pi * raio);
    printf("Área do círculo: %.2f m²\n", pi * raio * raio);
    printf("Volume da esfera: %.2f m³\n", 4.0 / 3 * pi * raio * raio * raio);

    return 0;
}