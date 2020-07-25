// Fernanda Carolina Aguilera Abarca
// Main

#include "fpilha.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void decimal_binario (int numero, char * t);
int main (void){
    char binario[10];
    int numero;
    //int numero = 30;
    
    printf("Digite um numero inteiro, positivo e maior que 0: ");
    scanf("%d", &numero);
    decimal_binario (numero, binario);
    printf("%d (decimal) ->%s (binario)\n", numero, binario);
}

void decimal_binario (int numero, char * t){
    pilha_binarios * p = criar();
    do{
        ppush(p, numero%2);
        numero /= 2;
    } while (numero);
    while (!esvaziar(p))
        *t++ = '0'+ ppop(p);
    *t = '\0';
    liberar(p);
}
