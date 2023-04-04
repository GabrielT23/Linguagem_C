#include <stdio.h>
#include <stdlib.h>

int main(){
    char ca;
    int n1;
    float n2;
    printf("Digite 3 caracteres: ");
    scanf("%c %d %f", &ca, &n1, &n2);
    printf("%c %d %f\n\n", ca, n1, n2);
    printf("%c\t%d\t%f\n\n", ca, n1, n2);
     printf("%c\n%d\n%f\n", ca, n1, n2);
return 0;
}


