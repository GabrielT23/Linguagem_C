#ifndef FILAVETOR_H_INCLUDED
#define FILAVETOR_H_INCLUDED

typedef struct fila Fila;
/*Fun��o que cria uma Fila.*/
Fila* Vetfila_cria(void);
/*Testa se uma Fila � vazia.*/
int Vetfila_vazia(Fila *f);
/*Fun��o que adiciona um elemento em uma Fila.*/
void Vetfila_insere(Fila *f, int info);
/*Fun��o que remove um elemento de uma Fila.*/
int Vetfila_remove(Fila *f);
/*Fun��o que imprime os elementos de uma Fila.*/
void Vetfila_imprime(Fila *f);
/*Libera o espa�o alocado para uma Fila.*/
void Vetfila_libera(Fila *f);
// conta a quantidade de elementos maiores que n da fila
int Vetfila_qtd_maior(Fila* f, int n);
// conta quantidade de pares da fila
int Vetfila_pares(Fila* f);
// inverte a fila
void Vetinverte(Fila* f);

#endif // FILAVETOR_H_INCLUDED
