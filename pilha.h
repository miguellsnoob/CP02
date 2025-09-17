#ifndef PILHA_H
#define PILHA_H

#define MAX_PILHA 100
typedef struct {
    int itens[MAX_PILHA];
    int topo;
} Pilha;

void inicializarPilha(Pilha* p);
int pilhaVazia(Pilha* p);
int pilhaCheia(Pilha* p);
int push(Pilha* p, int valor);
int pop(Pilha* p, int *valor);
void mostrarPilha(Pilha* p);

#endif
