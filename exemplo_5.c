#include <stdio.h>

int main (void){
    int idade;
	char sexo;
	printf("Digite sua idade e seu sexo: ");
    scanf("%d %c",&idade,&sexo);
	printf("Sua idade eh %d e seu sexo eh %c\n",idade,sexo);
	return 0;
	}
