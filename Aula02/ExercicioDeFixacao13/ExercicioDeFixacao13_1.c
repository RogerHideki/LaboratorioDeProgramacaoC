#include <stdio.h>
#include <math.h>

int main(){
    float raio;

    printf("Digite o raio em metros: ");
    scanf(" %f", &raio);

    printf("\nVolume da esfera: %.2f m³ \n", 4.0 / 3 * M_PI * pow(raio, 3));

    return 0;
}