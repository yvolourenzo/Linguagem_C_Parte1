#include <stdio.h>

int main(void){
	char v = 'A';
	printf("%d\n",sizeof(int)); //4
	printf("%d\n",sizeof(1.2)); //8
	printf("%d\n",sizeof(v));   //1
	printf("%d\n",sizeof(v+1)); //4
	return 0;
	}
