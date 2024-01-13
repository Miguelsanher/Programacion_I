#include<stdlib.h>
#include<stdio.h>

void simplificarFraccion(long*nume,long*deno);
long mcd(long nume,long deno);
int main(void){
	long nume,deno;
	
	printf("Introduzca el numerador: ");
	scanf("%ld",&nume);
	do{
		printf("Introduzca el denominador(menor que el numerador): ");
		scanf("%ld",&deno);
	}while(deno>nume);
	
	simplificarFraccion(&nume,&deno);
	printf("La fraccion simplificada es %ld / %ld",nume,deno);
	return 0;
}

long mcd(long nume,long deno){
	int c;
	do{
		c=nume%deno;
		if(c!=0){
			nume=deno;
			deno=c;
		}
	}while(c!=0);
	return deno;
}
void simplificarFraccion(long*nume,long*deno){
	long gcd= mcd(*nume,*deno);
	*nume/=gcd;
	*deno/=gcd;
	
}
