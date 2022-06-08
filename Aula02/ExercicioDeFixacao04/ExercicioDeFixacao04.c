#include <stdio.h>

int main(){
    float n1, n2, n3;

    printf("Digite um número: ");
    scanf(" %f", &n1);
    printf("Digite um número: ");
    scanf(" %f", &n2);
    printf("Digite um número: ");
    scanf(" %f", &n3);

    if (n1 >= n2 && n1 >= n3)
        printf("\nMaior número: %.0f \n", n1);
    else if (n2 >= n1 && n2 >= n3)
        printf("\nMaior número: %.0f \n", n2);
    else
        printf("\nMaior número: %.0f \n", n3);

    return 0;
}