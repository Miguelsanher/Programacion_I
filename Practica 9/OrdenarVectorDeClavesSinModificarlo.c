#include<stdio.h>
#include<stdlib.h>

#define TAM 5
/*Miguel Sánchez Hernández
  GitHub:Miguelsanher    */
int main(void){
	int i,j,k;
	int clave[TAM];
	int repetido=0;
	int *pt[TAM];
	int encontrado=0;
	do{
		printf("Introduzca la primera clave: ");
		scanf("%d",clave);
	}while(clave[0]<1000 || clave[0]>7000);
	for(i=1;i<=TAM-1;i++){
		
		//COMPROVAR REPETIDO
		do{
			printf("Introduzca la clave %d: ",i+1);
			scanf("%d",clave+i);
			//cojemos el anterior
			j=i-1;
			repetido=0;
			while(j>=0 && repetido==0){
				if(clave[i]== clave[j])
					repetido =1;
				j--;
		}
		
		}while(repetido==1 || clave[i]<1000 || clave[i]>7000);
		
	}
	
	j=0;//posicion en vector de numeros
	    //i va a ser mi valor a buscar
	k=0;//posicion en vector de punteros
	for(i=7000;i>=1000 && (k!=TAM);i--){
		encontrado=0;
		j=0;
		while(encontrado==0 && (j<TAM)){
			if(i==clave[j])
				encontrado=1;
			else 
				j++;
		}
		
		if(encontrado==1){
			*(pt+k)=&clave[j];
			k++;
		}
	}
	//IMPRIMIMOS EL CALCULADO
	printf("Calculado: \n");
	for (i = 0; i < k; i++) {
        printf("%7d", *(*(pt+i)) );
        printf("\n");
    }
    
	//IMPRIMIMOS EL ORIGINAL
	printf("Original: \n");
	for(i=0;i<k;i++){
		printf("%7d",*(clave+i) );
        printf("\n");
	}
	return 0;
}
