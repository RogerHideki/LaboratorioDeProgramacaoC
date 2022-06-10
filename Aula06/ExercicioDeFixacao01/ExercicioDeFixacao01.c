#include <stdio.h>
#include <windows.h>

const int tam = 4;

int main() {
    SetConsoleOutputCP(65001);

    FILE *fDados;
    int i, idade;
    char nome[50];
    float salario;

    fDados = fopen("../Aula06/ExercicioDeFixacao01/dados.txt", "a");
    if (fDados == NULL) {
        perror("Erro ao tentar abrir o arquivo\n");
        return (-1);
    }

    for (i = 0; i < tam; i++) {
        printf("Nome da pessoa %d: ", i + 1);
        scanf(" %[^\n]s", nome);
        printf("Idade da pessoa %d: ", i + 1);
        scanf(" %d", &idade);
        printf("Salário da pessoa %d: ", i + 1);
        scanf(" %f", &salario);

        fprintf(fDados, "%s\n", nome);
        fprintf(fDados, "%d\n", idade);
        fprintf(fDados, "%.2f\n", salario);
    }
    fclose(fDados);

    return 0;
}