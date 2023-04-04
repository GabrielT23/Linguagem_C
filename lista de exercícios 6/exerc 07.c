#include <stdlib.h>
#include <strings.h>

int main(){
  char palavra1[21], convertido[21];
  int conversao, tamanho;
  printf("Digite uma palavra: ");
  gets(palavra1);
  tamanho = strlen(palavra1);
  printf("A palavra deve ser convertida para maiusculo ou minisculo?[digite 1 para maiusculo e 2 para minusculo]: ");
  scanf("%i", &conversao);
  if(conversao == 1){
      for(int cont = 0; cont < tamanho; cont++){
            convertido [cont] = toupper(palavra1[cont]);
      }
      printf("A palavra convertida para maiusculo eh %s", convertido);
  }
  else{
        for(int cont = 0; cont < tamanho; cont++){
            convertido [cont] = tolower(palavra1[cont]);
      }
      printf("A palavra convertida para minusculo eh %s", convertido);
  }
return 0;
}
