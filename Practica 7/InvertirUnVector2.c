#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define DIM 100
/*Miguel Sánchez Hernández
  GitHub:Miguelsanher    */
int main(void){
	int lista[DIM];
	int i,dim,temp;
	int flag=1;
	char resp;
	do{
		printf("INVERSOR DE VECTORES\n");
		printf("=======================\n");
	
		//preguntamos el tamaño
		do{
			printf("Numero de numeros del vector: ");
			scanf("%d",&dim);
		}while(dim<1 || dim>100);
		//leemos el vector
		for(i=0;i<dim;i++){
			printf("Valor del elemento %d: ",i+1);
			scanf("%d",&lista[i]);
		}
		//imprimimos
		printf("%20s","VECTOR INICIAL");
		printf("\n");
		for(i=0;i<dim;i++){
			printf("%20d\n",lista[i]);
		}
		
		//procesamos los datos
		for(i=0;i<dim/2;i++){
			temp=lista[i];
			lista[i]=lista[dim-1-i];
			lista[dim-1-i]=temp;
		}
		//imprimimos el invertido
		printf("%20s","VECTOR INVERTIDO");
		printf("\n");
		for(i=0;i<dim;i++){
			printf("%20d\n",lista[i]);
		}
		//repetir?
		printf("Repetir el programa? (y/n) ");
		scanf(" %c",&resp);
		resp=toupper(resp);
		if(resp=='N')
			flag=0;
			
	}while(flag!=0);
	printf("\n");system("pause");
	return 0;
}
