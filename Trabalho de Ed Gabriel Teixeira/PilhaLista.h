#ifndef PILHALISTA_H_INCLUDED
#define PILHALISTA_H_INCLUDED
#include "ListaEncadeada.h"
typedef struct lista Lista;
typedef struct pilha Pilha;
/*Função que cria uma pilha.*/
Pilha* pilha_cria(void);
/*Testa se uma pilha é vazia.*/
int pilha_vazia(Pilha *p);
/*Função que adiciona um elemento no topo de uma pilha.*/
void pilha_push(Pilha *p, int info);
/*Função que remove um elemento do topo de uma pilha.*/
int pilha_pop(Pilha *p);
/*Função que imprime os elementos de uma pilha;*/
void pilha_imprime(Pilha *p);
/*Libera o espaço alocado para uma pilha.*/
void pilha_libera(Pilha *p);
// conta a quantidade impares da pilha
int pilha_impares(Pilha* p);
// verifica os elementos comuns entre duas listas e os empilha
Pilha* empilha_elem_comuns(Lista* l1, Lista* l2);

#endif // PILHALISTA_H_INCLUDED
