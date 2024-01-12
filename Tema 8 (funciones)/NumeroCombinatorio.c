#include<stdio.h>
#include<stdlib.h>

long factorial(long);
long combinatorio(long,long);

int main(void){
	printf("COMBINATORIO C(m,n)\n");
	printf("============================\n");
	
	long int m,n,ncombinatorio;
	do{
		printf("Introduce el m:");
		scanf("%ld",&m);
	}while(m<=0);
	
	do{
		printf("Introduce el n:");
		scanf("%ld",&n);
	}while(n<0 || (m-n)<0);
	printf("%ld  %ld\n",m,n);
	ncombinatorio=( factorial(m)/(factorial(n)*combinatorio(m,n)) );
	printf("Numero combinatorio: %ld\n",ncombinatorio);
	return 0;
}

long factorial(long int n){
	int i;
	long int num=1;
	for(i=2;i<=n;i++){
		num *= i;
	}
	
	return num;
}

long combinatorio(long m,long n){
	long int num2=m-n;
	long int num=1;
	int i;
	for(i=2;i<=num2;i++){
		num *= i;
	}
	return num;
}
