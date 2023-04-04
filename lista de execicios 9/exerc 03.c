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
    float maior, menor;
    for(int i = 0; i < n; i++){
       if(i == 0){
            maior = c[i];
            menor = c[i];
       }
       if(c[i] > maior){
            maior = c[i];
       }
       if(c[i] < menor){
            menor = c[i];
       }
    }

    printf("Dentre os numeros presentes no arquivo o maior eh %0.1f e o menor eh %0.1f.\n", maior, menor);
    fclose(file);
return 0;
}

