#include<stdlib.h>
#include<stdio.h>
/*Miguel Sánchez Hernández
  GitHub:Miguelsanher    */
int mcd(int n1,int n2);
int mcm(int n1,int n2);
int main(void){
	int n1,n2;
	
	printf("MCD Y MCM\n");
	printf("================\n");
	printf("Introduce el primer numero: ");
	scanf("%d",&n1);
	printf("Introduce el segundo numero: ");
	scanf("%d",&n2);
	printf("Mcd: %d \n",mcd(n1,n2));
	printf("Mcm: %d \n",mcm(n1,n2));
	
	system("pause");
	return 0;
}

int mcd(int n1,int n2){
	int n3,temp;
	//Algoritmo de Euclides para calcular el mcd
	//Correccion 1
	if(n1<n2){
		temp=n1;
		n1=n2;
		n2=temp;
	}
	do{
		n3=n1%n2;
		if(n3!=0){
			n1=n2;
			n2=n3;
		}
		
	}while(n3!=0);
	return n2;
}

int mcm(int n1,int n2){
	//sabemos que n1*n2=mcd(n1,n2)*mcm(n1,n2)
	return (n1*n2)/(mcd(n1,n2));
}
