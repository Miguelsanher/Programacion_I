#include<stdio.h>
#include<stdlib.h>

#define TAM 100

void leerv(long *vec,int dim);
void presentarVector(long *vec, int dim);
void iniciaVector(long *vec,int dim,long valor);

int main(void){
	int dim;
	long vec[TAM];
	long valor;
	
	do{
		printf("Introduzca el numero de elementos del vector: ");
		scanf("%d",&dim);
		
	}while(dim>TAM || dim<1);
	
	printf("Introduzca valor: ");
	scanf("%ld",&valor);
	
	leerv(vec,dim);
	presentarVector(vec,dim);
	
	iniciaVector(vec,dim,valor);
	presentarVector(vec,dim);
	return 0;
}

void leerv(long *vec,int dim){
	int i;
	for(i=0;i<dim;i++){
		printf("Introduzca nª en la posicion %d: ",i+1);
		scanf("%ld",vec+i);
	}
	
}

void presentarVector(long *vec, int dim){
	int i;
	printf("| ");
	for(i=0;i<dim;i++){
		printf("%8ld",vec[i]);
	}
	printf("  |\n");
}

void iniciaVector(long *vec,int dim,long valor){
	int i;
	for(i=0;i<dim;i++){
		vec[i]=valor;
	}
	
}
