#include<stdio.h>
#include<stdlib.h>
int main(){
	float N1, N2, P1, P2, P, M, Nume;
	int ordem, x;
	ordem = 0;
	P= 0;
	Nume=0;
	x=0;
	while (x==0){

		ordem++;
		printf("A nota da diciplina %i:\n", ordem);
		scanf("%f", &N1);
		printf("Digite o peso da diciplina %i:\n", ordem);
		scanf("%f", &P1);system("cls");
		ordem++;
		printf("A nota da diciplina %i:\n", ordem);
		scanf("%f", &N2);
		printf("Digite o peso da diciplina %i:\n", ordem);
		scanf("%f", &P2);
		printf("para realizar a media, digite qualquer numero do teclado, para prosseguir com mais notas digite 0:\n");
		scanf("%i", &x);system("cls");
		P+=(P1+P2);
		Nume+=(N1*P1)+(N2*P2);
		M=Nume/P;
	}
	printf("a media das notas digitadas é =%1.3f",M);
	return 0;
}
