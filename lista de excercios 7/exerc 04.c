#include<stdio.h>
#include<stdlib.h>

int main(){
    int m, n, r, f;
    printf("Digite a o total de linhas da matriz A: ");
    scanf("%i", &m);
    printf("Digite a o total de colunas da matriz A: ");
    scanf("%i", &n);
    int matriz_A[m][n];
    printf("Digite a o total de linhas da matriz B: ");
    scanf("%i", &r);
    printf("Digite a o total de colunas da matriz B: ");
    scanf("%i", &f);
    int matriz_B[r][f];
    if (n == r){
        printf("\n<<<<<<<<<< MATRIZ A >>>>>>>>>>\n");
        for(int l = 0; l < m; l++){
            for(int c = 0; c < n; c++){
                printf("Digite o valor no local(%i, %i): ", l, c);
                scanf("%i", &matriz_A[l][c]);
            }
        }
        printf("\n<<<<<<<<<< MATRIZ B >>>>>>>>>>\n");
        for(int l = 0; l < r; l++){
            for(int c = 0; c < f; c++){
                printf("Digite o valor no local(%i, %i): ", l, c);
                scanf("%i", &matriz_B[l][c]);
            }
        }
        int matriz_C[f][m];
        for(int l = 0; l < f; l++){
            for(int c = 0; c < m; c++){
                matriz_C[l][c] = 0;
                for(int j = 0; j < n; j++){
                    matriz_C[l][c] += matriz_A[l][j]*matriz_B[j][c];
                    }
            }

        }
        printf("A matriz resultante da multiplicacao dessas duas matrizes eh:\n");
        for(int l = 0; l < m; l++){
            for(int c = 0; c < f; c++){
                printf("%i ", matriz_C[l][c]);
            }
            printf("\n");
        }
    }
    else{
        printf("Nao eh possivel multiplicar essas duas matrizes.");
    }
return 0;
}
