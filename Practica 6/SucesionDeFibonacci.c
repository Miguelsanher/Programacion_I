#include<stdlib.h>
#include<stdio.h>
/*Miguel Sánchez Hernández
  GitHub:Miguelsanher    */
int main(void){
	int n1=1;
	int n2=0;
	int i,m,temp;
	/*
	    -----     ----- 
	   |      |  |      |
	   v	  |  v      |
	n1	   n2	  temp
	
	*/
	
	printf("Sucesion de Fibonacci\n");
	printf("=======================\n");
	printf("Introduce el numero de terminos a representar: ");
	scanf("%d",&m);
	
	for(i=1;i<=m;i++){
		temp=n1+n2;
		printf("%d\t",temp);
		n1=n2;
		n2=temp;
	}
	
	
	return 0;
}
