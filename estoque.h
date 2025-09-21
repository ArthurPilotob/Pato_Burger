#ifndef ESTOQUE_H
#define ESTOQUE_H

#define ingredienteMAX 14

typedef struct{
	char nome[30];
	int quantidade;
	float precoCompra;
	int id;
} ingrediente;

void inicializarEstoque(ingrediente estoque[]);

#endif
