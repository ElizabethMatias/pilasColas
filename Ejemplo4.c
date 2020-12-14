#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct coordenadas{
	float x;
	float y;
	float z;
};

float distancia(struct coordenadas a, struct coordenadas b);

int main(){
struct coordenadas puntoA={3.5,2.5,1.5};
struct coordenadas puntoB={5.3,3.1,6.3};
float d;
d=distancia(puntoA, puntoB);
printf("%f\n",d);
return 0;
}

float distancia(struct coordenadas a, struct coordenadas b){
	return sqrtf(pow(a.x-b.x,2.0)+pow(a.y-b.y,2.0)+pow(a.z-b.z,2.0));
}
