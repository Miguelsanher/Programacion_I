#include<stdio.h>
#include<stdlib.h>

#define FIL 40
#define COL FIL
void leerMatriz(float(*mat)[COL],int filas);
void verMatriz(float(*mat)[COL],int filas);
float trazaMatriz(float(*mat)[COL],int filas);
int simetricaMatriz(float(*mat)[COL],int filas);

int main(void){
	float mat[FIL][COL];
	int orden;
	do{
		printf("Introduzca el orden de la matriz(AxA): ");
		scanf("%d",&orden);
		
	}while(orden<=0);
	
	leerMatriz(mat,orden);
	verMatriz(mat,orden);
	printf("La traza es: %.2f\n",trazaMatriz(mat,orden));
	if(simetricaMatriz(mat,orden)==1){
		printf("La matriz es simetrica :)\n");
	}else if(simetricaMatriz(mat,orden)==0){
		printf("La matriz NO es simetrica :(\n");
	}
	return 0;
}

void leerMatriz(float(*mat)[COL],int filas){
	int i,j;
	for(i=0;i<filas;i++){
		for(j=0;j<filas;j++){
			printf("Introduce el dato [%d][%d]: ",i+1,j+1);
			scanf("%f",&mat[i][j]);
		}
	}
}
void verMatriz(float(*mat)[COL],int filas){
	int i,j;
	for(i=0;i<filas;i++){
		printf("|");
		for(j=0;j<filas;j++){
			printf("%6.2f",mat[i][j]);
		}
		printf("|\n");
	}
}
float trazaMatriz(float(*mat)[COL],int filas){
	int i,j;
	j=0;
	float suma=0;
	for(i=0;i<=filas;i++,j++){
		suma+=mat[i][j];

	}
	return suma;
}
int simetricaMatriz(float(*mat)[COL],int filas){
	int i,j;
	int flag=1;
	for(i=0;i<filas&& (flag==1);i++){
		for(j=0;j<filas &&(flag==1);j++){
			if(mat[i][j]!=mat[j][i])
				flag=0;
		}
	}
	return flag;
}
