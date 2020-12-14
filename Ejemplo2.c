#include <stdio.h>
#include <stdlib.h>

struct complejo{
	double real;
	double ima;
};

typedef struct complejo complej;

int main(){
complej n1, n2, res;

puts("introduce nuemro complejo 1");
scanf("%lf, %lf", &n1.real,&n1.ima);

puts("introduce nuemro complejo 2");
scanf("%lf, %lf", &n2.real,&n2.ima);

res.real=n1.real+n2.real;
res.ima=n1.ima+n2.ima;
printf("El resultado es: %lf i + %lf j",res.real, res.ima);
}
