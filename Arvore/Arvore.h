#ifndef ARVORE_H_INCLUDED
#define ARVORE_H_INCLUDED
typedef struct arvB ArvB;
ArvB* arvb_cria_vazia(void);
ArvB* arvb_cria_no(char c, ArvB *sae, ArvB *sad);
ArvB* arvb_insere(ArvB *a, int c);
int arvb_vazia(ArvB *a);
void arvb_imprime(ArvB *a);
void arvb_libera(ArvB *a);
int arv_altura(ArvB *a);
ArvB* arvb_remove(ArvB *a, int c);
int folhas_primos(ArvB* a);
int dois_filhos(ArvB* a);
int nos_igual_altura(ArvB* a);
int iguais(ArvB* a, ArvB* b);



#endif // ARVORE_H_INCLUDED
