#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(){
    int n, op, pesquisa1;
    char pesquisa2[40];
    int i, l = 0;
    printf("Quantas pessoas voce quer cadastrar: ");
    scanf("%i", &n);
    struct cadastro{
    char nome[40];
    int telefone;
    char endereco[40];
    }cadastros[n];
    for(i = 0; i < n; i++){
        printf("\n%i* pessoa\n", i+1);
        printf("Digite o nome da pessoa: ");
        scanf(" %[^\n]s", &cadastros[i].nome);
        printf("Digite o telefone da pessoa: ");
        scanf("%i", &cadastros[i].telefone);
        printf("Digite o endereco da pessoa: ");
        scanf(" %[^\n]s", &cadastros[i].endereco);
    }
   do{
        printf("(1)telefone.\n(2) primeiro nome.\n");
        printf("escolha uma opcao de pesquisa para escontrar um cadastrado: ");
        scanf("%i", &op);
   }while(op < 1 || op > 2);
   if(op == 1){
        printf("Digite o telefone da pessoa: ");
        scanf("%i", &pesquisa1);
        for(i = 0; i < n; i++){
            if(pesquisa1==cadastros[i].telefone)
                printf("nome: %s\n", cadastros[l].nome);
                printf("telefone: %i\n", cadastros[l].telefone);
                printf("endereco: %s\n", cadastros[l].endereco);
                l = 1;
                break;
        }
        if (l != 1){
            printf("cadastro nao encontrado");
        }
   }
   else{
        printf("O primeiro nome da pessoa eh: ");
		scanf(" %[^\n]s", &pesquisa2);
		char *pont;
		l = 0;
		int posicao;
			for(i = 0; i < n; i++){
			pont = strstr(cadastros[i].nome, pesquisa2);
			posicao = pont - cadastros[i].nome;
			if(posicao == 0){
				printf("\n%i* pessoa", i + 1);
				printf("\nnome: %s", cadastros[i].nome);
				printf("\ntelefone: %d", cadastros[i].telefone);
				printf("\nendereco: %s", cadastros[i].endereco);
				l = 1;
				break;
			}
		}
		if(l != 1){
			printf("\nInformacoes nao encontrado");
		}
   }


return 0;
}
