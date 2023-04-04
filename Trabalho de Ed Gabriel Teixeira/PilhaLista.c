#include <stdio.h>
#include <stdlib.h>
#include "PilhaLista.h"
#include "ListaEncadeada.h"
typedef struct lista Lista;
typedef struct pilha Pilha;
struct lista{
 int info;
 Lista *prox;
};
struct pilha{
 Lista *prim;
};

Pilha* pilha_cria(void){
 Pilha *p = (Pilha*)malloc(sizeof(Pilha));
 if(p==NULL){
 printf("Memoria insuficiente!!!\n");
 exit(1);
 }
 p->prim = NULL;
 return p;
}

/*Função que adiciona um elemento no topo de uma pilha.*/
void pilha_push(Pilha *p, int info){
 Lista *l = (Lista*)malloc(sizeof(Lista));
 if(l==NULL){
 printf("Memoria insuficiente!!!\n");
 exit(1);
 }
 l->info = info;
 l->prox = p->prim;
 p->prim = l;
}

/*Testa se uma pilha é vazia.*/
int pilha_vazia(Pilha *p){
 return p->prim==NULL;
}
/*Função que remove um elemento do topo de uma pilha.*/
int pilha_pop(Pilha *p){
 int a;
 Lista *l;
 if(pilha_vazia(p)){
 printf("Pilha Vazia!!!\n");
 exit(1);
 }
 l = p->prim;
 a = l->info;
 p->prim = l->prox;
 free(l);
 return a;
}

/*Função que imprime os elementos de uma pilha.*/
void pilha_imprime(Pilha *p){
 Lista *lAux = p->prim;
 while(lAux!=NULL){
 printf("%i\n",lAux->info);
 lAux = lAux->prox;
 }
}

/*Libera o espaço alocado para uma pilha.*/
void pilha_libera(Pilha *p){
 Lista* l = p->prim;
 Lista* lAux;
 while(l!=NULL){
 lAux = l->prox;
 free(l);
 l = lAux;
 }
 free(p);
}
// conta a quantidade impares da pilha
int pilha_impares(Pilha* p){
    Lista *lAux = p->prim;
    int cont = 0;
    while(lAux!=NULL){
        if(lAux->info % 2==1){
           cont++;
        }
        lAux = lAux->prox;
    }
    return cont;
}
// verifica os elementos comuns entre duas listas e os empilha
Pilha* empilha_elem_comuns(Lista* l1, Lista* l2){
    Pilha *p = (Pilha*)malloc(sizeof(Pilha));
    p = pilha_cria();
    Lista *L1 = l1;
    Lista *L2 = l2;
    p = pilha_cria();
    while(L1!= NULL){
        L2 = l2;
        while(L2!=NULL){
            if(L1->info==L2->info){
                pilha_push(p, L1->info);
            }
            L2=L2->prox;
        }
        L1=L1->prox;
    }
    return p;
}

