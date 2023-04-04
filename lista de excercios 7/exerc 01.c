#include<stdio.h>
#include<stdlib.h>

int main(){
    int m, n;
    int dif = 0;
    printf("Digite a o total de linhas da matriz: ");
    scanf("%i", &m);
    printf("Digite a o total de colunas da matriz: ");
    scanf("%i", &n);
    int matriz[m][n], transposta[n][m];
    for(int l = 0; l < m; l++){
        for(int c = 0; c < n; c++){
            printf("Digite o valor no local(%i, %i): ", l, c);
            scanf("%i", &matriz [l][c]);
        }
    }
    printf("A matriz digitada foi:\n");
    for(int l = 0; l < m; l++){
        for(int c = 0; c < n; c++){
            printf("%i ", matriz [l][c]);
        }
        printf("\n");
    }
    for(int l = 0; l < n; l++){
        for(int c = 0; c < m; c++){
            transposta[l][c] = matriz[c][l];
        }
    }
    printf("Sua transposta eh:\n");
     for(int l = 0; l < n; l++){
        for(int c = 0; c < m; c++){
            printf("%i ", transposta[l][c]);
        }
        printf("\n");
    }
    if(n == m){
        for(int l = 0; l < m; l++){
            for(int c = 0; c < n; c++){
                if(transposta[l][c] = matriz[l][c]){

                }
                else{
                    dif++;
                }
            }
        }
        if(dif == 0){
        printf("A matriz eh simetrica.");
    }
    }
    else{
        printf("A matriz nao eh simetrica.");
    }
return 0;
}

