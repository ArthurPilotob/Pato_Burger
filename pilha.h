#ifndef PILHA_H
#define PILHA_H
#include <stdio.h>

#define MAX 100
typedef int tp_item;

typedef struct {
    int topo;
    tp_item item[MAX];
} tp_pilha;

static inline void inicializaPilha(tp_pilha *p) {
    p->topo = -1;
}

static inline int pilhaVazia(tp_pilha *p) {
    return (p->topo == -1);
}

static inline int pilhaCheia(tp_pilha *p) {
    return (p->topo == MAX - 1);
}

static inline int push(tp_pilha *p, tp_item e) {
    if (pilhaCheia(p)) return 0;
    p->topo++;
    p->item[p->topo] = e;
    return 1;
}

static inline int pop(tp_pilha *p, tp_item *e) {
    if (pilhaVazia(p)) return 0;
    *e = p->item[p->topo];
    p->topo--;
    return 1;
}

static inline int top(tp_pilha *p, tp_item *e) {
    if (pilhaVazia(p)) return 0;
    *e = p->item[p->topo];
    return 1;
}

static inline void imprimePilha(tp_pilha p) {
    tp_item e;
    printf("\n");
    while (!pilhaVazia(&p)) {
        pop(&p, &e);
        printf("%d ", e);
    }
}

static inline int alturaPilha(tp_pilha *p) {
    return p->topo + 1;
}

#endif
