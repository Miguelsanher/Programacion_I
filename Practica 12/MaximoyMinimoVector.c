#include<stdio.h>
#include<stdlib.h>

#define TAM 100
/*Miguel Sánchez Hernández
  GitHub:Miguelsanher    */
void leeVector(int *vt,int dim);
void presentaVector(int *vt,int dim);
void maxMinVector(int *vt,int dim, int*max,int*min);
int main(void){
	int dim;
	int vt[TAM];
	int max;
	int min;
	printf("MAXIMO Y MINIMO DE UN VECTOR\n");
	printf("=====================================\n");
	//a partir de ahora intentare comentar mi codigo en ingles
	//search the size
	do{
		printf("Introduzca el numero de numeros a introducir: ");
		scanf("%d",&dim);
	}while(dim<1 || dim>100);
	
	leeVector(vt,dim);
	presentaVector(vt,dim);
	maxMinVector(vt,dim,&max,&min);
	
	printf("Maximo: %d Minimo: %d\n",max,min);
	system("pause");
	return 0;
}

void leeVector(int *vt,int dim){
	int i;
	for(i=0;i<dim;i++){
		printf("Introduce el numero en posicion %d : ",i+1);
		scanf("%d",vt+i);
	}
}
void presentaVector(int *vt,int dim){
	int i;
	printf("VECTOR\n");
	for(i=0;i<dim;i++){
		printf("%4d",vt[i]);
		printf("\n");
	}
	
}
void maxMinVector(int *vt,int dim, int*max,int*min){
	int i;
	*max=vt[0];
	*min=vt[0];
	for(i=0;i<dim;i++){
		if(vt[i]>(*max))
			*max=vt[i];
		if(vt[i]<(*min))
			*min=vt[i];
	}
	
}
