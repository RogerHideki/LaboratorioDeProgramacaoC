#include <stdio.h>
#include <windows.h>

const int tam = 4;

int main() {
    SetConsoleOutputCP(65001);

    FILE *fDados;
    int i;
    char str[50];

    fDados = fopen("dados.txt", "a");
    if (fDados == NULL) {
        perror("Erro ao tentar abrir o arquivo\n");
        return (-1);
    }

    for (i = 0; i < tam; i++) {
        printf("Nome da pessoa %d: ", i + 1);
        scanf(" %[^\n]s", str);
        fprintf(fDados, "%s | ", str);
        printf("Idade da pessoa %d: ", i + 1);
        scanf(" %[^\n]s", str);
        fprintf(fDados, "%s | ", str);
        printf("Salário da pessoa %d: ", i + 1);
        scanf(" %[^\n]s", str);
        fprintf(fDados, "%s\n", str);
    }

    fclose(fDados);

    return 0;
}