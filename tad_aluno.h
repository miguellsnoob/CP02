#ifndef TAD_ALUNO_H
#define TAD_ALUNO_H

#define MAX_ALUNOS 100

typedef struct {
    int id;
    char nome[50];
    float nota;
} Aluno;

void inicializarAlunos(Aluno alunos[], int *n);
int inserirAluno(Aluno alunos[], int *n, Aluno novo);
int buscarAluno(Aluno alunos[], int n, int id);
int removerAluno(Aluno alunos[], int *n, int id);
void mostrarAlunos(Aluno alunos[], int n);

#endif
