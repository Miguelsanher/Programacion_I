#include<stdio.h>
#include<locale.h> //librer�a del setlocale()
#include<stdlib.h> //libreria del system()
/*Miguel S�nchez Hern�ndez
  GitHub:Miguelsanher    */
int main(void){
	//usamos el codigo ASCII y la / para imprimir los acentos y la �
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
	con la funci�n setlocale() de la siguiente forma
	setlocale(LC_ALL,"spanish")*/
	printf("----------------------------------------------\n");
	printf("------Segunda-opci�n--------------------------\n");
	printf("M�s,Ver�n,Autom�tico\n");
	printf("Tambi�n,Num�rico,Qu�\n");
	printf("M�nimo,D�gito,Ah�\n");
	printf("Precisi�n,C�digo,Programaci�n\n");
	printf("Min�scula,N�mero,Seg�n\n");
	printf("A�adir,Espa�ol\n");
	printf("�apa,�isca\n");
	system("pause");
	
	return 0;
}
