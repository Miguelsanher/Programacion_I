#include<stdio.h>
#include<stdlib.h>

#define MAX 15
/*Miguel Sánchez Hernández
  GitHub:Miguelsanher    */
int main(void){
	int n,i,j,f2,c2,sumaf,sumac,sumad1,sumad2;
	int f=0;
	int c;
	int matriz[MAX][MAX];
	int sumafc[MAX];
	int sumacc[MAX];
	int flag=1;
	
	printf("CUADRADO MAGICO DE ORDEN IMPAR\n");
	printf("================================\n");
	do{
		printf("Numero N: ");
		scanf("%d",&n);
		if(n%2==0 || n<=1 || n>15)
		printf("ERROR\n");
	}while(n%2==0 || n<=1 || n>15);
	c=n/2;

	//INICIAR MATRIZ A -1
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		matriz[i][j]=-1;
		
	}
	matriz[0][n/2]=1;
	
	//IMPRIMIR MATRIZ
	/*for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		printf("%3d",matriz[i][j]);
		printf("\n");
	}
	printf("\n");*/
	//PROCESAMOS
	for(i=1;i<=n*n;i++){
		matriz[f][c]=i;
		f2=f;
		c2=c;
		
		c++;
		//desbordamiento de columna
		if(c>n-1)
			c=0;
		f--;
		//desbordamiento de filas
		if(f<0)
			f=n-1;

		//casilla ocupada
		if(matriz[f][c]>-1){
			f=f2+1;
			c=c2;

		}
		

	}
	//immpresion de matriz
	for(i=0;i<n;i++){
		printf("|");
		for(j=0;j<n;j++)
		printf("%7d",matriz[i][j]);
		printf("|\n");
	}
	
	//SUMA DE FILAS
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			sumaf+= matriz[i][j];
			sumafc[i]=sumaf;
		}
		printf("La suma de la fila %d es: %d\n",i+1,sumaf);
		sumaf=0;
	}
	//COMPROBADOR
	for(i=0;i<n-1;i++){
		if(sumafc[i]!=sumafc[i+1])
			flag=0;
	}
	//printf("\n %d \n",flag);
	//SUMA DE COLUMNAS
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			sumac+= matriz[j][i];
			sumacc[i]=sumac;
		}
		printf("La suma de la columna %d es: %d\n",i+1,sumac);
		sumac=0;
	}
	//COMPROBADOR
	for(i=0;i<n-1;i++){
		if(sumacc[i]!=sumacc[i+1])
			flag=0;
	}
	//printf("\n %d \n",flag);
	//PRIMERA DIAGONAL
	f=0;
	c=0;
	printf("La primera diagonal es: \n");
	sumad1=0;
	for(i=0;i<n;i++){
		sumad1+=matriz[f][c];
		printf("%6d \n",matriz[f][c]);
		f++;
		c++;	
	}
	printf("La suma de la primera diagonal es: %d\n",sumad1);
	//SEGUNDA DIAGONAL
	f=n-1;
	c=0;
	printf("La segunda diagonal es: \n");
	sumad2=0;
	for(i=0;i<n;i++){
		sumad2+=matriz[f][c];
		printf("%6d \n",matriz[f][c]);
		f--;
		c++;	
	}
	printf("La suma de la segunda diagonal es: %d\n",sumad2);
	//COMPROBADOR
	if(sumad1!=sumad2)
		flag=0;
	
	if(flag==1){
		printf("\nEl cuadrado es magico\n");
		printf("Su numero magico es: %d\n",sumad1);
	}else if(flag==0){
		printf("El cuadrado NO es magico\n");
	}
	system("pause");
	return 0;
}
