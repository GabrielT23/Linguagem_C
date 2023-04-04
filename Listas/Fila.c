#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"
#define N 25

typedef struct fila{
int n;
int ini;
int v[N];
}Fila;

typedef struct pilha{
int n;
int v[N];
}Pilha;

Fila* fila_cria(void){
 Fila *f = (Fila*)malloc(sizeof(Fila));
 if(f==NULL){
 printf("Memoria insuficiente!!!\n");
 exit(1);
 }
 f->n = 0;
 f->ini = 0;
 return f;
}

void fila_insere(Fila *f, int info){
 int fim;
 if(f->n==N){
 printf("Capacidade da Fila Estourou!!!\n");
 exit(1);
 }
 fim = (f->ini + f->n) % N;
 f->v[fim]= info;
 f->n++;
}

/*Testa se uma fila é vazia.*/
int fila_vazia(Fila *f){
 return f->n==0;
}
/*Função que remove um elemento de uma fila.*/
int fila_remove(Fila *f){
 int a;
 if(fila_vazia(f)){
 printf("Fila Vazia!!!\n");
 exit(1);
 }
 a = f->v[f->ini];
 f->ini = (f->ini+1)%N;
 f->n--;
 return a;
}

void fila_imprime(Fila *f){
 int i; int k;
 for(i = 0; i<f->n;i++){
 k = (f->ini+i) % N;
 printf("%d\n",f->v[k]);
 }
}

void fila_libera(Fila *f){
 free(f);
}
int fila_qtd_maior(Fila* f, int n){
    int cont = 0; int k;
     for(int i = 0; i<f->n;i++){
        k = (f->ini+i) % N;
        if(f->v[k] > n){
            cont++;
        }
     }
     return cont;
}

int fila_pares(Fila* f){
    int cont = 0; int k;
     for(int i = 0; i<f->n;i++){
        k = (f->ini+i) % N;
        if(f->v[k]%2==0){
            cont++;
        }
     }
     return cont;
}

void inverte(Fila* f){
    Pilha *p = (Pilha*)malloc(sizeof(Pilha));
    p = pilha_cria();
    int k;
     for(int i = 0; i<f->n;i++){
        k = (f->ini+i) % N;
        pilha_push(p, f->v[k]);
        printf("\nv = %i\n", f->v[k]);
     }
    fila_libera(f);
    f = fila_cria();
     for(int i = p->n-1; i>=0;i--){
         fila_insere(f, pilha_pop(p));

     }

}

