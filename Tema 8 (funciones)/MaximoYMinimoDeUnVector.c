#include<stdio.h>
#include<stdlib.h>

#define DIM 100
void leeVector(int *vec,int dim);
void presentaVector(int *vec,int dim);
void maxMinVector(int *vec,int dim,int *max, int *min);
int main(void){
	int vec[DIM];
	int dim;
	int max,min;
	printf("MINIMO Y MAXIMO DE UN VECTOR CON FUNCIONES\n");
	printf("=============================================\n");
	do{
		printf("Introduzca el numero de elementos del vector: ");
		scanf("%d",&dim);
	}while(dim<=0);
	
	leeVector(vec,dim);
	presentaVector(vec,dim);
	maxMinVector(vec,dim,&max,&min);
	printf("Maximo: %d\n",max);
	printf("Minimo: %d\n",min);
	return 0;
}

void leeVector(int *vec,int dim){
	int i;
	for(i=0;i<dim;i++){
		printf("Introduzca el dato(posicion %d)",i+1);
		scanf("%d",&vec[i]);
	}
	
}
void presentaVector(int *vec,int dim){
	int i;
	for(i=0;i<dim;i++){
		printf("| ");
		printf("%5d",vec[i]);
		printf("|\n");		
	}
	
}
void maxMinVector(int *vec,int dim,int *max, int *min){
	int i;
	*max=vec[0];
	*min=vec[0];
	for(i=0;i<dim;i++){
		if( (*max)<vec[i] ){
			*max=vec[i];
		}
		if( (*min)>vec[i]){
			*min=vec[i];
		}
	}
}
