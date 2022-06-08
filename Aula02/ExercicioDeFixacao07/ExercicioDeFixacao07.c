#include <stdio.h>

int main(){
    float X, Y, Z;
    
    printf("Digite um valor inteiro positivo para o primeiro comprimento: ");
    scanf(" %f", &X);
    printf("Digite um valor inteiro positivo para o segundo comprimento: ");
    scanf(" %f", &Y);
    printf("Digite um valor inteiro positivo para o terceiro comprimento: ");
    scanf(" %f", &Z);

    if (X < Y + Z && Y < X + Z && Z < X + Y)
    {
        if (X == Y && Y == Z)
            printf("\nO triângulo de lados %.2f, %.2f e %.2f é equilátero\n", X, Y, Z);
        else if (X == Y || X == Z || Y == Z)
            printf("\nO triângulo de lados %.2f, %.2f e %.2f é isósceles\n", X, Y, Z);
        else
            printf("\nO triângulo de lados %.2f, %.2f e %.2f é escaleno\n", X, Y, Z);
    }
    else
        printf("\nOs valores digitados não representam os lados de um triângulo.\n");

    return 0;
}