#include <stdio.h>
#include<stdlib.h>

int main(){
    int num, divisor, resto, cont;
    printf("Digite um numero: ");
    scanf("%i", &num);
    divisor = 2;
    cont = 0;
    while (divisor < num){
        resto = num % divisor;
        if (resto == 0){
            cont++;
        }
        divisor++;
    }
    if (cont == 0){
        printf("o numero digitado eh primo, pois so eh divisivel por 1 e por ele mesmo.");
    }
    else{
        printf("o numero digitado nao eh primo, pois eh divisivel por %i numero(s) alem do 1 e dele mesmo.", cont);
    }
return 0;
}

