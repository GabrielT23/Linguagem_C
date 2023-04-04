#include <stdio.h>
#include<stdlib.h>
float volume_cilindro(float r, float a){
   float volume;
   const float pi = 3.141592;
   volume = a*pi*r;
return volume;
}

int main(){
    float r, a, volume;
    printf("Digite o raio do cilindro: ");
    scanf("%f", &r);
    printf("Digite a altura do cilindro: ");
    scanf("%f", &a);
    volume = volume_cilindro(r, a);
    printf("O volume do cilindro eh: %0.2f", volume);
return 0;
}
