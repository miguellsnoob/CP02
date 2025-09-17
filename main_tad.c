#include <stdio.h>
#include "tad_aluno.h"

int main() {
    Aluno alunos[MAX_ALUNOS];
    int n;
    inicializarAlunos(alunos, &n);

    Aluno a1 = {1, "Joao", 8.5f};
    Aluno a2 = {2, "Maria", 9.2f};

    inserirAluno(alunos, &n, a1);
    inserirAluno(alunos, &n, a2);
    mostrarAlunos(alunos, n);

    int pos = buscarAluno(alunos, n, 2);
    if (pos != -1) printf("Encontrado: %s\n", alunos[pos].nome);

    removerAluno(alunos, &n, 1);
    mostrarAlunos(alunos, n);

    return 0;
}
