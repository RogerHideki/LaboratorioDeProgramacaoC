#include <stdio.h>
#include <windows.h>

typedef struct TAtleta {
    int Codigo, QuantVoltas, quantVoltasAbaixoDaMedia;
    char Nome[50];
    float *Tempos, TempoTotal, media;
} TAtleta;

int main() {
    SetConsoleOutputCP(65001);

    TAtleta *atletas;
    int N, i, j, k, maiorQuantVoltas;
    float menorTempoTotal, mediaVencedor;

    printf("Quantidade de Atletas: ");
    scanf(" %d", &N);

    atletas = (TAtleta *) malloc(sizeof(TAtleta) * N);
    if (atletas != NULL) {
        for (i = 0; i < N; i++) {
            printf("Código do atletas %d: ", i + 1);
            scanf(" %d", &atletas[i].Codigo);
            printf("Nome do atletas %d: ", i + 1);
            scanf(" %[^\n]s", atletas[i].Nome);
            printf("Quantidade de voltas dadas pelo atletas %d: ", i + 1);
            scanf(" %d", &atletas[i].QuantVoltas);

            atletas[i].Tempos = (float *) malloc(sizeof(float) * atletas[i].QuantVoltas);
            if (atletas[i].Tempos != NULL) {
                atletas[i].TempoTotal = 0;
                for (j = 0; j < atletas[i].QuantVoltas; j++) {
                    printf("Tempo do atletas %d na volta %d: ", i + 1, j + 1);
                    scanf(" %f", &atletas[i].Tempos[j]);
                    atletas[i].TempoTotal += atletas[i].Tempos[j];
                }
                atletas[i].media = atletas[i].TempoTotal / atletas[i].QuantVoltas;
                if (i == 0 || atletas[i].QuantVoltas > maiorQuantVoltas ||
                    (atletas[i].QuantVoltas == maiorQuantVoltas && atletas[i].TempoTotal < menorTempoTotal)) {
                    maiorQuantVoltas = atletas[i].QuantVoltas;
                    menorTempoTotal = atletas[i].TempoTotal;
                    mediaVencedor = atletas[i].media;
                }
                if (i == N - 1) {
                    for (k = 0; k < N; k++) {
                        atletas[k].quantVoltasAbaixoDaMedia = 0;
                        for (j = 0; j < atletas[k].QuantVoltas; j++) {
                            if (atletas[k].Tempos[j] < mediaVencedor) {
                                atletas[k].quantVoltasAbaixoDaMedia++;
                            }
                        }
                        free(atletas[k].Tempos);
                    }
                }
            } else {
                printf("\nNão foi possível alocar a memória\n");
            }
        }
    } else {
        printf("\nNão foi possível alocar a memória\n");
    }

    for (i = 0; i < N; i++) {
        printf("\n###############################\n");
        printf("%s", atletas[i].Nome);
        if (atletas[i].QuantVoltas == maiorQuantVoltas && atletas[i].TempoTotal == menorTempoTotal) {
            printf(" (vencedor)");
        }
        printf("\nTempo Total: %.2f\n", atletas[i].TempoTotal);
        printf("Média: %.2f\n", atletas[i].media);
        printf("Voltas abaixo da média: %d\n", atletas[i].quantVoltasAbaixoDaMedia);
        printf("###############################\n");
    }
    free(atletas);

    return 0;
}