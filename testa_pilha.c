#include <stdio.h>
#include "pilha.h"

int main() {
    Pilha p;
    inicializarPilha(&p);
    push(&p, 10); push(&p, 20); push(&p, 30);
    mostrarPilha(&p);
    int v;
    if (pop(&p, &v)) printf("Pop: %d\n", v);
    mostrarPilha(&p);
    return 0;
}
