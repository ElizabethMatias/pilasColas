#include <stdio.h>
#include <stdlib.h>

struct Pila{
	int tope;
	int dato[4];
};

typedef struct Pila t_Pila;

int pop(t_Pila* Pila);
void push(t_Pila* Pila,int valor);
void crearPila(t_Pila* Pila);
int vacia(t_Pila*Pila);
int llena(t_Pila*Pila,int tam);
int tope(t_Pila* Pila);
void vaciar(t_Pila*Pila,int tam);
void mostrar(t_Pila*Pila);

void main(void){
	t_Pila pila;
	int num,i=0,op;
	crearPila(&pila);
	do{
		puts("1) Meter un elemento");
		puts("2) Sacar un elemento");
		puts("3) Tamaño de la Pila");
		puts("4) Vaciar toda la Pila");
		puts("5) Mostrar la Pila");
		puts("6) Salir");
		scanf("%i",&op);
		switch(op){
			case 1:
				if(llena(&pila,4)==0){
					printf("\nDato que desea ingresar a la pila\n");
					scanf("%d",&num);
					push(&pila,num);
				}
				else{
					printf("\nPila llena\n");
				}
			break;                      
			case 2:
				if(vacia(&pila)==0){
					printf("\nEl dato eliminado es: %d\n",pop(&pila));
				} 
				else{
					printf("\nPila vacia\n");
				}                 
			break;
			case 3:
				printf("\nHay %d datos\n",topeP(&pila));
			break;
			case 4:
				if(vacia(&pila)==0){
					vaciar(&pila,topeP(&pila));
				} 
				else{
					printf("\nPila vacia\n");
				}  
			break;
			case 5:
				if(vacia(&pila)==0){
					mostrar(&pila);
				} 
				else{
					printf("\nPila vacia\n");
				}  
			break;
			case 6:
				printf("\nAdios...\n");
			break;
			default:
				printf("\nOpcion Incorrecta");
			break;
		}
	}while(i==0 && i!=1);
}

int pop(t_Pila* Pila){
	 int x =Pila->dato[Pila->tope];
	 Pila->tope--;
	 return x;
}
void push(t_Pila* Pila,int valor){
	Pila->dato[Pila->tope]=valor;
	Pila->tope++;
}
void crearPila(t_Pila* Pila){
	Pila->tope=0;
}
int vacia(t_Pila*Pila){
	if(Pila->tope==0){
		return 1;
	}
	else{
		return 0;
	}
}
int llena(t_Pila*Pila,int tam){
	if(Pila->tope==tam){
		return 1;
	}
	else{
		return 0;
	}
}
int topeP(t_Pila*Pila){
	return Pila->tope;
}
void vaciar(t_Pila*Pila,int tam){
	int i;
	for(i=0;i<tam;i++){
		Pila->tope--;
	}
}
void mostrar(t_Pila*Pila){
	int i;
	for(i=0;i<Pila->tope;i++){
		printf("\nEl elemento  %i de la pila es %d\n",i+1, Pila->dato[i]);
	}
}
