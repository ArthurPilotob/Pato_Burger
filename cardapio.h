#ifndef CARDAPIO_H
#define CARDAPIO_H

#include "estoque.h"
#include "pilha.h"

#define hamburguerMAX 10


typedef struct {
    tp_pilha burger;
    char nome[30];
    float preco;
    int id;
    int receita[16];
    int numItens;
} hamburguer;


void inicializarCardapio(hamburguer cardapio[], ingrediente estoque[]);
void exibirCardapio(hamburguer cardapio[], ingrediente estoque[]);

#endif
