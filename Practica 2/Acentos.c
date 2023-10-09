#include<stdio.h>
#include<locale.h> //librería del setlocale()
#include<stdlib.h> //libreria del system()
/*Miguel Sánchez Hernández
  GitHub:Miguelsanher    */
int main(void){
	//usamos el codigo ASCII y la / para imprimir los acentos y la ñ
	printf("----------------------------------------------\n");
	printf("------Primera-opci\242n--------------------------\n");
	printf("M\240s,Ver\240n,Autom\240tico\n");
	printf("Tambi\202n,Num\202rico,Qu\202\n");
	printf("M\241nimo,D\241gito,Ah\241\n");
	printf("Precisi\242n,C\242digo,Programaci\242n\n");
	printf("Min\243scula,N\243mero,Seg\243n\n");
	printf("A\244adir,Espa\244ol\n");
	printf("\245apa,\245isca\n");
	//-----------------------------------------------------
	setlocale(LC_ALL,"spanish");
	/* usamos la libreria include<locale.h>
	con la función setlocale() de la siguiente forma
	setlocale(LC_ALL,"spanish")*/
	printf("----------------------------------------------\n");
	printf("------Segunda-opción--------------------------\n");
	printf("Más,Verán,Automático\n");
	printf("También,Numérico,Qué\n");
	printf("Mínimo,Dígito,Ahí\n");
	printf("Precisión,Código,Programación\n");
	printf("Minúscula,Número,Según\n");
	printf("Añadir,Español\n");
	printf("Ñapa,Ñisca\n");
	system("pause");
	
	return 0;
}
