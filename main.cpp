#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "PILHA_H"
#include "FILA_H"

//retirar receita das funções e implementar a fila
//seprarar e modularizar os ingredientes/hamburgueres

typedef struct {
    char nome[30];
    int quantidade;
    float precoCompra;
    int id;
} ingrediente;

typedef struct {
    tp_pilha burger;
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
    strcpy(cardapio[0].nome, "Bit and Bacon");
    cardapio[0].preco = 22.00;
    cardapio[0].itens = 
    cardapio[0].receita = {
    cardapio[0].id = 01;
    cardapio[0].numItens = 5  
    
    strcpy(cardapio[1].nome, "DuckCheese");
    cardapio[1].preco = 22.00;
    cardapio[1].itens = 
    cardapio[1].receita = {
    cardapio[1].id = 02;
    cardapio[1].numItens =  5
    
    strcpy(cardapio[2].nome, "Quackteirão");
    cardapio[2].preco = 25.00;
    cardapio[2].itens = 
    cardapio[2].receita = {
    cardapio[2].id = 03;
    cardapio[2].numItens =  6
    
    strcpy(cardapio[3].nome, "Big Pato");
    cardapio[3].preco = 30.00;
    cardapio[3].itens = 
    cardapio[3].receita = {
    cardapio[3].id = 04;
    cardapio[3].numItens =  9
    
    strcpy(cardapio[4].nome, "Donald");
    cardapio[4].preco = 32.00;
    cardapio[4].itens = 
    cardapio[4].receita = {
    cardapio[4].id = 05;
    cardapio[4].numItens =  9
    
    strcpy(cardapio[5].nome, "Patolino");
    cardapio[5].preco = 32.00;
    cardapio[5].itens = 
    cardapio[5].receita = {
    cardapio[5].id = 06;
    cardapio[5].numItens =  7
    
    strcpy(cardapio[6].nome, "Duckling");
    cardapio[6].preco = 20.00;
    cardapio[6].itens = 
    cardapio[6].receita = {
    cardapio[6].id = 07;
    cardapio[6].numItens =  5
    
    strcpy(cardapio[7].nome, "PatOnion");
    cardapio[7].preco = 37.00;
    cardapio[7].itens = 
    cardapio[7].receita = {
    cardapio[7].id = 08;
    cardapio[7].numItens =  8
    
    strcpy(cardapio[8].nome, "TioPatinhas");
    cardapio[8].preco = 40.00;
    cardapio[8].itens = 
    cardapio[8].receita = {
    cardapio[8].id = 09;
    cardapio[8].numItens =  
    
    strcpy(cardapio[9].nome, "DuX-Tudo");
    cardapio[9].preco = 46.00;
    cardapio[9].itens = 
    cardapio[9].receita = {
    cardapio[9].id = 10;
    cardapio[9].numItens =  18
    
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

hamburguer big_pato;

push(&big_pato.burger, receita[i
