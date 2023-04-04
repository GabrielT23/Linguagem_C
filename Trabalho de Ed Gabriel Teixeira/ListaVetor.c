#include <stdio.h>
#include <stdlib.h>
#include "ListaEncadeada.h"

typedef struct lista Lista;
struct lista {
int info;
Lista *prox;
};

/* Cria uma lista vazia.*/
Lista* Vetlst_cria(){
 return NULL;
}

/* Testa se uma lista é vazia.*/
int Vetlst_vazia(Lista *l){
 return (l==NULL);
}

/* Insere um elemento no início da lista.*/
Lista* Vetlst_insere(Lista *l, int info){
 Lista* ln = (Lista*)malloc(sizeof(Lista));
 ln->info = info;
 ln->prox = l;
 return ln;
}

/* Busca um elemento em uma lista.*/
Lista* Vetlst_busca(Lista *l, int info){
 Lista* lAux = l;
 while(lAux!=NULL){
 if(lAux->info == info)
 return lAux;
 lAux = lAux->prox;
 }
 return NULL;
}

/* Imprime uma lista.*/
void Vetlst_imprime(Lista *l){
 Lista* lAux = l;
 while(lAux!=NULL){
 printf("Info = %d\n",lAux->info);
 lAux = lAux->prox;
 }
}

Lista* Vetlst_remove(Lista *l, int info){
if(l!=NULL){
 Lista* lAux = l->prox;
 if(l->info==info){
 free(l);
 return lAux;
 }
 else{
 Lista* lAnt = l;
 while(lAux!=NULL ){
 if(lAux->info == info){
 lAnt->prox = lAux->prox;
 free(lAux);
 break;
 }else{
 lAnt = lAux;
 lAux = lAux->prox;
 }
 }
 }
}
return l;
}

/* Libera o espaço alocado por uma lista.*/
void Vetlst_libera(Lista *l){
 Lista* lProx;
 while(l!=NULL){
 lProx = l->prox;
 free(l);
 l = lProx;
 }
}
