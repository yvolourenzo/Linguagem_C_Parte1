#include <stdio.h>

int main (void){
	float quilometros,litros,media;
	printf("digite os km e litros");
	scanf("%f %f",&quilometros,&litros);
	media = quilometros / litros;
	printf("%f",media);
	return 0;
	}
