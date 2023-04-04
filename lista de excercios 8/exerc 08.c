#include <stdio.h>
#include<stdlib.h>
int main(){
    struct registro{
    int matricula;
    char nome[40];
    float notas [3];
    float media;
    } escolar;
    printf("Digite o nome do aluno: ");
    fgets(escolar.nome, 40, stdin);
    printf("Digite o numero de matricula do aluno: ");
    scanf("%i", &escolar.matricula);
    escolar.media = 0;
    int soma = 0;
    for(int i = 0; i < 3; i++){
        printf("Digite a %i* nota do aluno: ",(i+1));
        scanf("%f", &escolar.notas[i]);
        soma += escolar.notas[i];
        escolar.media = soma/(i+1);
    }
    printf("Aluno: %s", escolar.nome);
    printf("Matricula: %i\n", escolar.matricula);
    printf("Media: %0.2f\n", escolar.media);

return 0;
}
