#include <stdio.h>
#include<stdlib.h>
float F_IMC(float p, float a){
   float imc;
   imc = p/(a * a);
return imc;
}

int main(){
    float peso, altura, IMC;
    printf("Digite o peso da pessoa em kg: ");
    scanf("%f", &peso);
    printf("Digite a altura da pessoa metros: ");
    scanf("%f", &altura);
    IMC = F_IMC(peso, altura);
    printf("O IMC da pessoa eh: %0.2f", IMC);
return 0;
}
