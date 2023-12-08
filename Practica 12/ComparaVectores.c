#include<stdio.h>
#include<stdlib.h>
/*Miguel Sánchez Hernández
  GitHub:Miguelsanher    */
void leeVector(double *vt,int dim);
void presentaVector(double *vt,int dim);
int comparaVectores(double *vt1,double *vt2,int dim);
int main(void){
	int dim;
	double vt1[100];
	double vt2[100];
	printf("COMPARA DOS VECTORES SALA DE PRUEBAS\n");
	printf("=====================================\n");
	//to test the fuction we create a system to input the vectors
	//we could put the vectors in the program also
	do{
		printf("Introduzca el numero de numeros a introducir: ");
		scanf("%d",&dim);
	}while(dim<1 || dim>100);
	
	printf("VECTOR 1\n");
	leeVector(vt1,dim);
	printf("VECTOR 2\n");
	leeVector(vt2,dim);
	
	printf("VECTOR 1\n");
	presentaVector(vt1,dim);
	printf("VECTOR 2\n");
	presentaVector(vt2,dim);
	
	printf("Retorno de la funcion: %d \n",comparaVectores(vt1,vt2,dim));
	if(comparaVectores(vt1,vt2,dim)==1)
		printf("Los vectores son iguales:) \n");
	if(comparaVectores(vt1,vt2,dim)==0)
		printf("Los vectores NO son iguales >:( \n");
	system("pause");
	return 0;
}

void leeVector(double *vt,int dim){
	int i;
	for(i=0;i<dim;i++){
		printf("Introduce el numero en posicion %d : ",i+1);
		scanf("%lf",vt+i);
	}
}

void presentaVector(double *vt,int dim){
	int i;
	for(i=0;i<dim;i++){
		printf("%6lg",vt[i]);
		printf("\n");
	}
	
}

int comparaVectores(double *vt1,double *vt2,int dim){
	int i;
	int desigualdad=0;
	for(i=0;i<dim && desigualdad==0;i++){
		if(vt1[i]!=vt2[i])
			desigualdad=1;
		
	}
	if(desigualdad==0)
		return 1;
	if(desigualdad==1);
		return 0;
}
