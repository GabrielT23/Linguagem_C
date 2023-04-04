#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Digite a o total de linhas e colunas da matriz quadratica: ");
    scanf("%i", &n);
    int matriz[n][n];
    for(int l = 0; l < n; l++){
        for(int c = 0; c < n; c++){
            printf("Digite o valor no local(%i, %i): ", l, c);
            scanf("%i", &matriz [l][c]);
        }
    }
    for(int l = 0; l < n; l++){
        for(int c = 0; c < n; c++){
            if(c > l){
                matriz [l][c] = 0;
            }
        }
    }
    for(int l = 0; l < n; l++){
        for(int c = 0; c < n; c++){
            printf("%i ", matriz [l][c]);
        }
        printf("\n");
    }
return 0;
}
