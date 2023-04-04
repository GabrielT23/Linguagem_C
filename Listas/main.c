#include <stdio.h>
#include <stdlib.h>
#include "ListaEncadeada.h"
#include "Pilha.h"
#include "Fila.h"


int main()
{
/*Lista* l = NULL;
 l = lst_insere(l,10);
 l = lst_insere(l,20);
 l = lst_insere(l,25);
 l = lst_insere(l,30);
 l = lst_remove(l,10);
 lst_imprime(l);*/

 /*Pilha *p = pilha_cria();
 pilha_push(p, 5);
 pilha_push(p, 3);
 pilha_push(p, 4);
 pilha_imprime(p);
printf("ola mundo");*/

Fila *f = fila_cria();
fila_insere(f, 1);
fila_insere(f, 4);
fila_insere(f, 3);
fila_insere(f, 8);
fila_insere(f, 22);
fila_insere(f, 15);
fila_insere(f, 16);
fila_remove(f);
fila_imprime(f);
inverte(f);
printf("\n\nInvertida\n\n");
fila_imprime(f);
 return 0;
}

