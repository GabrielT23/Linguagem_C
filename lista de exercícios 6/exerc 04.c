int main(){
    char palavra[100], copia[100];
    int tamanho, diferentes = 0, j = 0;
    printf("Digite um texto[obs: sem acento]: ");
    scanf("%100[^\n]", palavra);
    for(int i = 0; palavra[i]; i++){
		palavra[i] = toupper(palavra[i]);
	}
    for(int i = 0; i < strlen(palavra); i++){
        if(palavra[i] != '!' && palavra[i] != '?' && palavra[i] != ' ' && palavra[i] != '.' && palavra[i] != ',')
            copia[j++] = palavra[i];
    }
    copia[j] = '\0';
    tamanho = strlen(copia);
    tamanho--;
    for(int i = 0; i < strlen(copia); i++){
        if(copia[i] != copia[tamanho]){
            diferentes++;
        }
        tamanho--;
    }

    if(diferentes == 0){
        printf("\nEh palindroma...\n");
    }
    else{
        printf("\nNao eh palindroma...\n");
    }

return 0;
}


