#include <stdio.h>
#include<stdlib.h>

int main(){
    int estoque;
    float v_mercadoria, v_estoque, media;
    printf("Digite A quantidade de mercadorias em estoque: ");
    scanf("%i", &estoque);
    for (int c = 1; c <= estoque; c++){
            printf("Digite o valor da %i* mercadoria: ", c);
            scanf("%f", &v_mercadoria);
            v_estoque = v_estoque + v_mercadoria;
            media = v_estoque/c;
    }
    printf("O valor da mercadoria em estoque eh: %0.2f e a media dos valores eh %0.2f", v_estoque, media);
return 0;
}
