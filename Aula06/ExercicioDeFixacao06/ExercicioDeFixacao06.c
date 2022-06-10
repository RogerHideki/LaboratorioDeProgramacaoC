#include <stdio.h>
#include <stdbool.h>
#include <windows.h>

const int tam = 5;

typedef struct tBolsista {
    int codigo, tipoBolsa;
    char nome[30], email[30];
} tBolsista;

int main() {
    SetConsoleOutputCP(65001);

    FILE *fBolsista1;
    tBolsista bolsista[tam], novoBolsista;
    int i;
    bool flag;

    /*fBolsista1 = fopen("../Aula06/ExercicioDeFixacao06/bolsista1.cad", "wb");
    if (fBolsista1 == NULL) {
        perror("Erro ao tentar abrir o arquivo\n");
        return (-1);
    }

    for (i = 0; i < tam; i++) {
        flag = false;
        while (!flag) {
            printf("Código do bolsista %d: ", i + 1);
            scanf(" %d", &bolsista[i].codigo);
            if (bolsista[i].codigo >= 1 && bolsista[i].codigo <= 25) {
                flag = true;
            }
        }
        printf("Nome do bolsista %d: ", i + 1);
        scanf(" %[^\n]s", bolsista[i].nome);
        flag = false;
        while (!flag) {
            printf("Tipo de Bolsa do bolsista %d: ", i + 1);
            scanf(" %d", &bolsista[i].tipoBolsa);
            if (bolsista[i].tipoBolsa >= 1 && bolsista[i].tipoBolsa <= 3) {
                flag = true;
            }
        }
        printf("E-mail do bolsista %d: ", i + 1);
        scanf(" %[^\n]s", bolsista[i].email);
    }

    fwrite(bolsista, sizeof(tBolsista), 5, fBolsista1);
    fclose(fBolsista1);

    fBolsista1 = fopen("../Aula06/ExercicioDeFixacao06/bolsista1.cad", "rb");
    if (fBolsista1 == NULL) {
        perror("Erro ao tentar abrir o arquivo\n");
        return (-1);
    }

    fread(bolsista, sizeof(tBolsista), 5, fBolsista1);
    for (i = 0; i < tam; i++) {
        printf("%d - %s - %d - %s\n", bolsista[i].codigo, bolsista[i].nome, bolsista[i].tipoBolsa, bolsista[i].email);
    }
    fclose(fBolsista1);*/

    fBolsista1 = fopen("../Aula06/ExercicioDeFixacao06/bolsista1.cad", "wb+");
    if (fBolsista1 == NULL) {
        perror("Erro ao tentar abrir o arquivo\n");
        return (-1);
    }

    fseek(fBolsista1, sizeof(tBolsista)*2, SEEK_SET);
    fread(&novoBolsista, sizeof(tBolsista), 1, fBolsista1);
    printf("Novo nome: ");
    scanf(" %[^\n]s", novoBolsista.nome);
    fseek(fBolsista1, sizeof(tBolsista)*2, SEEK_SET);
    fwrite(&novoBolsista, sizeof(tBolsista), 1, fBolsista1);
    fclose(fBolsista1);

    return 0;
}