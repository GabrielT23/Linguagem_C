#include <stdio.h>
#include<stdlib.h>

int main(){
    int quant, quant_par, quant_impar = 0;
    printf("Quantos numeros quer avaliar? ");
    scanf("%i", &quant);
    int nums[quant];
    int pares[100], impares[100];
    for (int cont = 0; cont < quant; cont++){
        int i = cont+1;
        printf("digite o %i* numero: ", i);
        scanf("%i", &nums[cont]);
        if (nums[cont]%2 == 0){
            pares[quant_par] = nums[cont];
            quant_par++;
        }
        else{
            impares[quant_impar] = nums[cont];
            quant_impar++;
        }
    }
    printf("Os numeros pares dentre os valores digitados sao: ");
    for (int cont = 0; cont < quant_par; cont++){
        printf("%d ", pares[cont]);
    }
    printf("\nOs numeros impares dentre os valores digitados sao: ");
    for (int cont = 0; cont < quant_impar; cont++){
        printf("%d ", impares[cont]);
    }
return 0;
}
