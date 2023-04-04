#include <stdio.h>
#include <stdlib.h>
int main(){
    int num1, num2, resultado;
    char operador;
    printf("Digite um numero: ");
    scanf("%i", &num1);
    getchar();
    printf("informe o operador (+,-,*)");
    scanf("%c", &operador);
    getchar();
    printf("Digite um numero: ");
    scanf("%i", &num2);
    switch(operador){
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
    }
    printf("O resultado da conta e %i", resultado);
}




