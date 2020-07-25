// Fernanda Carolina Aguilera Abarca
// Funções da pilha

#ifndef fpilha_h
#define fpilha_h

#include <stdio.h>
#endif /* fpilha_h */

typedef struct pilha pilha_binarios;
pilha_binarios * criar(void);
void liberar(pilha_binarios * p);
void ppush(pilha_binarios * p, int a);
int ppop(pilha_binarios * p);
int esvaziar(pilha_binarios * p);

