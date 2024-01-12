#include<stdio.h>
#include<stdlib.h>

#define DIM 100

float mediaV(int *vec,int dim);
int main(void){
	int vec[DIM];
	int dim;
	int i;
	do{
		printf("Introduzca el numero de elementos del vector: ");
		scanf("%d",&dim);
	}while(dim<=0);
	
	for(i=0;i<dim;i++){
		printf("Introduzca el dato(posicion %d)",i+1);
		scanf("%d",&vec[i]);
	}
	
	printf("La media del vector es: %.2f",mediaV(vec,dim));
	return 0;
}

float mediaV(int *vec,int dim){
	int i;
	float suma=0;
	for(i=0;i<dim;i++){
		suma+=vec[i];
	}
	
	return (suma/dim);
	
}
