#include<stdio.h>
#include<stdlib.h>

#define FILAS 3
#define COLUMNAS 3
/*Miguel Sánchez Hernández
  GitHub:Miguelsanher    */
int main(void){
	int col,fil,i,j;
	int matriz[25][25];
	int suma_ext=0;
	int suma_int=0;
	//COMPROBACION DE COLUMNAS Y FILAS
	do{
		printf("Introduzca numero de filas de la matriz: ");
		scanf("%d",&fil);
		if(fil<3 || fil>25)
			printf("ERROR");
	}while(fil<3 || fil>25);
	
	do{
		printf("Introduzca numero de columnas de la matriz: ");
		scanf("%d",&col);
		if(col<3 || col>25)
			printf("ERROR");
	}while(col<3 || col>25);
	//INTRODUCIMOS DATOS DE LA MATRIZ
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("Introduzca elemento[%d,%d] ",i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}
	}
	printf("\n");
	
	//IMPRIMIMOS MATRIZ
	for(i=0;i<fil;i++){
		printf("|");
		for(j=0;j<col;j++){
			printf("%d ",matriz[i][j]);
			
		}
		printf("|\n");
	}
	
	//SUMA DEL INTERIOR
	//suma de [0,0] a [0,COL-1]
	for(i=0;i<col;i++){
		suma_ext+= matriz[0][i];
	}
	//suma de [0,col-1] a [fil-1,col-1] y restamos [0,COL-1]
	// o suma de [1,col-1] a [fil-1,col-1]
	for(i=1;i<fil;i++){
		suma_ext+=matriz[i][col-1];
	}
	//suma de [fil-1,0] a [fil-1,col-1-1]
	for(i=0;i<col-1;i++){
		suma_ext+=matriz[fil-1][i];
	}
	//suma de [1,0] a [fil-1-1,0]
	for(i=1;i<fil-1;i++){
		suma_ext+=matriz[i][0];
	}
	
	//SUMA DEL INTERIOR
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			suma_int+=matriz[i][j];
		}
	}
	suma_int-=suma_ext;
	printf("\n");
	printf("Suma de elementos \"marco\" %6d\n",suma_ext);
	printf("Suma de elementos interiores %3d\n",suma_int);
	//ES MARCO?
	if(suma_ext>suma_int)
		printf("La matriz ES marco\n");
	else
		printf("La matriz NO es marco\n");
	return 0;
}
