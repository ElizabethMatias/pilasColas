#include <stdio.h>
#include <stdlib.h>
int main(){
	int var1 = 10;
	int *apEntero=&var1;
	printf("Valor de var1: %d",var1);
	printf("\n\nValor de apEntero: %d", apEntero);
	*apEntero=30;
	printf("\n\nValor de var1: %d",var1);
}
