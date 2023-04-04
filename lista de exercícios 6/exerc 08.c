#include <stdlib.h>
#include <strings.h>
#include <stdio.h>


int main(){
  char palavra1[21], palavra_cortada[21];
  int i, f, c, tamanho;
  printf("Digite uma palavra: ");
  gets(palavra1);
  tamanho = strlen(palavra1);
  do{
  printf("Digite o piso do intervalo: ");
  scanf("%i", &i);
  printf("Digite o teto do intervalo: ");
  scanf("%i", &f);
  }while(i > f || i >= tamanho || f >= tamanho);
  c = 0;
  for (int cont = i; cont < f; cont++){
      palavra_cortada[c] = palavra1 [cont];
      c++;
  }
  printf("A palavra cortada entre o intervalo %i e %i eh: %s", i, f, palavra_cortada);

}

