#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "arvb.h"

typedef struct arvB ArvB;
struct arvB{
	int info;
	ArvB *esq;
	ArvB *dir;
};

ArvB* arvb_cria_vazia(void){
	return NULL;
}

ArvB* arvb_cria_no(char c, ArvB *sae, ArvB *sad){
	ArvB* a = (ArvB*)malloc(sizeof(ArvB));
	a->info = c;
	a->esq = sae;
	a->dir = sad;
	return a;
}

int arvb_vazia(ArvB *a){
	return a==NULL;
}

ArvB* arvb_insere(ArvB *a, int c){
	if(arvb_vazia(a)){
		a = (ArvB*)malloc(sizeof(ArvB));
		a->info = c;
		a->esq = NULL;
		a->dir = NULL;
	}
	else if(a->info > c)
		a->esq = arvb_insere(a->esq,c);
	else if (a->info < c)
		a->dir = arvb_insere(a->dir,c);
	else
		printf("\nElemento Ja Pertence a Arvore");
	return a;
}

void arvb_imprime(ArvB *a){
	if(!arvb_vazia(a)){
		arvb_imprime(a->esq);
		printf("%d ",a->info);
		arvb_imprime(a->dir);
	}
}

int arv_pertence(ArvB *a,char c){
 if(arvb_vazia(a))
 return 0;
 else
return a->info ==c || arv_pertence(a->esq,c)
 || arv_pertence(a->dir,c);
}

void arvb_libera(ArvB *a){
	if(!arvb_vazia(a)){
		arvb_libera(a->esq);
		arvb_libera(a->dir);
		free(a);
	}
}

int arv_altura(ArvB *a){
	if(arvb_vazia(a))
		return -1;
	else{
		int hSAE = arv_altura(a->esq);
		int hSAD = arv_altura(a->dir);
		if(hSAE > hSAD)
			return 1+hSAE;
		else
			return 1+hSAD;
	}
}

ArvB* arvb_remove(ArvB *a, int c){
	if(!arvb_vazia(a)){
		if(a->info > c)
			a->esq = arvb_remove(a->esq,c);
		else if (a->info < c)
			a->dir = arvb_remove(a->dir,c);
		else{
	 		ArvB* t;
	 		if (a->esq == NULL){
				t = a; a = a->dir;
				free(t);
	 		}
			else if (a->dir == NULL){
				t = a; a = a->esq;
				free(t);
			}else{
				t = a->esq;
	 		while(t->dir!=NULL)
	 			t = t->dir;
	 		a->info = t->info; t->info = c;
	 		a->esq = arvb_remove(a->esq,c);
	 		}
	 	}
	}
	return a;
}

int primo(int n){
	for(int i = 2; i<n; i++){
		if (n%i==0){
			return 0;
		}
	}
	if(n==0||n==1){
		return 0;
	}
	return 1;
}

int folhas_primos(ArvB* a){
    int cont = 0;
    if(arvb_vazia(a)){
        return 0;
    }
    else{
        if(primo(a->info)){
            cont++;
        }
        return cont + folhas_primos(a->esq)+ folhas_primos(a->dir);
    }

}

int dois_filhos(ArvB* a){
    if(a->dir!=NULL && a->esq!=NULL){
		return 1 + dois_filhos(a->dir) + dois_filhos(a->esq);
	}
	else{
        return 0;
	}
}

int nos_igual_altura(ArvB* a){
    int cont = 0;
    if(arvb_vazia(a)){
        return 0;
    }
    if(arv_altura(a->dir) == arv_altura(a->esq)){
        cont++;
    }
    return cont + nos_igual_altura(a->dir) + nos_igual_altura(a->esq);
}

int iguais(ArvB* a, ArvB* b){
    if(a==NULL || b==NULL){
		return 1;
	}
    return a->info == b->info && iguais(a->dir, b->dir) && iguais(a->esq, b->esq);
}
