#include<stdio.h>
#include<stdlib.h>
//definimos la constante en el preprocesador
#define PI 3.14159
/*Miguel S�nchez Hern�ndez
  GitHub:Miguelsanher    */
int main (void){
	float g;
	float r;
	printf("Introduzca los grados a convertir\n");
	printf("Puede ser un valor decimal: ");
	scanf("%f",&g);
	//realizamos la conversi�n
	r = PI/180*g;
	printf("Los radianes son: %f\n",r);
	system("pause");
	return 0;
}
