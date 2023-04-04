#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Digite a o total de linhas e colunas da matriz quadratica: ");
    scanf("%i", &n);
    int matriz[n][n];
    for(int l = 0; l < n; l++){
        for(int c = 0; c < n; c++){
            if(l == c){
                matriz[l][c] = 1;
            }
            else if(c + l == n-1){
                matriz[l][c] = 1;
            }
            else{
                matriz[l][c] = 0;
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

