#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "PILHA_H"
#include "FILA_H"

typedef struct {
    char nome[30];
    int quantidade;
    float precoCompra;
} ingrediente;

typedef struct {
    ingrediente itens;
    char nome[30];
    float preco;
    int id;
    int receita[16];
    int numItens;
} hamburguer;

void exibirCardapio();

int main()
{
    printf("Hello World");

    return 0;
}

void inicializarEstoque(ingrediente estoque[]) {
    strcpy(estoque[0].nome, "Pao");                 estoque[0].quantidade = 60; estoque[0].precoCompra = 1.00;
    strcpy(estoque[1].nome, "Carne");               estoque[1].quantidade = 50; estoque[1].precoCompra = 5.50;
    strcpy(estoque[2].nome, "Bacon");               estoque[2].quantidade = 30; estoque[2].precoCompra = 4.00;
    strcpy(estoque[3].nome, "Queijo");              estoque[3].quantidade = 50; estoque[3].precoCompra = 2.00;
    strcpy(estoque[4].nome, "Alface");              estoque[4].quantidade = 25; estoque[4].precoCompra = 1.50;
    strcpy(estoque[5].nome, "Tomate");              estoque[5].quantidade = 25; estoque[5].precoCompra = 1.50;
    strcpy(estoque[6].nome, "Onion Rings");         estoque[6].quantidade = 20; estoque[6].precoCompra = 3.00;
    strcpy(estoque[7].nome, "Cebola Caramelizada"); estoque[7].quantidade = 20; estoque[7].precoCompra = 3.00;
    strcpy(estoque[8].nome, "Picles");              estoque[8].quantidade = 20; estoque[8].precoCompra = 2.00;
    strcpy(estoque[9].nome, "Ketchup");             estoque[9].quantidade = 50; estoque[9].precoCompra = 1.00;
    strcpy(estoque[10].nome, "Maionese Verde");     estoque[10].quantidade = 40; estoque[10].precoCompra = 1.80;
    strcpy(estoque[11].nome, "Geleia de Pimenta");  estoque[11].quantidade = 40; estoque[11].precoCompra = 3.00;
    strcpy(estoque[12].nome, "Molho Cheddar");      estoque[12].quantidade = 25; estoque[12].precoCompra = 4.00;
    strcpy(estoque[13].nome, "Frango");             estoque[13].quantidade = 25; estoque[13].precoCompra = 3.50;
    
}

void inicializarCardapio (hamburguer cardapio[], ingrediente estoque[]){
    ////fazer
}

void exibirCardapio(hamburguer cardapio[], ingrediente estoque[]) {
    printf("\n ---- CARDAPIO PATO BURGER ----\n");
    for (int i = 0; i < 10; i++) {
        printf("\nNumero: %d - %s\n", cardapio[i].id, cardapio[i].nome);
        printf("Preco: %.2f\n", cardapio[i].preco);
        printf("Ordem de preparo:\n");
        for (int j = 0; j < cardapio[i].numItens; j++) {
            printf("-> %s\n", estoque[cardapio[i].receita[j]].nome);
        }
    }
}
