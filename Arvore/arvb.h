#ifndef ARVB_H_INCLUDED
#define ARVB_H_INCLUDED

typedef struct arvB ArvB;
ArvB* arvb_cria_vazia(void);
ArvB* arvb_cria_no(char c, ArvB *sae, ArvB *sad);
ArvB* arvb_insere(ArvB *a, int c);
int arvb_vazia(ArvB *a);
void arvb_imprime(ArvB *a);
void arvb_libera(ArvB *a);
int arv_pertence(ArvB *a,char c);
int arv_altura(ArvB *a);
ArvB* arvb_remove(ArvB *a, int c);
int folhas_primos(ArvB* a);
int dois_filhos(ArvB* a);
int nos_igual_altura(ArvB* a);
int iguais(ArvB* a, ArvB* b);
int folhas_primos(ArvB* a);


#endif // ARVB_H_INCLUDED
