#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);
    printf("os numeros digitados foram %d e %d\n", n1, n2);
    n1 = n1+n2;
    n2 = n1-n2;
    n1 = n1-n2;
    printf("trocando de valores fica %d e %d/n", n1, n2);
    return 0;
}

