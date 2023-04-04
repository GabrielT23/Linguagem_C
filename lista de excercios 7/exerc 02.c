#include<stdio.h>
#include<stdlib.h>

int main(){
    int m, n;
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
    printf("A matriz digitada foi:\n");
    for(int l = 0; l < m; l++){
        for(int c = 0; c < n; c++){
            printf("%i ", matriz [l][c]);
        }
        printf("\n");
    }
    printf("Sua transposta eh:\n");
    for(int l = 0; l < n; l++){
        for(int c = 0; c < m; c++){
            printf("%i ", matriz [c][l]);
        }
        printf("\n");
    }
return 0;
}
