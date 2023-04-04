#ifndef PILHAVETOR_H_INCLUDED
#define PILHAVETOR_H_INCLUDED

typedef struct pilha Pilha;
/*Fun��o que cria uma pilha.*/
Pilha* Vetpilha_cria(void);
/*Testa se uma pilha � vazia.*/
int Vetpilha_vazia(Pilha *p);
/*Fun��o que adiciona um elemento no topo de uma pilha.*/
void Vetpilha_push(Pilha *p, int info);
/*Fun��o que remove um elemento do topo de uma pilha.*/
int Vetpilha_pop(Pilha *p);
/*Fun��o que imprime os elementos de uma pilha;*/
void Vetpilha_imprime(Pilha *p);
/*Libera o espa�o alocado para uma pilha.*/
void Vetpilha_libera(Pilha *p);

#endif // PILHAVETOR_H_INCLUDED
