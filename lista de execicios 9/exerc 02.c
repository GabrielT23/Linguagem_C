#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(){
    typedef struct {
        char nome[40];
        char curso[40];
        int telefone;
        char endereco[40];
    }Aluno;
    Aluno alunos[50];
    FILE *arq;
    arq = fopen("cadastro de alunos.bin", "rb");
    int n = 0;
    if(arq == NULL){
        FILE *file;
        file = fopen("cadastro de alunos.bin", "wb");
        if(file == NULL){
            printf("\nNao foi possivel abrir o arquivo");
        }
        else{
            printf("\nArquivo aberto com sucesso\n");
        }
        printf("Quantas alunos voce quer cadastrar: ");
        scanf("%i", &n);
        for(int i = 0; i < n; i++){
            printf("\n%i* pessoa\n", i+1);
            printf("Digite o nome da aluno: ");
            scanf(" %[^\n]s", &alunos[i].nome);
            printf("Digite o curso da aluno: ");
            scanf(" %[^\n]s", &alunos[i].curso);
            printf("Digite o telefone da aluno: ");
            scanf("%i", &alunos[i].telefone);
            printf("Digite o endereco da aluno: ");
            scanf(" %[^\n]s", &alunos[i].endereco);

        }
        fwrite(alunos, sizeof(Aluno),n, file);
        printf("\nDados gravados com sucesso.\n");
    }
    else{
        int res;
        printf("Ja existem dados gravados nesse arquivo. Voce deseja:\n");
        printf("1) Permancer com os dados ja gravados.\n2) Gravar novos dados.\n");
        do{
            printf("Qual a opcao? ");
            scanf("%i", &res);
        }while(res < 1 || res > 2);
        if(res == 1){
            Aluno c;
            while(fread(&c, sizeof(Aluno),1, arq)){
                alunos[n] = c;
                n++;
            }
            printf("\nDados recuperados com sucesso.\n");
        }
        else{
            FILE *file;
            file = fopen("cadastro de alunos.bin", "wb");
            if(file == NULL){
                printf("\nNao foi possivel abrir o arquivo");
            }
            else{
                printf("\nArquivo aberto com sucesso\n");
            }
            printf("Quantas alunos voce quer cadastrar: ");
            scanf("%i", &n);
            for(int i = 0; i < n; i++){
                printf("\n%i* pessoa\n", i+1);
                printf("Digite o nome da aluno: ");
                scanf(" %[^\n]s", &alunos[i].nome);
                printf("Digite o curso da aluno: ");
                scanf(" %[^\n]s", &alunos[i].curso);
                printf("Digite o telefone da aluno: ");
                scanf("%i", &alunos[i].telefone);
                printf("Digite o endereco da aluno: ");
                scanf(" %[^\n]s", &alunos[i].endereco);
            }
        fwrite(alunos, sizeof(Aluno),n, file);
        printf("\nDados gravados com sucesso.\n");
        }
    }
    char pesquisa[40];
    printf("Digite o primeiro nome do aluno que deseja encontrar: ");
    scanf(" %[^\n]s", &pesquisa);
    char *pont;
    int l = 0;
    int posicao;
    for(int i = 0; i < n; i++){
        pont = strstr(alunos[i].nome, pesquisa);
        posicao = pont - alunos[i].nome;
        if(posicao == 0){
            printf("\n%i* pessoa", i + 1);
            printf("\nnome: %s", alunos[i].nome);
            printf("\ncurso: %s", alunos[i].curso);
            printf("\ntelefone: %d", alunos[i].telefone);
            printf("\nendereco: %s", alunos[i].endereco);
            l = 1;
            break;
        }
    }
    if(l != 1){
        printf("\nInformacoes nao encontrado");
    }
    printf("\n\nFim do programa\n");
    system("pause");
return 0;
}
