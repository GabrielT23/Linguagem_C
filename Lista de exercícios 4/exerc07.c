#include <stdio.h>
#include <stdlib.h>
int main(){
    int num1, num2;
    int resto;
    printf("Digite dois numeros: ");
    scanf("%i %i", &num1, &num2);
    resto = num1 % num2;
    if (resto == 0){
        printf("primeiro valor e divisivel pelo segundo");
    }
    else{
        printf("primeiro nao e valor e divisivel pelo segundo");
    }

return 0;
}

