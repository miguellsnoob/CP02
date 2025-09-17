#include <stdio.h>
#include <string.h>
#include "tad_aluno.h"

void inicializarAlunos(Aluno alunos[], int *n) { *n = 0; }

int inserirAluno(Aluno alunos[], int *n, Aluno novo) {
    if (*n >= MAX_ALUNOS) return 0;
    alunos[*n] = novo;
    (*n)++;
    return 1;
}

int buscarAluno(Aluno alunos[], int n, int id) {
    for (int i = 0; i < n; i++)
        if (alunos[i].id == id) return i;
    return -1;
}

int removerAluno(Aluno alunos[], int *n, int id) {
    int pos = buscarAluno(alunos, *n, id);
    if (pos == -1) return 0;
    for (int i = pos; i < (*n) - 1; i++) alunos[i] = alunos[i + 1];
    (*n)--;
    return 1;
}

void mostrarAlunos(Aluno alunos[], int n) {
    printf("Total de alunos: %d\n", n);
    for (int i = 0; i < n; i++) {
        printf("ID: %d | Nome: %s | Nota: %.2f\n", alunos[i].id, alunos[i].nome, alunos[i].nota);
    }
}
