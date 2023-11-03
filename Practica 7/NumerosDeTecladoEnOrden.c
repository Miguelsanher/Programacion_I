#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#define DIM 100
/*Miguel Sánchez Hernández
  GitHub:Miguelsanher    */
int main(void){
	int dim;
	int i=0;
	int lista[DIM];
	int temp,minmax;
	char resp;
	int flag=0;
	
	do{
		printf("MAXIMA DIFERENCIA DE NUMEROS\n");
		printf("==============================\n");
		i=0;
		//pedir espacio
		do{
			printf("Cuantos numeros vas a introducir? ");
			scanf("%d",&dim);
		}while(dim<2 || dim>100);
		
		printf("Introduce el numero %d ",i+1);
		scanf("%d",&lista[i]);
		//Introduccion de numeros
		
		for(i=1;i<dim;i++){
			do{
				printf("Introduce el numero %d ",i+1);
				scanf("%d",&lista[i]);
				if(lista[i]<=lista[i-1])
					printf("El numero debe ser mayor\n");
					
			}while(lista[i]<=lista[i-1]);
		}
		//buscamos la diferencia maxima
		for(i=1;i<dim;i++){
			temp=lista[i]-lista[i-1];
			if(temp>minmax)
				minmax=temp;
		}
		//imprimimos la lista y la iferencia maxima
		for(i=0;i<dim;i++){
			printf(" %d ",lista[i]);
		}
		printf("\nDiferencia maxima encontrada: %d\n",minmax);
		//repeticion?
		printf("REPETIR PROGRAMA? (y/n) ");
		scanf(" %c",&resp);
		resp= toupper(resp);
		if(resp=='N')
			flag=1;
		
 	}while(flag!=1);
 	printf("\nHASTA PRONTO\n");
 	system("pause");
	return 0;
}
