#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor;
    printf("Digite um valor: ");
    scanf("%i", &valor);
    if (valor == 10){
            printf("O numero digitado e igual a 10\n");
    }
    else {
            if (valor < 10){
                printf("O numero digitado e menor que 10\n");
            }
            else {
                printf("O numero digitado e maior que 10\n");
            }
    }
return 0;
}

