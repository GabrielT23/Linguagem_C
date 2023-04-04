#include <stdio.h>
#include<stdlib.h>

int main(){
    int quant, m_4, en_4_e_7, m_7 = 0;
    float soma_m_4, media_m_4, soma_en_4_e_7, media_en_4_e_7, soma_m_7, media_m_7, media_geral, soma_geral = 0;
    printf("Quantas notas quer avaliar? ");
    scanf("%i", &quant);
    float notas[quant];
    float menor_4[100], entre_4_e_7[100], maior_7[100];
    for (int cont = 0; cont < quant; cont++){
        int i = cont+1;
        printf("digite o %i* numero: ", i);
        scanf("%f", &notas[cont]);
        while(notas[cont] < 0 || notas[cont] > 10){
            printf("nota invalida! digite novamente: ");
            scanf("%f", &notas[cont]);
        }
        soma_geral += notas[cont];
        media_geral = soma_geral/(cont+1);
        if (notas[cont] < 4){
            menor_4[m_4] = notas[cont];
            m_4++;
            soma_m_4 += notas[cont];
            media_m_4 = soma_m_4/m_4;
        }
        if (notas [cont] >= 4 && notas [cont] < 7){
            entre_4_e_7 [en_4_e_7] = notas[cont];
            en_4_e_7++;
            soma_en_4_e_7 += notas[cont];
            media_en_4_e_7 = soma_en_4_e_7/en_4_e_7;
        }
        if (notas[cont] >= 7){
            maior_7[m_7] = notas[cont];
            m_7++;
            soma_m_7 += notas[cont];
            media_m_7 = soma_m_7/m_7;
        }
    }
    printf("Dentre as notas digitadas, segue que: \n");
    printf("as notas menores que 4 sao: ");
    for (int cont = 0; cont < m_4; cont++){
        printf("%0.2f ", menor_4[cont]);
    }
    printf("\nA media entre elas eh: %0.2f \n", media_m_4);
    printf("as notas entre 4 e 7 sao: ");
    for (int cont = 0; cont < en_4_e_7; cont++){
        printf("%0.2f ", entre_4_e_7[cont]);
    }
    printf("\nA media entre elas eh: %0.2f \n", media_en_4_e_7);
    printf("as notas maiores que 7 sao: ");
    for (int cont = 0; cont < m_7; cont++){
        printf("%0.2 ", maior_7[cont]);
    }
    printf("\nA media entre elas eh: %0.2f \n", media_m_7);
    printf("A media geral entre as notas eh: %0.2f ", media_geral);
return 0;
}

