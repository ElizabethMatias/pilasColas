#include <stdio.h>
#include <stdlib.h>

struct ColaC{
	int inicio; 
	int final;
	int dato[5];
};

typedef struct ColaC tColaC;

void insertar(tColaC *colaC,int valor);
int remover(tColaC*colaC);
void crearCola(tColaC*colaC);
int vacia(tColaC*colaC);
int llena(tColaC*colaC);

void main(void){
	int i=0, num,op;
	tColaC colaC;
	crearCola(&colaC);
	do{
		puts("1) Meter un elemento");
		puts("2) Sacar un elemento");
		puts("3) Salir");
		printf("opcion:\n");
		scanf("%i,&op");
		switch(op){
			case 1:
				if(llena(&colaC)==1){
					printf("\n Que dato desea insertar");
					scanf("%d",&num);
					insertar(&colaC,num);
				}
				else{
					printf("\nCola llena\n");
				}
			break;
			case 2:
				if(vacia(&colaC)==0){
					printf("\nEl dato eliminado es: %d\n",remover(&colaC));
				}
				else{
					printf("\nCola vacia\n");
				}
			break;
			case 3:
				i=1;
				printf("\n\tHata luego");
			break;
			default:
				printf("\nOpcion Incorrecta\n");
			break;
		}
	}while(i==0);
}

void insertar(tColaC*colaC,int valor){
	colaC->dato[colaC->final]=valor;
	if(colaC->final==5){
		colaC->final=1;
	}
	else{
		colaC->final++;
	}
	if(colaC->inicio==0){
		colaC->inicio=1;
	}
}
int remover(tColaC*colaC){
	int x;
	x=colaC->dato[colaC->inicio];
	if(colaC->inicio=5){
		colaC->inicio=1;
	}
	else{
		colaC->inicio++;
	}
	if(colaC->inicio==colaC->final){
		colaC->inicio=0;
		colaC->final=0;
	}
}
void crearCola(tColaC*colaC){
	colaC->final=0;
	colaC->inicio=0;
}
int vacia(tColaC*colaC){
	if(colaC->inicio==0 && colaC->final==0){
		return 1;
	}
	else{
		return 0;
	}
}
int llena(tColaC*colaC){
	if(colaC->final=5&&colaC->inicio==1)
		return 0;
	else
		return 1;
}
