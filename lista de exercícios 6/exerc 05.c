#include <stdlib.h>
#include <strings.h>

int main(){
  char palavra1[100], palavra2[100];
  int i,f;
  printf("Digite uma palavra: ");
  gets(palavra1);
  printf("Digite outra palavra: ");
  gets(palavra2);
  if(strcmp(palavra1, palavra2)==0){
    printf("As palavras sao iguais: ");
  }
  else{
    printf("As palavras sao diferentes: ");
  }
return 0;
}
