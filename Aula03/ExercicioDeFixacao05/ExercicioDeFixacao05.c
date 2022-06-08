#include <stdio.h>
#include <math.h>

int main(){
    float x1, y1, x2, y2;

    printf("Digite as cordenadas do primeiro ponto:\n");
    scanf(" %f %f", &x1, &y1);
    printf("Digite as cordenadas do segundo ponto:\n");
    scanf(" %f %f", &x2, &y2);

    while (x1 != 0 || y1 != 0 || x2 != 0 || y2 != 0)
    {
        printf("\nDistância: %f \n", sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)));
        printf("\nDigite as cordenadas do primeiro ponto:\n");
        scanf(" %f %f", &x1, &y1);
        printf("Digite as cordenadas do segundo ponto:\n");
        scanf(" %f %f", &x2, &y2);
    }

    return 0;
}