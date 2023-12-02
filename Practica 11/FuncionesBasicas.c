#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*Miguel Sánchez Hernández
  GitHub:Miguelsanher    */
int SumaDeN(int n);
int SumaDePares(int m,int n);
int SumaDeSerie(int x,int n);

int main(void){
	int resp;
	int n,m,x;
	do{
		printf("SELECCIONE LA FUNCION BASICA\n");
		printf("=============================\n");
		printf("1)Suma de primeros n numeros\n");
		printf("2)Suma de numeros pares entre dos limites\n");
		printf("3)Suma de la serie\n");
		printf("=> ");
		scanf("%d",&resp);
	}while(resp<1 || resp>3);
	
	switch(resp){
		
		case 1:
			printf("Introduzca n: ");
			scanf("%d",&n);
			printf("Suma : %d\n",SumaDeN(n));
			
			break;
		case 2:
			printf("Introduzca m: ");
			scanf("%d",&m);
			printf("Introduzca n: ");
			scanf("%d",&n);
			printf("Suma de pares %d ",SumaDePares(m,n));
			break;
		
		case 3:
			printf("La forma es 1+x^2,x^3,....x^n\n");
			printf("Introduzca n: ");
			scanf("%d",&n);
			printf("Introduzca x: ");
			scanf("%d",&x);
			printf("Suma de serie %d ",SumaDeSerie(x,n));
			
			break;
	}
	system("pause");
	
	
	return 0;
}

int SumaDeN(int n){
	if(n<=0)
		return 0;
	int i;
	int suma=0;
	for(i=1;i<=n;i++){
		suma+=i;
	}
	return suma;
}

int SumaDePares(int m,int n){
	//correjimos el orden
	// n sera el limite menor
	int i;
	int temp;
	int suma=0;
	if(n>m){
		temp=n;
		n=m;
		m=temp;
	}
	//modificamos el intervalo para mayor oprimización
	if(n%2!=0){
		n++;
	}
	//al ser el limite menor par avanzamos de dos en dos
	for(i=n;i<=m;i+=2){
		suma+=i;
	}
	return suma;
}

int SumaDeSerie(int x,int n){
	int suma=1;
	int i;
	//al recibir un n mernor que dos devolvera un 1
	if(n<2)
		return 1;
	for(i=2;i<=n;i++){
		suma+=pow(x,i);
	}
	return suma;
}
