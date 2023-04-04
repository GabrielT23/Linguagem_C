#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char senha [50] = "abacate";
    char usuario [50];
    char retorno;
    printf("Digite a senha: ");
    scanf("%s", &usuario);
    retorno = strcmp(senha, usuario);
    if (retorno == 0){
        printf("ACESSO PERMITIDO");
    }
    else{
        printf("ACESSO NEGADO");
    }

return 0;
}
