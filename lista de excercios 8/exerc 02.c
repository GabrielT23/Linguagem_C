#include <stdio.h>
#include<stdlib.h>
void fmes(int mes){
    if(mes == 1)
        printf("janeiro(31 dias)");
    else if(mes == 2)
        printf("fevereiro(28/29 dias)");
    else if(mes == 3)
        printf("marco(31 dias)");
    else if(mes == 4)
        printf("abril(30 dias)");
    else if(mes == 5)
        printf("maio(31 dias)");
    else if(mes == 6)
        printf("junho(30 dias)");
    else if(mes == 7)
        printf("julho(31 dias)");
    else if(mes == 8)
        printf("agosto(31 dias)");
    else if(mes == 9)
        printf("setembro(30 dias)");
    else if(mes == 10)
        printf("outubro(31 dias)");
    else if(mes == 11)
        printf("novembro(30 dias)");
    else if(mes == 12)
        printf("dezembro(31 dias)");
}

int main(){
    int mes;
    do{
        printf("Digite um mes numero[1 a 12]: ");
        scanf("%i", &mes);
    }while(mes<1 || mes>12);
    fmes(mes);
return 0;
}
