#include <stdio.h>
#include <stdlib.h>
int main(){
    int num;
    int resto;
    printf("Digite um numero: ");
    scanf("%i", &num);
    resto = num % 2;
    if (resto == 0){
        printf("O numero digitado e par");
    }
    else{
        printf("O numero digitado e impar");
    }

return 0;
}
