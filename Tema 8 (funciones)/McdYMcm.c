//mcd y mcm
#include<stdio.h>
#include<stdlib.h>

int mcd(int ,int);
int mcm(int,int);
void presentacion();

int main(void){
	int n1,n2;
	
	presentacion();
	
	do{
		printf("Introduzca el numero n1: ");
		scanf("%d",&n1);
		
	}while(n1<0);
	
	do{
		printf("Introduzca el numero n2: ");
		scanf("%d",&n2);
		
	}while(n2<0);

	printf("El mcd es : %d\n",mcd(n1,n2));
	printf("El mcm es : %d\n",mcm(n1,n2));
	
	system("pause");
	return 0;
}

int mcd(int n1,int n2){
	int c;
	int temp;
	//correcion previa
	if(n2>n1){
		temp=n2;
		n2=n1;
		n1=temp;
	}
	//algoritmo de Euclides
	do{
		c=n1%n2;
		if(c!=0){
			n1=n2;
			n2=c;
		}
	}while(c!=0);
	
	return n2;
}
int mcm(int n1,int n2){
	int mcm;
	mcm=(n1*n2)/mcd(n1,n2);
	
	return mcm;
}
void presentacion(){
	printf("MAXIMO COMUN DIVISOR Y MINIMO COMUN MULTIPLO\n");
	printf("===============================================\n");
	
}
