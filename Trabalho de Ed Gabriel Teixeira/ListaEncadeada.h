#ifndef LISTAENCADEADA_H_INCLUDED
#define LISTAENCADEADA_H_INCLUDED
#include "PilhaLista.h"
typedef struct lista Lista;
/* Cria uma lista vazia.*/
Lista* lst_cria();
/* Testa se uma lista é vazia.*/
int lst_vazia(Lista *l);
/* Insere um elemento no início da lista.*/
Lista* lst_insere(Lista *l, int info);
/* Busca um elemento em uma lista.*/
Lista* lst_busca(Lista *l, int info);
/* Imprime uma lista.*/
void lst_imprime(Lista *l);
/* Remove um elemento de uma lista.*/
Lista* lst_remove(Lista *l, int info);
/* Libera o espaço alocado por uma lista.*/
void lst_libera(Lista *l);
//Soma os elementos da da lista
int lst_Soma(Lista *l);
// conta quantidade elemenotos menores que n da lista
int lst_menores(Lista* l, int n);
// conta quantidade de numeros perfeitos da lista
int lst_perfeito(Lista* l);
// verifica se uma lista eh igual a outra
int lst_igual_rec(Lista *l1,Lista *l2);
// imprime a lista invertida
void lst_imprime_invertida_rec(Lista* l);
// retorna a diferenca entre duas listas
Lista* lst_diferenca(Lista* l1, Lista* l2);

#endif // LISTAENCADEADA_H_INCLUDED
