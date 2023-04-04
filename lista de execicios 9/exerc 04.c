#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *file;
    file = fopen("numeros.bin", "wb");
    if(file == NULL){
        printf("Nao foi possivel abrir o arquivo");
    }
    else{
        printf("Arquivo aberto com sucesso\n");
    }
    float c;
    int n;
    printf("Quantos numeros quer gravar no arquivo?");
    scanf("%i", &n);
    printf("\n");
    for(int i = 0; i < n; i++){
       printf("Digite o %i* a ser guardado: ", i+1);
       scanf("%f", &c);
       fwrite(&c, sizeof(float),1, file);
    }
    printf("\nNumeros gravados com sucesso.\n");
    fclose(file);
    system("pause");
return 0;
}

