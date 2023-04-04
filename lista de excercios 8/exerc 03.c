#include <stdio.h>
#include<stdlib.h>
float F_celsius(float F){
   float celsius;
   celsius = (F-32)*5/9;
return celsius;
}

int main(){
    float F, C;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &F);
    C = F_celsius(F);
    printf("A temperatura em celsius eh: %0.2f", C);
return 0;
}
