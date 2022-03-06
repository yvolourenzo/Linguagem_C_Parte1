#include <stdio.h>

int main (void) {
	//printf("%d\n",0678); return 0; erro original
	// o erro era a formatação em D sendo que queriamos saida em octal
	// e o numero 8 no final de 0678 apresenta erro pois octal vai de 0 a 7.
    printf("%o\n",0677); return 0;
	return 0;
	}
