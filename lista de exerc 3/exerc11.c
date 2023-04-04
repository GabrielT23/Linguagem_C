#include <stdio.h>
#include <stdlib.h>

int main(){
    const int constante = 5;
    printf("O valor da constante vale %d\n", constante);
    constante = 4; /*O compilador acusou um erro */
    printf("O novo valor da constante vale %d\n", constante);
return 0;
}

