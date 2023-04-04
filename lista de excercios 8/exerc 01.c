#include <stdio.h>
#include<stdlib.h>
float fmaior(int n1, int n2){
    float maior;
    if (n1 < n2){
        maior = n2;
    }
    else if (n2 < n1){
        maior = n1;
    }
    else {
        maior = 0;
    }
return maior;
}
int main(){
    float n1, n2, maior;
    printf("Digite um numero: ");
    scanf("%f", &n1);
    printf("Digite outro numero: ");
    scanf("%f", &n2);
    maior = fmaior(n1, n2);
    if (maior == 0){
        printf("Os numeros sao iguais.");
    }
    else{
        printf("O maior numero eh %0.2f", maior);
    }
return 0;
}

