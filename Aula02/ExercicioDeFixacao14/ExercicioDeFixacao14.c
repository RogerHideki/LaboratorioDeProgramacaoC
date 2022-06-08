#include <stdio.h>
#include <string.h>

int main(){
    char palavra1[50], palavra2[50];

    printf("Digite duas palavras:\n");
    scanf(" %s %s", palavra1, palavra2);

    if (strcmp(palavra1, palavra2) <= 0)
        printf("\n%s %s \n", palavra1, palavra2);
    else
        printf("\n%s %s \n", palavra2, palavra1);

    return 0;
}