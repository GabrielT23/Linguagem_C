#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *file;
    file = fopen("sequencianumerica.bin", "rb");
    if(file == NULL){
        printf("Nao foi possivel abrir o arquivo\n");
        return 0;
    }
    else{
        printf("Arquivo aberto com sucesso\n");
    }
    float soma = 0;
    int n;
    printf("Quantos numeros tem no arquivo numeros?");
    scanf("%i", &n);
    int c[n];
    printf("\n");
    fread(c, sizeof(int),n, file);
    for(int i = 0; i < n; i++){
       printf("%i ", c[i]);
    }

    fclose(file);
return 0;
}
