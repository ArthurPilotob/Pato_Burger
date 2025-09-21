#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "estoque.h"
#include "cardapio.h"
#include "fila.h"
#include "pilha.h"


void gerarPedidos(tp_fila *filaPedidos, int qtdPedidos);

int main() {
    srand(time(NULL));

    ingrediente estoque[ingredienteMAX];
    hamburguer cardapio[hamburguerMAX];
    tp_fila filaPedidos;

    inicializarEstoque(estoque);
    inicializarCardapio(cardapio, estoque);
    inicializaFila(&filaPedidos);

    printf("Seja bem vindo a Pato Burger, a hamburgueria mais otimizada do Brasil!\n");
    exibirCardapio(cardapio, estoque);

    int n_pedidos = (rand() % 8) + 4;
    gerarPedidos(&filaPedidos, n_pedidos);

    printf("\n--- PEDIDOS DO DIA ---\n");
    imprimeFila(filaPedidos);

    return 0;
}

void gerarPedidos(tp_fila *filaPedidos, int qtdPedidos) {
    for (int i = 0; i < qtdPedidos; i++) {
        int idHamburguer = (rand() % hamburguerMAX) + 1;
        insereFila(filaPedidos, idHamburguer);
    }
}
