#include <stdio.h>

int main(void){
	int xp , yp , xq , yq, distanciaA,distanciaB,final;
	printf("Digite o xp e xq : ");
	scanf("%d %d",&xp,&xq);
	printf("Digite o yp e yq : ");
	scanf("%d %d",&yp,&yq);
    distanciaA = xp - xq ;
	distanciaB = yp - yq ;
	printf("%d %d",distanciaA,distanciaB);
	final = (distanciaA*distanciaA) + (distanciaB*distanciaB);
	printf("%d \n",final*final);
	return 0;
	}
