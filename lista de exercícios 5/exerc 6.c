#include <stdio.h>
#include<stdlib.h>

int main(){
    int n1, n2, c;
    float soma, media = 0;
    printf("Digite outro numero: ");
    scanf("%i", &n1);
    printf("Digite outro numero: ");
    scanf("%i", &n2);
    c = 0;
    if (n1 < n2){
        while (n1 <= n2){
            c++;
            soma = soma + n1;
            media = soma/c;
            n1++;
        }
         printf("A soma do intervalo entre os numeros eh %0.2f e a media do intervalo eh %0.2f.\n", soma, media);
    }
    else if (n2 < n1){
       while (n2 <= n1){
            c++;
            soma = soma + n2;
            media = soma/c;
            n2++;
       }
       printf("A soma do intervalo entre os numeros eh %0.2f e a media do intervalo eh %0.2f.\n", soma, media);
    }
    else {
        printf("Os numeros digitados sao iguais e nao ha intervalo entre eles");
    }
return 0;
}
