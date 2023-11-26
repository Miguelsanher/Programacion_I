#include<stdio.h>
#include<stdlib.h>

#define DIM 7
#define c 4
#define f 3
/*Miguel Sánchez Hernández
  GitHub:Miguelsanher    */
int main(void){
	int i,j;
	int vector[DIM]={25,40,55,70,85,100,115};
	int tabla[f][c]={15,25,35,45,
					 115,125,135,145,
					 215,225,235,245};
	int *ptv=&vector[0];
	int *ptm=NULL;
	/*for(i=0;i<DIM;i++){
		
	}*/
	//RECORRIDO POR INDICE
	printf("|");
	for(i=0;i<DIM;i++){
		printf("%d  ",vector[i]);
	}
	printf("|\n");
	
	printf("\n");
	
	//RECORRIDO POR PUNTERO
	printf("|");
	for(i=0;i<DIM;i++){
		printf("%d  ",*(vector+i));
	}
	printf("|\n");
	printf("\n");
	
	//RECORRIDO POR PUNTERO APUNTANDO A BASE
	printf("|");
	for(i=0;i<DIM;i++){
		printf("%d  ",*ptv++);
	}
	printf("|\n");
	printf("\n");
	
	
	//RECORRIDO POR INDICE
	for(i=0;i<f;i++){
		printf("|");
		for(j=0;j<c;j++){
			printf("%5d",tabla[i][j]);
		}
		printf("|\n");
	}
	printf("\n");
	//RECORRIDO POR PUNTERO
	for(i=0;i<f;i++){
		printf("|");
		for(j=0;j<c;j++){
			printf("%5d",*(*(tabla+i)+j));
		}
		printf("|\n");
	}
	printf("\n");
	//RECORRIDO POR PUNTERO APUNTANDO A BASE
	ptm=&tabla[0][0];
	for(i=0;i<f;i++){
		printf("|");
		for(j=0;j<c;j++){
			printf("%5d",*(ptm++));
		}
		printf("|\n");
	}
	printf("\n");
	
	return 0;
}
