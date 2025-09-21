#include <stdio.h>
#include <string.h>
#include "cardapio.h"

void inicializarCardapio(hamburguer cardapio[], ingrediente estoque[]) {
    int k;

    // 1. Bit and Bacon
    strcpy(cardapio[0].nome, "Bit and Bacon");
    cardapio[0].preco = 22.00; cardapio[0].id = 1;
    int receita0[] = {0, 2, 3, 1, 0, -1};
    k = 0; while (receita0[k] != -1) { cardapio[0].receita[k] = receita0[k]; k++; }
    cardapio[0].numItens = k;

    // 2. Duck Cheese
    strcpy(cardapio[1].nome, "Duck Cheese");
    cardapio[1].preco = 22.00; cardapio[1].id = 2;
    int receita1[] = {0, 4, 5, 3, 0, -1};
    k = 0; while (receita1[k] != -1) { cardapio[1].receita[k] = receita1[k]; k++; }
    cardapio[1].numItens = k;
    
	// 3. Quackteirão
    strcpy(cardapio[2].nome, "Quackteirão");
    cardapio[2].preco = 25.00; cardapio[2].id = 3;
    int receita2[] = {0, 4, 3, 1, 3, 0, -1}; 
    k = 0; while (receita2[k] != -1) { cardapio[2].receita[k] = receita2[k]; k++; }
    cardapio[2].numItens = k;

    // 4. Big Pato
    strcpy(cardapio[3].nome, "Big Pato");
    cardapio[3].preco = 30.00; cardapio[3].id = 4;
    int receita3[] = {0, 1, 4, 0, 1, 3, 4, 0, -1}; 
    k = 0; while (receita3[k] != -1) { cardapio[3].receita[k] = receita3[k]; k++; }
    cardapio[3].numItens = k;

    // 5. Donald (inventado no Excel)
    strcpy(cardapio[4].nome, "Donald");
    cardapio[4].preco = 32.00; cardapio[4].id = 5;
    int receita4[] = {0, 13, 3, 5, 4, 0, -1}; 
    k = 0; while (receita4[k] != -1) { cardapio[4].receita[k] = receita4[k]; k++; }
    cardapio[4].numItens = k;

    // 6. Patolino
    strcpy(cardapio[5].nome, "Patolino");
    cardapio[5].preco = 28.00; cardapio[5].id = 6;
    int receita5[] = {0, 1, 7, 3, 2, 0, -1}; 
    k = 0; while (receita5[k] != -1) { cardapio[5].receita[k] = receita5[k]; k++; }
    cardapio[5].numItens = k;

    // 7. Duckling
    strcpy(cardapio[6].nome, "Duckling");
    cardapio[6].preco = 20.00; cardapio[6].id = 7;
    int receita6[] = {0, 1, 3, 0, -1}; 
    k = 0; while (receita6[k] != -1) { cardapio[6].receita[k] = receita6[k]; k++; }
    cardapio[6].numItens = k;

    // 8. PatOnion
    strcpy(cardapio[7].nome, "PatOnion");
    cardapio[7].preco = 27.00; cardapio[7].id = 8;
    int receita7[] = {0, 6, 1, 3, 0, -1}; 
    k = 0; while (receita7[k] != -1) { cardapio[7].receita[k] = receita7[k]; k++; }
    cardapio[7].numItens = k;

    // 9. Tio Patinhas
    strcpy(cardapio[8].nome, "Tio Patinhas");
    cardapio[8].preco = 40.00; cardapio[8].id = 9;
    int receita8[] = {0, 1, 11, 3, 2, 0, -1}; 
    k = 0; while (receita8[k] != -1) { cardapio[8].receita[k] = receita8[k]; k++; }
    cardapio[8].numItens = k;

    // 10.DuX-Tudo
    strcpy(cardapio[9].nome, "DuX-Tudo");
    cardapio[9].preco = 46.00; cardapio[9].id = 10;
    int receita9[] = {0, 1, 2, 3, 4, 5, 12, 0, -1};
    k = 0; while (receita9[k] != -1) { cardapio[9].receita[k] = receita9[k]; k++; }
    cardapio[9].numItens = k;
}

// Implementação da função que exibe o cardápio
void exibirCardapio(hamburguer cardapio[], ingrediente estoque[]) {
    printf("\n ---- CARDAPIO PATO BURGER ----\n");
    for (int i = 0; i < hamburguerMAX; i++) {
        printf("\n[%d] %s - R$ %.2f\n", cardapio[i].id, cardapio[i].nome, cardapio[i].preco);
        printf("    Ordem de preparo:\n");
        for (int j = 0; j < cardapio[i].numItens; j++) {
            printf("     %d) %s\n", j + 1, estoque[cardapio[i].receita[j]].nome);
        }
    }
}
