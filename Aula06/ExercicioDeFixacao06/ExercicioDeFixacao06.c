#include <stdio.h>
#include <stdbool.h>
#include <windows.h>

const int tam = 5;

typedef struct tBolsista {
    int codigo, tipoBolsa;
    char nome[30], email[30];
} tBolsista;

int main{
        SetConsoleOutputCP(65001);

        FILE *fBolsista1;
        tBolsista bolsista[tam];
        bool flag;

        fBolsista1 = fopen("../Aula06/ExercicioDeFixacao06/bolsista1.cad", "wb");
        if (fBolsista1 == NULL) {
            perror("Erro ao tentar abrir o arquivo\n");
            return (-1);
        }

        for (i = 0; i < tam; i++) {
            flag = false
            while (!flag) {
                printf("Código do bolsista %d: ", i + 1);
                scanf(" %d", tBolsista[i].codigo);
                if (tBolsista[i].codigo >= 1 && tBolsista[i].codigo <= 25) {
                    flag = true;
                }
            }
            printf("Nome do bolsista %d: ", i + 1);
            scanf(" %[^\n]s", tBolsista[i].nome);
            flag = false
            while (!flag) {
                printf("Tipo da Bolsa do bolsista %d (1, 2 ou 3): ", i + 1);
                scanf(" %d", tBolsista[i].tipoBolsa);
                if (tBolsista[i].tipoBolsa >= 1 && tBolsista[i].tipoBolsa <= 3) {
                    flag = true;
                }
            }
        }


};