#include <stdio.h>
#include<stdlib.h>
float volume_esfera(float r){
   float volume;
   const float pi = 3.141592;
   volume = (4*pi*r*r*r)/3;
return volume;
}

int main(){
    float r, volume;
    printf("Digite o raio da esfera: ");
    scanf("%f", &r);
    volume = volume_esfera(r);
    printf("O volume da esfera eh: %0.2f", volume);
return 0;
}

