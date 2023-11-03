#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define DIM 100
/*Miguel Sánchez Hernández
  GitHub:Miguelsanher    */
int main(void){
	int dim,j;
	char lista[DIM];
	char temp;
	int flag=1;
	char resp;
	do{
		printf("INVERSOR DE CADENA DE CARACTERES\n");
		printf("===================================\n");
		int i=0;
		printf("Introduce la cadena de caracteres: ");
		fflush(stdin);
		gets(lista);
		//contamos el numero de coracteres
		while(lista[i]!='\0'){
			i++;
		}
		printf("%20s","VECTOR INICIAL");
		printf("\n");
		for(j=0;j<i;j++){
			printf("%20C",lista[j]);
			printf("\n");
		}
		
		//procesamos
		for(j=0;j<i/2;j++){
			temp=lista[j];
			lista[j]=lista[i-1-j];
			lista[i-1-j]=temp;
		}
		//imprimimos
		printf("%20s","VECTOR INVERTIDO");
		printf("\n");
		for(j=0;j<i;j++){
			printf("%20c",lista[j]);
			printf("\n");
		}
		//repetir?
		printf("Repetir el programa? (y/n) ");
		scanf(" %c",&resp);
		resp=toupper(resp);
		if(resp=='N')
			flag=0;
	}while(flag!=0);
	printf("\n");
	system("pause");
	return 0;
}
