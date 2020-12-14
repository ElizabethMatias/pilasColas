#include <stdio.h>
#include <stdlib.h>

struct Cola{
	int inicio;
	int final;
	int dato[4];
};

typedef struct Cola tCola;

int insertar(tCola *cola, int valor);
int remover(tCola *cola); 
void crearCola(tCola *cola);
int vacia(tCola *cola);
int llena(tCola *cola,int tam);
int finalC(tCola *cola);
void vaciar(tCola *cola);
void mostrar(tCola *cola);

void main(void){
	int num,op,i=0;
	tCola cola;
	crearCola(&cola);
	do{
		puts("1) Meter un elemento a la cola");
		puts("2) Sacar elementos de la cola");
		puts("3) Tamaño de la cola");
		puts("4) Vaciar cola");
		puts("5) Mostrar la cola");
		puts("6) Salir");
		scanf("%i",&op);
		switch(op){
			case 1:
				if(llena(&cola,4)==1){
					printf("\nQue dato desea ingresar\n");
					scanf("%d",&num);
					insertar(&cola,num);
				}
				else{
					printf("\nCola llena\n");
				}
			break;
			case 2:
				if(vacia(&cola)==0)
					printf("\nEl dato eliminado es: %d\n",remover(&cola));
				else
					printf("\nCola vacia\n");
			break;
			case 3:
				printf("\nHay %d datos en la cola\n", finalC(&cola));
			break;
			case 4:
				if (vacia(&cola)==0)
					vaciar(&cola);
				else
					printf("\nCola vacia\n");
			break;
			case 5:
				if (vacia(&cola)==0)
					mostrar(&cola);
				else
					printf("\nCola vacia\n");
			break;
			case 6:
				i=1;
			break;
			default:
				printf("\nOpcion Incorrecta\n");
			break;
		}
	}while(i==0);
	
}

int insertar(tCola *cola, int valor){
	cola->dato[cola->final]=valor;
	cola->final++;
}
int remover(tCola *cola){
	int x, i;
	x=cola->dato[cola->inicio];
	for(i=0;i<cola->final-1;i++){
		cola->dato[i]=cola->dato[i+1];
	}
	cola->final--;
	return x;
}
void crearCola(tCola *cola){
	cola->final=0;
	cola->inicio=0;
}
int vacia(tCola *cola){
	if(cola->final==cola->inicio){
		return 1;
	}
	else{
		return 0;
	}
}
int llena(tCola *cola,int tam){
	if(cola->final==tam){
		return 0;
	}
	else{
		return 1;
	}
}
int finalC(tCola *cola){
	return cola->final;
}
void vaciar(tCola *cola){
	int i,x;
	while(cola->inicio!=cola->final){
		x=cola->dato[cola->inicio];
		for(i=0;i<cola->final-1;i++){
			cola->dato[i]=cola->dato[i+1];
		}
		cola->final--;
	}
}
void mostrar(tCola *cola){
	int i;
	for(i=0;i<cola->final;i++){
		printf("\nEl elemento %i de la cola es %d\n", i+1, cola->dato[i]);
	}
}
