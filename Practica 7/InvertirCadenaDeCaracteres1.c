#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define DIM 100
/*Miguel S�nchez Hern�ndez
  GitHub:Miguelsanher    */
int main(void){
	int dim,j;
	char lista[DIM];
	char listai[DIM];
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
		//procesamos
		for(j=0;j<i;j++)
			listai[i-1-j]=lista[j];
		//imprimimos
		printf("%20s%30s","VECTOR INICIAL","VECTOR INVERTIDO");
		printf("\n");
		for(j=0;j<i;j++){
			printf("%20c%30c",lista[j],listai[j]);
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
