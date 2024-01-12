#include<stdio.h>
#include<stdlib.h>

#define FIL 50
#define COL 30
void tamano(int *x,int limite);
void iniciar(float(*mat)[COL],int f,int c, float p);
void verMatriz(float(*mat)[COL],int f,int c);
int main(void){
	float mat[FIL][COL];
	int f,c;
	float p;
	
	printf("DATO FILA\n");
	tamano(&f,FIL);
	printf("DATO COLUMNA\n");
	tamano(&c,COL);
	printf("Introduce el parametro: ");
	scanf("%f",&p);
	iniciar(mat,f,c,p);
	verMatriz(mat,f,c);
	return 0;
}

void tamano(int *x,int limite){
	
	do{
		printf("Introduzca el dato: ");
		scanf("%d",x);
		
	}while((*x)<=0 || (*x)>limite);
}
void iniciar(float(*mat)[COL],int f,int c, float p){
	int i,j;
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			mat[i][j]=p;
		}
	}
}
void verMatriz(float(*mat)[COL],int f,int c){
	int i,j;
	for(i=0;i<f;i++){
		printf("| ");
		for(j=0;j<c;j++){
			printf("%7.2f",mat[i][j]);
		}
		printf("| \n");
	}
	
}
