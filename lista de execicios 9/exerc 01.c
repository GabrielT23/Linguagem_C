#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *file;
    char arquivo[40];
    printf("Digite o nome do arquivo: ");
    gets(arquivo);
    file = fopen(arquivo, "r");
    if(file == NULL){
        printf("Nao foi possivel abrir o arquivo");
    }
    else{
        printf("Arquivo aberto com sucesso");
    }
    char c[1000];
    int cont = 0;
    int quant = 1;
    while(!feof(file)){
        c[cont] = fgetc(file);
        cont++;
    }
    printf("\n");
    int tam = strlen(c);
    for(int i = 0; i < tam; i++){
        if(c[i] == ' ' || c[i] == '\n')
            quant++;
    }
    printf("\nO arquivo tem %i palavras.", quant);
    fclose(file);
return 0;
}

