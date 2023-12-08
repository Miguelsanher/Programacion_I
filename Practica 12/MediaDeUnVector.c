#include<stdio.h>
#include<stdlib.h>

float mediaVector(int *v,int dim);
#define DIM 100
/*Miguel Sánchez Hernández
  GitHub:Miguelsanher    */


int main(void){
	int vector[DIM];
	int dim,i;
	float media;
	
	printf("MEDIA ARITMETICA DE UN VECTOR\n");
	printf("=====================================\n");
	
	do{
		printf("Introduzca dim :");
		scanf("%d",&dim);
		
	}while(dim<=0 || dim>100);
	
	//leer el vector
	for(i=0;i<dim;i++){
		printf("Introduzca el elemento %d : ",i+1);
		scanf("%d",vector+i);
	}
	
	
	media= mediaVector(vector,dim);
	printf("La media es %.3f \n",media);
	system("pause");
	return 0;
}


float mediaVector(int *v,int dim){
	int i;
	float suma=0;
	for(i=0;i<dim;i++){
		suma+=v[i];
	}
	
	return (suma/dim);
}
