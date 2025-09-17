CC = gcc
CFLAGS = -Wall -Wextra -std=c99

all: tad_test pilha_test fila_test

tad_test: tad/tad_aluno.c tad/main_tad.c
	$(CC) $(CFLAGS) -o tad/tad_test tad/tad_aluno.c tad/main_tad.c

pilha_test: estruturas/pilha.c estruturas/testa_pilha.c
	$(CC) $(CFLAGS) -o estruturas/pilha_test estruturas/pilha.c estruturas/testa_pilha.c

fila_test: estruturas/fila.c estruturas/testa_fila.c
	$(CC) $(CFLAGS) -o estruturas/fila_test estruturas/fila.c estruturas/testa_fila.c

clean:
	rm -f tad/tad_test estruturas/pilha_test estruturas/fila_test *.o
