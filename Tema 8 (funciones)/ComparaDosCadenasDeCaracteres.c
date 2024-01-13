#include<stdlib.h>
#include<stdio.h>
#include <ctype.h>
#define TAM 300
int comparaCadenas(char*cad1,char*cad2,int diffMm);
void vectorMayuscula(char*cad1,int dim);
int main(void){
	char cad1[300];
	char cad2[300];
	int diffMm;
	
	printf("Frase 1: ");
	gets(cad1);
	printf("Frase 2: ");
	gets(cad2);
	printf("Diferenciar mayusculas y minusculas (SI-1//NO-0) ");
	scanf("%d",&diffMm);
	if(comparaCadenas(cad1,cad2,diffMm)==0)
		printf("Las cadenas NO son iguales :(\n");
	else
		printf("Las cadenas son iguales :0\n");
	
}

int comparaCadenas(char*cad1,char*cad2,int diffMm){
	//vemos si la longitud es la misma
	int l1,l2;
	int i,j,k;
	i=0;
	int iguales=1;
	while(cad1[i]!='\0'){
		i++;
	}
	l1=i;
	i=0;
	while(cad2[i]!='\0'){
		i++;
	}
	l2=i;
	if(l1!=l2)
		return 0;
	//vemos si hay que tener en cuenta las mayusculas y minusculas
	if(diffMm==0){
		vectorMayuscula(cad1,l1);
		vectorMayuscula(cad2,l1);
	}
	//vemos si son iguales
	for(i=0; i<l1 && iguales==1;i++){
		if(cad1[i]!=cad2[i])
			iguales=0;
	}
	if(iguales==1)
		return 1;
	if(iguales==0)
		return 0;
	
}
void vectorMayuscula(char*cad1,int dim){
	int i;
	for(i=0;i<dim;i++){
		cad1[i]=toupper(cad1[i]);
	}
	
}
