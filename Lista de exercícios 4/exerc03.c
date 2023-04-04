#include <stdio.h>
#include <stdlib.h>
int main(){
    int nota_a1;
    int nota_a2;
    int media;
    printf("Digite as duas notas da prova: ");
    scanf("%i %i", &nota_a1, &nota_a2);
    media = (nota_a1 + nota_a2)/2;
    printf("A media do aluno e %i\n", media);
    if (media < 6){
        printf("O aluno esta reprovado\n");
    }
    else{
        printf("O aluno esta aprovado\n");
    }

return 0;
}
