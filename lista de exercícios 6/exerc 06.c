int main() {
	char palavra1[40], palavra2[40];
	int i, j, k, cont, contG, tamanho1, tamanho2 = 0;
	printf("Digite a primeira palavra: ");
	gets(palavra1);
	printf("Digite a segunda palavra: ");
	gets(palavra2);
	tamanho1 = strlen(palavra1);
	tamanho2 = strlen(palavra2);
	while(i < tamanho1){
		k = i;
		while (j < tamanho2) {
			if (palavra2[j] == palavra1[k]) cont++;
			j++; k++;
		}

		if (cont == tamanho2) contG++;
		j = 0; cont= 0; i++;
 	}

	printf("\n\"%s\" esta contido %d vezes em \"%s\".\n\n", palavra2, contG, palavra1);

	return 0;

}
