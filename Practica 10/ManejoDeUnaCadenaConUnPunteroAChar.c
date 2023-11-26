#include<stdlib.h>
#include<stdio.h>

#define DIM 100
/*Miguel Sánchez Hernández
  GitHub:Miguelsanher    */
int main(void){
	char caracter;
	int resp=0;int i;
	int a=0;
	char frase [DIM];
	int contador=0;
	int longitud=0;
	int posicion[DIM];
	char *pt=&frase[0];
	
	printf("MANEJO DE UNA CADENA CON UN PUNTERO A CHAR\n");
	printf("==========================================\n");
	do{
		printf("Elija la version del programa\n");
		printf("1)Recorrido de la cadena con notación de subíndices\n");
		printf("2)Recorrido de la cadena con notación de aritmética de punteros\n");
		printf("3)Recorrido de la cadena mediante una variable puntero auxiliar\n");
		printf("=> ");
		scanf("%d",&resp);
		
	}while(resp<1 || resp>3);
	
	printf("Escribe la frase: ");
	fflush(stdin); //limpiamos el buffer
	gets(frase); //añaade el '\0'
	printf("Escribe el caracter: ");
	fflush(stdin); //limpiamos el buffer
	scanf("%c",&caracter);
	switch(resp){
		case 1:
			for(i=0;i<DIM;i++){
				if(frase[i]==caracter){
					contador++;
					posicion[a]=i;
					a++;
				}
				if(frase[i]=='\0')
					break;
				longitud++;
			}
			/*SALA DE PRUEBAS
			printf("%d",contador);
			printf("\n");
			printf("%d",longitud);
			printf("\n");
			for(i=0;i<a;i++){
				printf("%d ",posicion[i]+1);
			}*/
			break;
		case 2:
			for(i=0;i<DIM;i++){
				if(*(frase+i)==caracter){
					contador++;
					posicion[a]=i;
					a++;
				}
				if(*(frase+i)=='\0')
					break;
				longitud++;
			}
			
			
			
			break;
		case 3:
			for(i=0;i<DIM;i++){
				if(*pt==caracter){
					contador++;
					posicion[a]=i;
					a++;
				}
				if(*pt=='\0')
					break;
				longitud++;
				pt++;
			}
					
			break;
	}
	printf("\n");
	printf("El caracter aparece %d veces\n",contador);
	printf("La cadena tiene una longitud de %d\n",longitud);
	printf("Las posiciones del caracter son: ");
	for(i=0;i<a;i++){
				printf("%d ",posicion[i]+1);
			}
	return 0;
}
