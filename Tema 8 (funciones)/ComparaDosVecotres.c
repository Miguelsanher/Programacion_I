#include<stdio.h>
#include<stdlib.h>

#define DIM 100
void leeVector(float *vec,int dim);
int comparaVectores(float *vec1,float *vec2,int dim);
int main(void){
	int dim;
	float vec1[DIM];
	float vec2[DIM];
	
	do{
		printf("Introduzca el numero de elementos del vector: ");
		scanf("%d",&dim);
	}while(dim<=0);
	
	printf("VECTOR 1\n");
	leeVector(vec1,dim);
	printf("VECTOR 2 \n");
	leeVector(vec2,dim);
	if( comparaVectores(vec1,vec2,dim)==1 ){
		printf("Los vectores son iguales\n");
	}else{
		printf("Los vecotres NO son iguales\n");
	}
	return 0;
}


void leeVector(float *vec,int dim){
	int i;
	for(i=0;i<dim;i++){
		printf("Introduzca el dato(posicion %d)",i+1);
		scanf("%f",&vec[i]);
	}
	
}

int comparaVectores(float *vec1,float *vec2,int dim){
	int i;
	int flag=1;
	for(i=0;i<dim && flag==1;i++){
		if(vec1[i]!=vec2[i]){
			flag=0;
		}
	}
	return flag;
}
