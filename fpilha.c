// Fernanda Carolina Aguilera Abarca
// Estruturas da pilha

#include "fpilha.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct posicao{
    int informacao;
    struct posicao * proximo;
}; typedef struct posicao posicao_pilha;

struct pilha{
    posicao_pilha * topo;
};

pilha_binarios * criar (void){
    pilha_binarios * p = (pilha_binarios *) malloc (sizeof(pilha_binarios));
    p -> topo = NULL;
    return p;
}

int esvaziar (pilha_binarios * p){
    return (p ->topo == NULL);
}

void ppush (pilha_binarios * p, int auxiliar){
    posicao_pilha * novo = (posicao_pilha *) malloc (sizeof(posicao_pilha));
    assert (novo != NULL);
    novo -> informacao = auxiliar;
    novo -> proximo = p -> topo;
    p -> topo = novo;
}

int ppop (pilha_binarios * p){
    posicao_pilha * t;
    int auxiliar;
    assert (!esvaziar(p));
    t = p -> topo;
    auxiliar = t -> informacao;
    p -> topo = t -> proximo;
    free (t);
    return auxiliar;
}

void liberar (pilha_binarios * p){
    posicao_pilha *t, * q = p -> topo;
    while (q != NULL){
        t = q -> proximo;
        free (q);
        q = t;
    }
    free (p);
}
