#include <stdio.h>
#include "fila.h"

void inicializarFila(Fila* f) { f->inicio = 0; f->fim = -1; f->qtd = 0; }
int filaVazia(Fila* f) { return f->qtd == 0; }
int filaCheia(Fila* f) { return f->qtd == MAX_FILA; }

int enfileirar(Fila* f, int valor) {
    if (filaCheia(f)) return 0;
    f->fim = (f->fim + 1) % MAX_FILA;
    f->itens[f->fim] = valor;
    f->qtd++;
    return 1;
}

int desenfileirar(Fila* f, int *valor) {
    if (filaVazia(f)) return 0;
    *valor = f->itens[f->inicio];
    f->inicio = (f->inicio + 1) % MAX_FILA;
    f->qtd--;
    return 1;
}

void mostrarFila(Fila* f) {
    printf("Fila (frente->fim): ");
    int i = f->inicio;
    for (int c = 0; c < f->qtd; c++) {
        printf("%d ", f->itens[i]);
        i = (i + 1) % MAX_FILA;
    }
    printf("\n");
}
