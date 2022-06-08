#include <stdio.h>
#include <math.h>

int main(){
    float R1, R2, R3;
    char associacao;

    printf("Digite valores positivos correspondentes a três resistores elétricos em ohms:\n");
    scanf(" %f %f %f", &R1, &R2, &R3);
    
    if (R1 > 0 && R2 > 0 && R3 > 0)
    {
        printf("Digite 's' para associação em série ou 'p' para associação em paralelo: ");
        scanf(" %c", &associacao);

        if (associacao == 's')
            printf("Resistência equivalente: %.2f ohms", R1 + R2 + R3);
        else
            printf("Resistência equivalente: %.2f ohms", pow((1.0 / R1 + 1.0 / R2 + 1.0 / R3), -1));
    }
    else
        printf("\nErro: os valores digitados deveriam ser valores positivos.\n");
    
    return 0;
}