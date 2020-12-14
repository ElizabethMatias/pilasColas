#include <stdio.h>
#include <stdlib.h>
int main(){
	int a, *b;
	a=2;
	b=(int*)malloc(sizeof(int)*100);
	*b=8;
	printf("%i \n",*b);
	printf("%i \n",b);
	printf("%i \n",a);
	free(b);
//int, float, string, char...
}
