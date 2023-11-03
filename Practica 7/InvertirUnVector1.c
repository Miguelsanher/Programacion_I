#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define DIM 100
/*Miguel Sánchez Hernández
  GitHub:Miguelsanher    */
int main(void){
	int lista[DIM];
	int listai[DIM];
	int i,dim;
	int flag=1;
	char resp;
	do{
	
		printf("INVERSOR DE VECTORES\n");
		printf("======================\n");
		//preguntamos dimension
		do{
			printf("Introduzca el numero de numeros: ");
			scanf("%d",&dim);
		
		}while(dim <1 || dim>100);
		//leemos los numeros
		for(i=0;i<dim;i++){
			printf("Introduce el numero %d: ",i+1);
			scanf("%d",&lista[i]);
		}
		//intercambiamos los numeros
		for(i=0;i<dim;i++){
			listai[dim-1-i]=lista[i];
		}
		/*
		TAMBIEN ES VALIDO ESTE FOR:
		for(i=0,k=dim-1;i<dim;i++,k--)
		
		*/
		//imprimimos ambas listas
		printf("%20s%30s\n","VECTOR INICIAL","VECTOR INVERTIDO");
		for(i=0;i<dim;i++)
			printf("%20d%30d\n",lista[i],listai[i]);
		printf("\n");
		//repeticion
		printf("Quieres volver a repetir el programa? (y/n) ");
		scanf(" %c",&resp);
		resp=toupper(resp);
		if(resp=='N')
			flag=0;
		
	}while(flag!=0);
	printf("\n");
	system("pause");
	return 0;
}
