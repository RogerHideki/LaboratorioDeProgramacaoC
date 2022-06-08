#include <stdio.h>

int main(){
    int n1, n2;
    char caractere;

    printf("Digite dois valores inteiros:\n");
    scanf(" %d %d", &n1, &n2);
    printf("\nDigite um caractere:\n");
    scanf(" %c", &caractere);

    switch(caractere){
        case '+':
        case 's':
            printf("\n%d \n", n1 + n2);
            break;
        case '-':
            printf("\n%d \n", n1 - n2);
            break;
        case '2':
        case '3':
            printf("\n%.2f \n", (float)(n1 + n2) / 2);
            break;
        default:
            printf("\n%d Nenhum cálculo realizado\n", n2);
    }

    return 0;
}