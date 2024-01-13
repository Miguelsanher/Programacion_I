#include<stdio.h>
#include<stdlib.h>

#define TAM 999
void pasarAMayusculas(char *frase);
void limpieza(char *frase,char *fraseLimpia);
int comparaVectores(char *vec1,char *vec2);
void inversorDeVectores(char *vec1,char *vec2);
int main(void){
	char frase[TAM];
	char fraseLimpia[TAM];
	char fraseInvertida[TAM];
	printf("!!!!!PALINDROMOS!!!!!!!\n");
	printf("=============================\n");
	printf("Introduce tu frase: ");
	gets(frase);
	puts(frase);
	pasarAMayusculas(frase);
	puts(frase);
	limpieza(frase,fraseLimpia);
	puts(fraseLimpia);
	inversorDeVectores(fraseLimpia,fraseInvertida);
	puts(fraseInvertida);
	
	if(comparaVectores(fraseLimpia,fraseInvertida)==1  ){
		printf("SON PALINDROMOS :0\n");
	}else{
		printf("NO son palindromos :(\n");
	}
	return 0;
}
void pasarAMayusculas(char *frase){
	int i=0;
	while(frase[i]!='\0'){
		frase[i]=toupper(frase[i]);
		i++;
	}
	
}
void limpieza(char *frase,char *fraseLimpia){
	int i=0;
	int j=0;
	while(frase[i]!='\0'){
		if(frase[i]!=' ' && frase[i]!=',' && frase[i]!='¿' && frase[i]!='?'&& frase[i]!='.'){
			fraseLimpia[j]=frase[i];
			j++;
		}
		i++;
	}
	fraseLimpia[j]='\0';
}
int comparaVectores(char *vec1,char *vec2){
	int i=0;
	int flag=1;
	while(vec1[i]!='\0' && flag==1){
		if(vec1[i]!=vec2[i])
			flag=0;
		i++;
	}
	return flag;
}
void inversorDeVectores(char *vec1,char *vec2){
	int i=0;
	int j;
	char temp;
	int dim=0;
	//medimos la dimension
	while(vec1[i]!='\0'){
		dim++;
		i++;
	}
	//invertimos
	for(i=0,j=dim-1;i<dim;i++,j--){
		vec2[j]=vec1[i];
	}
}

