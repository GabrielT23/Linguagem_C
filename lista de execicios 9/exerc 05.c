#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *file;
    file = fopen("numeros.bin", "rb");
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
    float c[n];
    printf("\n");
    fread(c, sizeof(float),n, file);
    for(int i = 0; i < n; i++){
       soma += c[i];
    }
    printf("A soma dos numeros contidos no arquivo numeros eh: %f", soma);
    fclose(file);
return 0;
}


