#include <stdio.h>

int main(void){
    float celsius, fahren;
	printf("Digite os Fahrenheit: ");
	scanf("%f",&fahren);
	celsius = (fahren - 32) * 5 / 9;
	printf("%.0f F em C = %.0f ",fahren,celsius);
	return 0;
	}
