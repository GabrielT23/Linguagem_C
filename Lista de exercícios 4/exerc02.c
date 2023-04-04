#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor;
    printf("Digite um valor: ");
    scanf("%i", &valor);
    if (valor == 0){
            printf("O numero digitado e igual a 0\n");
    }
    else {
            if (valor < 0){
                printf("O numero digitado e negativo\n");
            }
            else {
                printf("O numero digitado e positivo\n");
            }
    }
return 0;
}
