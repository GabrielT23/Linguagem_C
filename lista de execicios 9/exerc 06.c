#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *arq;
    arq = fopen("lista de numeros.bin", "rb");
    if(arq == NULL){

    }
    else{
        int n, c[100000];
        int cont = 0;
        while(fread(&n, sizeof(int),1, arq)){
            c[cont] = n;
            cont++;
        }
        printf("Os numeros gravados na ultima execucao foram:\n");
        for(int i = 0; i < cont-1; i++){
            printf("%i ", c[i+1]);
        }
    }
    FILE *file;
    FILE *anex;
    file = fopen("lista de numeros.bin", "wb");
    anex = fopen("lista de numeros.bin", "ab");
    if(file == NULL){
        printf("\nNao foi possivel abrir o arquivo");
    }
    else{
        printf("\nArquivo aberto com sucesso\n");
    }
    int n;
    printf("Digite o topo da lista de numeros: ");
    scanf("%i", &n);
    fwrite(&n, sizeof(int),1, file);
    int c[n];
    for(int i = 0; i <= n; i++){
        c[i]=i;
    }
    fwrite(c, sizeof(int),n+1, anex);
    printf("\nNumeros gravados com sucesso.\n");
    fclose(file);
    system("pause");
return 0;
}

