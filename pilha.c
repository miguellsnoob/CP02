#include <stdio.h>
#include "pilha.h"

void inicializarPilha(Pilha* p) { p->topo = -1; }
int pilhaVazia(Pilha* p) { return p->topo == -1; }
int pilhaCheia(Pilha* p) { return p->topo == MAX_PILHA - 1; }

int push(Pilha* p, int valor) {
    if (pilhaCheia(p)) return 0;
    p->itens[++(p->topo)] = valor;
    return 1;
}

int pop(Pilha* p, int *valor) {
    if (pilhaVazia(p)) return 0;
    *valor = p->itens[(p->topo)--];
    return 1;
}

void mostrarPilha(Pilha* p) {
    printf("Pilha (topo->base): ");
    for (int i = p->topo; i >= 0; i--) printf("%d ", p->itens[i]);
    printf("\n");
}
