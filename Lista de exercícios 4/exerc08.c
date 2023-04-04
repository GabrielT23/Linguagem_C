#include <stdio.h>
#include <stdlib.h>
int main(){
    float salario, novo, aumento;
    printf("Digite o seu salario: ");
    scanf("%f", &salario);
    if (salario <= 600){
        novo = salario*1.3;
    }
    else if (salario > 600 && salario <= 1100){
        novo = salario * 1.25;
    }
    else if (salario > 1100 && salario <= 2400){
        novo = salario * 1.20;
    }
    else if (salario > 2400 && salario <= 3350){
        novo = salario * 1.15;
    }
    else{
        novo = salario * 1.1;
    }

    printf("O novo salario e %0.2f", novo);
}
