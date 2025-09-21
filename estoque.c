#include <string.h>
#include "estoque.h"

void inicializarEstoque(ingrediente estoque[]) {
    strcpy(estoque[0].nome, "Pao");              estoque[0].quantidade = 60; estoque[0].precoCompra = 1.00; estoque[0].id = 0;
    strcpy(estoque[1].nome, "Carne");             estoque[1].quantidade = 50; estoque[1].precoCompra = 5.50; estoque[1].id = 1;
    strcpy(estoque[2].nome, "Bacon");             estoque[2].quantidade = 30; estoque[2].precoCompra = 4.00; estoque[2].id = 2;
    strcpy(estoque[3].nome, "Queijo");            estoque[3].quantidade = 50; estoque[3].precoCompra = 2.00; estoque[3].id = 3;
    strcpy(estoque[4].nome, "Alface");            estoque[4].quantidade = 25; estoque[4].precoCompra = 1.50; estoque[4].id = 4;
    strcpy(estoque[5].nome, "Tomate");            estoque[5].quantidade = 25; estoque[5].precoCompra = 1.50; estoque[5].id = 5;
    strcpy(estoque[6].nome, "Onion Rings");       estoque[6].quantidade = 20; estoque[6].precoCompra = 3.00; estoque[6].id = 6;
    strcpy(estoque[7].nome, "Cebola Caramelizada"); estoque[7].quantidade = 20; estoque[7].precoCompra = 3.00; estoque[7].id = 7;
    strcpy(estoque[8].nome, "Picles");            estoque[8].quantidade = 20; estoque[8].precoCompra = 2.00; estoque[8].id = 8;
    strcpy(estoque[9].nome, "Ketchup");           estoque[9].quantidade = 50; estoque[9].precoCompra = 1.00; estoque[9].id = 9;
    strcpy(estoque[10].nome, "Maionese Verde");   estoque[10].quantidade = 40; estoque[10].precoCompra = 1.80; estoque[10].id = 10;
    strcpy(estoque[11].nome, "Geleia de Pimenta"); estoque[11].quantidade = 40; estoque[11].precoCompra = 3.00; estoque[11].id = 11;
    strcpy(estoque[12].nome, "Molho Cheddar");    estoque[12].quantidade = 25; estoque[12].precoCompra = 4.00; estoque[12].id = 12;
    strcpy(estoque[13].nome, "Frango");           estoque[13].quantidade = 25; estoque[13].precoCompra = 3.50; estoque[13].id = 13;
}
