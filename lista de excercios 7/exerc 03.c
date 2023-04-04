#include<stdio.h>
#include<stdlib.h>

int main(){
    int m, n, x;
    int cont1 = 0;
    int cont2 = 0;
    printf("Digite a o total de linhas da matriz: ");
    scanf("%i", &m);
    printf("Digite a o total de colunas da matriz: ");
    scanf("%i", &n);
    int matriz[m][n];
    for(int l = 0; l < m; l++){
        for(int c = 0; c < n; c++){
            printf("Digite o valor no local(%i, %i): ", l, c);
            scanf("%i", &matriz [l][c]);
        }
    }
    x = matriz [0][0]-1;
    for(int l = 0; l < n; l++){
        for(int c = 0; c < n; c++){
            if(matriz[l][c] > x){
                x = matriz[l][c];
            }
            else{
                cont1 = 1;
                break;
            }
        }
        if(cont1 != 0){
             break;
        }
    }
    if (cont1 != 0){
        x = matriz [0][0]+1;
        for(int l = 0; l < n; l++){
            for(int c = 0; c < n; c++){
                if(matriz[l][c] < x){
                    x = matriz[l][c];
                }
                else{
                    cont2 = 1;
                    break;
                }
            }
            if(cont2 != 0){
                 break;
            }
        }
    }
    if(cont1 == 0){
        printf("A matriz eh crescente.");
    }
    else if(cont2 == 0){
        printf("A matriz eh decrescente.");
    }
    else{
        printf("A matriz nao esta ordenada");
    }
return 0;
}
