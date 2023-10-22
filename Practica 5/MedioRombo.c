#include<stdio.h>
#include<stdlib.h>
/*Miguel Sánchez Hernández
  GitHub:Miguelsanher    */
int main(void){
	char blanco=' ';
	char estrella;
	int i,j,alt;
	printf("=======================\n");
	printf("CREADOR DE MEDIO ROMBOS\n");
	printf("=======================\n");
	
	printf("Base del triangulo para crear el medio rombo: ");
	scanf("%d",&alt);
	printf("Caracter: ");
	scanf(" %c",&estrella);
	
	
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
		for(i=1;i<=alt-1;i++){
			//ESPACIOS
			for(j=1;j<=i;j++)
				printf("%c",blanco);
			//ESTRELLAS
			for(j=1;j<=alt-i;j++)
				printf("%c",estrella);
			printf("\n");
		}
	}else
		printf("El numero debe ser mayor que 0\n");
	system("pause");
	return 0;
	
}
