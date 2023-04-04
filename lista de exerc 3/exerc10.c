#include <stdio.h>
#include <stdlib.h>

int main(){
    int dia, mes, ano;
    printf("Digite o dia, o mes e o ano:\n");
    scanf("%d %d %d", &dia, &mes, &ano);
    printf("%02d/%02d/%d", dia, mes, ano);
return 0;
}
