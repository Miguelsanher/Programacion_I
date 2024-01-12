#include<stdio.h>
#include<stdlib.h>

#define FIL 50
#define COL 50
void cargarMatriz(int (*matrizA)[COL],int nfil,int ncol,int num);
void verMatriz(int(*matrizA)[COL],int nfil,int ncol);
void verColumna(int *vectorX,int dim);
void extraeColumnaMaximo(int(*matrizA)[COL],int nfil,int ncol,int *vectorX);
int main(void){
	int f,c,num;
	int vec[FIL];
	int matrizA[FIL][COL];
	
	
	do{
		printf("Introduzca el numero de filas: ");
		scanf("%d",&f);
	}while(f<1 || f>FIL);
	
	do{
		printf("Introduzca el numero de columnas: ");
		scanf("%d",&c);
	}while(c<1 || c>COL);
	
	do{
		printf("Introduce el numero: ");
		scanf("%d",&num);
	}while(num<1 || num>(FIL*COL));
	
	cargarMatriz(matrizA,f,c,num);
	verMatriz(matrizA,f,c);
	extraeColumnaMaximo(matrizA,f,c,vec);
	verColumna(vec,f);
	system("pause");
	return 0;
}

void cargarMatriz(int (*matrizA)[COL],int nfil,int ncol,int num){
	int i,j;
	matrizA[0][0]=num;
	int sumador=3;
	for(i=0;i<nfil;i++){
		for(j=0;j<ncol;j++){
			if(i==0 && j==0){
					
			}else{
				if(sumador%2==0)
					matrizA[i][j]=num-sumador;
				else
					matrizA[i][j]=num+sumador;
						
				num=matrizA[i][j];
				sumador++;
			}
			
		}
	}
}

void verMatriz(int(*matrizA)[COL],int nfil,int ncol){
	int i,j;
	for(i=0;i<nfil;i++){
		printf("|");
		for(j=0;j<ncol;j++){
			
			printf("%5d",matrizA[i][j]);
		}
		printf("|\n");
	}
}

void verColumna(int *vectorX,int dim){
	int i;
	for(i=0;i<dim;i++){
		printf("|");
		printf("%3d",vectorX[i]);
		printf("|\n");
	}
}
void extraeColumnaMaximo(int(*matrizA)[COL],int nfil,int ncol,int *vectorX){
	//localizamos el valor maximo y cual es su columna
	int max=matrizA[0][0];
	int colMax,i,j;
	for(i=0;i<ncol;i++){
		for(j=0;j<nfil;j++){
			if (matrizA[j][i]>max){
				max=matrizA[j][i];
				colMax=i;
			}
		}
	}
	//rellenamos el vector
	for(i=0;i<nfil;i++){
		vectorX[i]=matrizA[i][colMax];
	}
}
