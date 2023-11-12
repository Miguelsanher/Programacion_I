#include<stdio.h>
#include<stdlib.h>
#define FILAS 4
#define COLUMNAS 5
/*Miguel Sánchez Hernández
  GitHub:Miguelsanher    */
int main(void){
	int matriz[FILAS][COLUMNAS]={11,12,13,14,15,
	                 			 21,22,23,24,25, 
					 			 31,32,33,34,35,					
					 			 41,42,43,44,45};
	int matriz2[COLUMNAS][FILAS];
	int i,j,k,q;
	int temp[50];
	//IMPIRMIMOS MATRIZ
	printf("Matriz a trasponer: \n");
	for(i=0;i<FILAS;i++){
		printf("|");
		for(j=0;j<COLUMNAS;j++){
			printf("%d  ",matriz[i][j]);
		}
		printf("|\n");
	}
	printf("\n");
	//DESCENDENTE POR FILAS ASCENDENTE POR COLUMNAS
	/*
	USAREMOS EL TRUCO DE LOS ARRAYS
	Fila0 intercambia con Fila3
	Fila1 intercambia con Fila2
	*/
	for(i=0;i<(FILAS/2);i++){
		for(j=0;j<COLUMNAS;j++){
			temp[j]=matriz[i][j];
			matriz[i][j]=matriz[FILAS-1-i][j];
			matriz[FILAS-1-i][j]=temp[j];
			
		}		
	}
	printf("Descendente por filas, ascendente por columnas\n");
	//IMPIRMIMOS MATRIZ
	for(i=0;i<FILAS;i++){
		printf("|");
		for(j=0;j<COLUMNAS;j++){
			printf("%d  ",matriz[i][j]);
		}
		printf("|\n");
	}
	printf("\n");
	//DESCENDENTE POR COLUMNAS,DESCENDENTE POR FILAS
	/*MATRIZ2	MATRIZ
	  k i		i j
	  0,0	<-- 0,4
	  1,0	<-- 0,3
	Observamos que el 0 es constante en los dos dentro del bucle interno
	Cambiamos de fila en caso de matriz y columna en caso de matriz2
	(avanzamos un bucle externo)
	MATRIZ2	MATRIZ
	  k i		i j
	  0,1	<-- 1,4
	  1,1	<-- 1,3
	
	*/
	for(i=0;i<FILAS;i++){
		for(j=COLUMNAS-1,k=0;j>=0;j--,k++){
			matriz2[k][i] = matriz[i][j];
		}
	}
	printf("Descendente por columnas,descendente por filas\n");
	for(i=0;i<COLUMNAS;i++){
		printf("|");
		for(j=0;j<FILAS;j++){
			printf("%d  ",matriz2[i][j]);
		}
		printf("|\n");
	}	
	printf("\n");
	
	//ASCENDENTE POR COLUMNAS,ASCENDENTE POR FILAS
	/*MATRIZ2	MATRIZ
	  j	i	    q j
	  0,0	<-- 3,0
	  1,0	<-- 3,1
	  
	0 PARA MATRIZ 2 Y 3 PARA MATRIZ AUMENTAN CADA CAMBIO DE BUCLE EXTERNO		
	CAMBIAMOS DE FILA EN MATRIZ Y DE COLUMNA EN MATRIZ 2  
	  MATRIZ2	MATRIZ
	  j i		q j
	  0,1	<-- 2,0
	  1,1	<-- 2,1	
					*/
	printf("Ascendente por columnas,ascendente por filas\n");
	
	for(i=0,q=FILAS-1;i<FILAS;i++,q--){
		for(j=0;j<COLUMNAS;j++)
			matriz2[j][i]= matriz[q][j];
	}
	
	for(i=0;i<COLUMNAS;i++){
		printf("|");
		for(j=0;j<FILAS;j++){
			printf("%d  ",matriz2[i][j]);
		}
		printf("|\n");
	}	
	printf("\n");
	return 0;
}
