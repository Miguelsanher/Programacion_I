#include<stdlib.h>
#include<stdio.h>

int main(void){
	char blanco=' ';
	char estrella='*';
	int i,j,alt;
	printf("=======================\n");
	printf("CREADOR DE TRIANGULOS\n");
	printf("=======================\n");
	printf("Base del triangulo= ");
	scanf("%d",&alt);
	
	if(alt>0){
	
		for (i=1;i<=alt;i++){
			//ESPACIOS
			for(j=1;j<=alt-i;j++)
				printf("%c",blanco);
			//ESTRELLAS
			for(j=1;j<=i;j++)
				printf("%c",estrella);
				
			
			printf("\n");
					
		}
	}else
		printf("El numero debe ser mayor que 0\n");
	system("pause");
	return 0;
}
