#include <stdio.h>
#include "fila.h"

int main() {
    Fila f;
    inicializarFila(&f);
    enfileirar(&f,1); enfileirar(&f,2); enfileirar(&f,3);
    mostrarFila(&f);
    int v;
    if (desenfileirar(&f, &v)) printf("Desenfileirou: %d\n", v);
    mostrarFila(&f);
    return 0;
}
