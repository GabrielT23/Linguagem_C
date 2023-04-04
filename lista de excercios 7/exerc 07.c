#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, num, c, l;
    int cont = 0;
    printf("Digite a o total de linhas e colunas da matriz quadratica: ");
    scanf("%i", &n);
    int matriz[n][n];
    int x[n*n], y[n*n];
    for(l = 0; l < n; l++){
        for(c = 0; c < n; c++){
            printf("Digite o valor no local(%i, %i): ", l, c);
            scanf("%i", &matriz [l][c]);
        }
    }
    printf("Digite o numero que deseja procurar dentro da matriz: ");
    scanf("%i", &num);
    for(l = 0; l < n; l++){
        for(c = 0; c < n; c++){
            if(matriz[l][c] == num){
                x[cont] = l;
                y[cont] = c;
                cont++;
            }
        }
    }
    printf("O numero %i foi encontrado %i vezes nas posicoes:\n",num, cont);
    for(l = 0; l < cont; l++){
        printf("(%i, %i) ", x[l], y[l]);
    }
return 0;
}
