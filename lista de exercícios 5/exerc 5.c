#include <stdio.h>
#include<stdlib.h>

int main(){
    int a1, n;
    int c = 1;
    printf("Digite o primeiro termo da pa: ");
    scanf("%i", &a1);
    printf("Quantos termos quer mostrar: ");
    scanf("%i", &n);
    for (; c <= n; c++){
        printf("%i -> ", a1);
        a1 = a1 + 4;
    }
    printf("...");
return 0;
}
