#include <stdio.h>
#include<stdlib.h>

int main(){
    float num, maior, menor, media, soma, negativo = 0;
    int c = 1;
    for (; c <= 10; c++){
        printf("Digite o %i* valor: ", c);
        scanf("%f", &num);
        if (num < 0){
            negativo++;
        }
        if (c == 1){
            maior = num;
            menor = num;
        }
        if (num > maior){
            maior = num;
        }
        if (num < menor){
            menor = num;
        }
        soma = soma + num;
        media = soma/c;
    }
    printf("\nDentres os numeros digitados %0.0f sao negativos\n", negativo);
    printf("\nO maior desses numeros eh %0.2f e o menor eh %0.2f\n", maior, menor);
    printf("\nA somatoria dos numeros eh %0.2f e a media entres eles eh %0.2f\n", soma, media);
}
