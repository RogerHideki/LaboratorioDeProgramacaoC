#include <stdio.h>

int main(){
    float massa;
    int tempo;

    printf("Digite, em gramas, a massa inicial: ");
    scanf(" %f", &massa);

    printf("\nMassa inicial: %.2f g \n", massa);

    tempo = 0;
    while (massa >= 0.5)
    {
        massa /= 2;
        tempo += 50;
    }

    printf("Massa final: %.2f g\n", massa);
    printf("Tempo necessário para atingir a massa menor que 0.5 gramas: %d minutos e %d segundos\n", tempo / 60, tempo % 60);

    return 0;
}