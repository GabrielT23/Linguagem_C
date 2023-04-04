#include <stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Quantas pessoas voce quer cadastrar: ");
    scanf("%i", &n);
    struct cadastro{
    char nome[40];
    int telefone;
    char endereco[40];
    }cadastros[n];
    for(int i = 0; i < n; i++){
        printf("\n%i* pessoa\n", i+1);
        printf("Digite o nome da pessoa: ");
        scanf(" %s", &cadastros[i].nome);
        printf("Digite o telefone da pessoa: ");
        scanf("%i", &cadastros[i].telefone);
        printf("Digite o endereco da pessoa: ");
        scanf(" %s", &cadastros[i].endereco);
    }
    for(int i = 0; i < n; i++){
        printf("\n%i* pessoa\n", i+1);
        printf("nome: %s\n", cadastros[i].nome);
        printf("telefone: %i\n", cadastros[i].telefone);
        printf("endereco: %s\n", cadastros[i].endereco);
    }
return 0;
}
