#ifndef PILHALISTA_H_INCLUDED
#define PILHALISTA_H_INCLUDED
#include "ListaEncadeada.h"
typedef struct lista Lista;
typedef struct pilha Pilha;
/*Fun��o que cria uma pilha.*/
Pilha* pilha_cria(void);
/*Testa se uma pilha � vazia.*/
int pilha_vazia(Pilha *p);
/*Fun��o que adiciona um elemento no topo de uma pilha.*/
void pilha_push(Pilha *p, int info);
/*Fun��o que remove um elemento do topo de uma pilha.*/
int pilha_pop(Pilha *p);
/*Fun��o que imprime os elementos de uma pilha;*/
void pilha_imprime(Pilha *p);
/*Libera o espa�o alocado para uma pilha.*/
void pilha_libera(Pilha *p);
// conta a quantidade impares da pilha
int pilha_impares(Pilha* p);
// verifica os elementos comuns entre duas listas e os empilha
Pilha* empilha_elem_comuns(Lista* l1, Lista* l2);

#endif // PILHALISTA_H_INCLUDED
