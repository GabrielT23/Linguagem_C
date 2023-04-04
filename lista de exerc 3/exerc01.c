#include<stdio.h>
main(){
	int X[100];
	int cont;
	for(cont = 0;cont<100;cont++)
	{
		//trecho de código
		if(X[cont]>0 && X[cont]%2==0 && cont%2!=0)
			scanf("%d", &X[cont]);
	}
	for(cont = 0; cont<100;cont++)
	{
		//trecho de código
			printf("X[%d] = %d\n", cont, X[cont]);
	}
}
