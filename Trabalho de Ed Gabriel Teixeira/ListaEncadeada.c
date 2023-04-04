#include <stdio.h>
#include <stdlib.h>
#include "ListaEncadeada.h"
#include "PilhaLista.h"

typedef struct pilha Pilha;

typedef struct lista Lista;
struct lista {
int info;
Lista *prox;
};
struct pilha{
 Lista *prim;
};
/* Cria uma lista vazia.*/
Lista* lst_cria(){
 return NULL;
}

/* Testa se uma lista é vazia.*/
int lst_vazia(Lista *l){
 return (l==NULL);
}

/* Insere um elemento no início da lista.*/
Lista* lst_insere(Lista *l, int info){
 Lista* ln = (Lista*)malloc(sizeof(Lista));
 ln->info = info;
 ln->prox = l;
 return ln;
}

/* Busca um elemento em uma lista.*/
Lista* lst_busca(Lista *l, int info){
 Lista* lAux = l;
 while(lAux!=NULL){
 if(lAux->info == info)
 return lAux;
 lAux = lAux->prox;
 }
 return NULL;
}

/* Imprime uma lista.*/
void lst_imprime(Lista *l){
 Lista* lAux = l;
 while(lAux!=NULL){
 printf("Info = %d\n",lAux->info);
 lAux = lAux->prox;
 }
}

Lista* lst_remove(Lista *l, int info){
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
void lst_libera(Lista *l){
 Lista* lProx;
 while(l!=NULL){
 lProx = l->prox;
 free(l);
 l = lProx;
 }
}
// soma os elementos da lista
 int lst_Soma(Lista *l){
    int soma = 0;
    while(l!= NULL){
        soma += l->info;
        l = l->prox;
    }
    return soma;
 }
// conta quantidade elemenotos menores que n da lista
int lst_menores(Lista* l, int n){
    int cont = 0;
    while(l!= NULL){
        if(l->info < n){
            cont++;
        }
        l = l->prox;
    }
    return cont;
}
// conta quantidade de numeros perfeitos da lista
int lst_perfeito(Lista* l){
    int cont = 0;
    while(l!= NULL){
        Lista *laux = (Lista*)malloc(sizeof(Lista));
        laux = lst_cria();
        int n = l->info;
        int i = 1;
        while(i < n){
             if(n%i == 0){
                laux = lst_insere(laux, i);
            }
            i++;
        }
        if(lst_Soma(laux) == n){
            cont++;
        }
        l = l->prox;
    }
    return cont;

}
// verifica se uma lista eh igual a outra
int lst_igual_rec(Lista *l1,Lista *l2){
if(lst_vazia(l1) && lst_vazia(l2))
return 1;
else if (lst_vazia(l1) || lst_vazia(l2))
return 0;
else
return (l1->info==l2->info &&
lst_igual_rec(l1->prox,l2->prox));
 }
// imprime a lista invertida
 void lst_imprime_invertida_rec(Lista* l){
if(lst_vazia(l))
return;
else{
lst_imprime_invertida_rec(l->prox);
printf("info: %d\n",l->info);
 }
 }
// retorna a diferenca entre duas listas
 Lista* lst_diferenca(Lista* l1, Lista* l2){
    Lista* ln = (Lista*)malloc(sizeof(Lista));
    ln = lst_cria();
    Lista *L1 = l1;
    Lista *L2 = l2;
    while(L1!= NULL){
        L2 = l2;
        while(L2!=NULL){
            if(L1->info==L2->info){
               ln = lst_insere(ln, L1->info);
            }
            L2=L2->prox;
        }
        L1=L1->prox;
    }
    while(ln!=NULL){
        l1 = lst_remove(l1, ln->info);
        ln = ln->prox;
    }
    return l1;
 }



