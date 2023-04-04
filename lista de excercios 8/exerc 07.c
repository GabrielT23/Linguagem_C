#include <stdio.h>
#include<stdlib.h>
int potencia(int k, int j){   // inicio da fun�ao
    if (j == 0){              // testa para o valor do expoente 0
        return 1;
    }
    return k * potencia(k, j - 1); // executa a chamada recursiva para o calculo da potencia
}

int main(){    // inicia a fun�ao principal
    int k, j;  // defini�ao das variaveis
    printf("Digite o valor da base: ");
    scanf("%i", &k);   // leitura do valor da base
    printf("Digite o valor do expoente: ");
    scanf("%i", &j); // leitura do valor do expoente
    printf("O Resultado da potencia eh: %i", potencia(k, j)); // chamada da fun�ao potencia e exibi�ao do resultado

return 0;
}
