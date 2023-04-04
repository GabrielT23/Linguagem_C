#include <stdio.h>
#include<stdlib.h>

int main(){
    int num, fatorial, n;
    printf("Digite um numero: ");
    scanf("%i", &num);
    n = num;
    fatorial = 1;
    while (n > 0){
        fatorial = fatorial * n;
        n--;
    }
    printf("O valor do fatorial de %i eh %i", num, fatorial);
return 0;
}
