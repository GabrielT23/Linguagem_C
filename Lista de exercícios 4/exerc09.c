#include <stdio.h>
#include <stdlib.h>
int main(){
    float a, b, c;
    printf("Digite 3 seguimentos de reta: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a+b>c && a+c>b && b+c>a){
        if (a == b && b == c){
            printf("Os seguimentos digitados podem formar um triangulo equilatero.");
        }
        else if (a != b && b != c && a != c){
            printf("Os seguimentos digitados podem formar um triangulo escaleno.");
        }
        else{
            printf("Os seguimentos digitados podem formar um triangulo isosceles.");
        }
    }
    else{
        printf("Os seguimentos digitados nao podem formar um triangulo");
    }
return 0;
}
