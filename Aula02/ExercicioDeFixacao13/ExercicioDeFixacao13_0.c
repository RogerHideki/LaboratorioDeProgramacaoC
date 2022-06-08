#include <stdio.h>
#include <math.h>

int main(){
    float x, y;

    printf("Digite o ângulo x em graus: ");
    scanf(" %f", &x);

    y = 2.5 * cos(fabsf(M_PI * x / 360));

    printf("\nx: %.2f \n", x);
    printf("y: %.2f \n", y);

    return 0;
}