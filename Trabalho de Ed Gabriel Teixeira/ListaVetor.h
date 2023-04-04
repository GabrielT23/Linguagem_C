#ifndef LISTAVETOR_H_INCLUDED
#define LISTAVETOR_H_INCLUDED

typedef struct lista Lista;
/* Cria uma lista vazia.*/
Lista* Vetlst_cria();
/* Testa se uma lista � vazia.*/
int Vetlst_vazia(Lista *l);
/* Insere um elemento no in�cio da lista.*/
Lista* Vetlst_insere(Lista *l, int info);
/* Busca um elemento em uma lista.*/
Lista* Vetlst_busca(Lista *l, int info);
/* Imprime uma lista.*/
void Vetlst_imprime(Lista *l);
/* Remove um elemento de uma lista.*/
Lista* Vetlst_remove(Lista *l, int info);
/* Libera o espa�o alocado por uma lista.*/
void Vetlst_libera(Lista *l);

#endif // LISTAVETOR_H_INCLUDED
