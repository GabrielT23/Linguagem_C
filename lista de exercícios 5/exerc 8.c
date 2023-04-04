#include <stdio.h>
#include<stdlib.h>

int main(){
    int estoque, c;
    char comando = 's';
    float v_mercadoria, v_estoque, media;
    c = 1;
    while (comando == 's'){
        printf("Digite o valor da %i* mercadoria: ", c);
        scanf("%f", &v_mercadoria);
        v_estoque = v_estoque + v_mercadoria;
        media = v_estoque/c;
        c++;
        printf("Mais mercadoria?[s/n]: ");
        scanf(" %c", &comando);
        getchar();
    }
    printf("O valor da mercadoria em estoque eh: %0.2f e a media dos valores eh %0.2f", v_estoque, media);
return 0;
}
