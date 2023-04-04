#include <stdlib.h>

#include <strings.h>

int main(){
  char texto[100], inverso[100];
  int i,f;
  printf("Digite um texto: ");
  gets(texto);
  f=0;
  for (i=strlen(texto)-1; i >=0; i--){
      inverso[f] = texto[i];
      f++;
  }
  inverso[f] = '\0';
  printf("O inverso e : %s \n",inverso);

  if(strcmp(texto,inverso)==0){
    printf("E palindromo");
  }
  else{
    printf("Nao e palindromo");
  }
return 0;
}
