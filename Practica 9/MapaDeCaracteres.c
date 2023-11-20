#include<stdio.h>
#include<stdlib.h>

#define FILAS 3
#define COLUMNAS 4
/*Miguel Sánchez Hernández
  GitHub:Miguelsanher    */
int main(void){
	
	char vletras[]={'A','F','H','K','L','O','S','U','X','Z'}; //10 elementos
	char matriz[FILAS][COLUMNAS];
	char *mapa[FILAS][COLUMNAS];
	int i,j,k;
	int igual;
	
	printf("MAPA DE CARACTERES\n");
	printf("========================\n");
	
	for(i=0;i<FILAS;i++){
		for(j=0;j<COLUMNAS;j++){
			
			printf("Introduzca caracter [%d][%d]: ",i+1,j+1);
			scanf(" %c",&matriz[i][j]);
			igual=0;
			k=0;
			//BUSCAR EN VLETRAS
			while(k<10 && igual==0){
				if(matriz[i][j]==vletras[k])
					igual=1;	
				else
					k++;				
			}
			if(igual==1){
				mapa[i][j]=&matriz[i][j];
			}else{
				mapa[i][j]=NULL;
			}
			
		}
	}
	printf("Introducido:\n");
	for(i=0;i<FILAS;i++){
		printf("|");
		for(j=0;j<COLUMNAS;j++){
			printf("%5c",matriz[i][j]);
		}
		printf("|\n");
	}
	
	printf("\n");
	printf("Resuelto: \n");
	for(i=0;i<FILAS;i++){
		printf("|");
		for(j=0;j<COLUMNAS;j++){
			if(mapa[i][j]!=NULL)
				printf("%5c",*mapa[i][j]);
			else
				printf("    *");
		}
		printf("|\n");
	}
	system("pause");
	return 0;
}
