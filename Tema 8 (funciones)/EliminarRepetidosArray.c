#include<stdlib.h>
#include<stdio.h>

//el objetivo es introducir una cadena y que la debuelva
//sin repetidos
#define TAM 100
void leerVector(int *vec,int dim);
void imprimirVector(int *vec,int dim);
void quitarRepetidos1D(int *vec1,int *vec2,int dim,int *dim2);
int main(void){
	int vec1[TAM];
	int vec2[TAM];
	int dim,dim2;
	
	do{
		printf("Introduce el numero de numeros del array: ");
		scanf("%d",&dim);
	}while(dim<1 || dim>TAM);
	
	leerVector(vec1,dim);
	imprimirVector(vec1,dim);
	quitarRepetidos1D(vec1,vec2,dim,&dim2);
	imprimirVector(vec2,dim2);
}

void leerVector(int *vec,int dim){
	int i;
	for(i=0;i<dim;i++){
		printf("Introduce posicion(%d)",i+1);
		scanf("%d",vec+i);
	}
}
void imprimirVector(int *vec,int dim){
	int i;
	for(i=0;i<dim;i++){
		printf("|");
		printf("%4d",vec[i]);
		printf("|\n");
	}
	printf("\n");
}
void quitarRepetidos1D(int *vec1,int *vec2,int dim,int*dim2){
	int repetido=0;
	int i,j,k;
	i=0;
	j=0;
	k=0;
	for(i=0;i<dim;i++){
	
		repetido=0;
		for(k=0;k<j && repetido==0;k++){
			if(vec1[i]==vec2[k])
				repetido=1;
		}
		if(repetido==1){
			//i++;
		}else{
			vec2[j]=vec1[i];
			//i++;
			j++;
		}
	}
	*dim2=j;
}
