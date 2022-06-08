#include <stdio.h>
#include <string.h>
#include <windows.h>

typedef struct tFicha
{
    char nome[100];
    int rga, nDisciplinas, semestreEmCurso, nReprovacoes;
    float cre;
} tFicha;

typedef struct tTabela
{
    int semestre, horas;
    char disciplina[100];
    float nota;
} tTabela;

int main()
{
    SetConsoleOutputCP(65001);

    tTabela tabela[100];
    int nAlunos, i, j, denominador, ultimo;
    float numerador;
    char melhorAluno[100];

    printf("Número de alunos: ");
    scanf(" %d", &nAlunos);
    tFicha ficha[nAlunos];
    for (i = 0; i < nAlunos; i++)
    {
        printf("Nome do aluno %d: ", i + 1);
        scanf(" %[^\n]s", ficha[i].nome);
        if (i == 0)
        {
            strcpy(melhorAluno, ficha[i].nome);
        }
        printf("RGA do aluno %d: ", i + 1);
        scanf(" %d", &ficha[i].rga);
        printf("Número de disciplinas do aluno %d: ", i + 1);
        scanf(" %d", &ficha[i].nDisciplinas);
        ficha[i].semestreEmCurso = 2;
        ficha[i].nReprovacoes = 0;
        numerador = 0;
        denominador = 0;
        for (j = 0; j < ficha[i].nDisciplinas; j++)
        {
            printf("Semestre da disciplina %d: ", j + 1);
            scanf(" %d", &tabela[j].semestre);
            if (j > 0 && tabela[j].semestre > tabela[j - 1].semestre)
            {
                ficha[i].semestreEmCurso = tabela[j].semestre + 1;
            }
            printf("Disciplina %d: ", j + 1);
            scanf(" %[^\n]s", tabela[j].disciplina);
            printf("Nota da disciplina %d: ", j + 1);
            scanf(" %f", &tabela[j].nota);
            if (tabela[j].nota < 5)
            {
                ficha[i].nReprovacoes++;
            }
            printf("Carga horária da disciplina %d: ", j + 1);
            scanf(" %d", &tabela[j].horas);
            numerador += (tabela[j].nota * tabela[j].horas);
            denominador += tabela[j].horas;
        }
        ficha[i].cre = numerador / denominador;
        if (i > 0 && ficha[i].cre > ficha[i - 1].cre && ficha[i].nReprovacoes <= ficha[i - 1].nReprovacoes)
        {
            strcpy(melhorAluno, ficha[i].nome);
        }
    }

    for (i = 0; i < nAlunos; i++)
    {
        printf("\nCRE do aluno %d: %.1f\n", i + 1, ficha[i].cre);
        printf("Semestre que o aluno %d está cursando: %d\n", i + 1, ficha[i].semestreEmCurso);
        printf("Quantidade de reprovações do aluno %d: %d\n", i + 1, ficha[i].nReprovacoes);
        if (ficha[i].nReprovacoes > 0)
        {
            printf("Disciplinas que o aluno %d reprovou no último semestre:\n", i + 1);
            ultimo = 0;
            for (j = 0; j < ficha[i].nDisciplinas; j++)
            {
                if (tabela[j].semestre == ficha[i].semestreEmCurso - 1 && tabela[j].nota < 5)
                {
                    printf(" %s\n", tabela[j].disciplina);
                    ultimo++;
                }
            }
            if (ultimo == 0)
            {
                printf("Nenhuma\n");
            }
        }
    }
    printf("\nAluno com melhor CRE e menor quantidade de reprovações: %s\n", melhorAluno);

    return 0;
}