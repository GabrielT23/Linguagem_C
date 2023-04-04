#include <stdio.h>
#include <stdlib.h>
#include "PilhaVetor.h"
#define MAX 20

typedef struct pilha{
int n;
int v[MAX];
}Pilha;

Pilha* Vetpilha_cria(void){
 Pilha *p = (Pilha*)malloc(sizeof(Pilha));

 if(p==NULL){
 printf("Memoria insuficiente!!!\n");
 exit(1);
 }
 p->n = 0;
 return p;
}

/*Função que adiciona um elemento no topo de uma pilha.*/
void Vetpilha_push(Pilha *p, int info){
 if(p->n==MAX){
 printf("Capacidade da Pilha Estourou!!!\n");
 exit(1);
 }
 p->v[p->n]= info;
 p->n = p->n + 1;
}

/*Função que imprime os elementos de uma pilha.*/
void Vetpilha_imprime(Pilha *p){
 int i;
 printf("Rui\n");
 for(i = p->n-1; i>=0;i--){
 printf("%i\n",p->v[i]);
 }
}


/*Libera o espaço alocado para uma pilha.*/
void Vetpilha_libera(Pilha *p){
 free(p);
}

/*Testa se uma pilha é vazia.*/
int Vetpilha_vazia(Pilha *p){
 return p->n==0;
}
/*Função que remove um elemento do topo de uma pilha.*/
int Vetpilha_pop(Pilha *p){
 int a;
 if(pilha_vazia(p)){
 printf("Pilha Vazia!!!\n");
 exit(1);
 }
 a = p->v[p->n-1];
 p->n--;
 return a;
}

