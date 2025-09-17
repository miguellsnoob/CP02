#ifndef FILA_H
#define FILA_H

#define MAX_FILA 100
typedef struct {
    int itens[MAX_FILA];
    int inicio, fim, qtd;
} Fila;

void inicializarFila(Fila* f);
int filaVazia(Fila* f);
int filaCheia(Fila* f);
int enfileirar(Fila* f, int valor);
int desenfileirar(Fila* f, int *valor);
void mostrarFila(Fila* f);

#endif
