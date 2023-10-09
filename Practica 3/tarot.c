#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*Miguel Sánchez Hernández
  GitHub:Miguelsanher    */
int main(void){
	setlocale(LC_ALL,"spanish"); //para que nos deje imprimir la ñ
	int fecha,temp,ano,mes,dia,p1,p2,p3;
	int n1,n2,n3,n4; //los usaremos en la segunda particion
	printf("Creador de número de Tarot\n");
	printf("============================\n");
	printf("Introduzca su fecha(AAAAMMDD): ");
	scanf("%d",&fecha);
	
	//calculos
	ano=fecha/10000;
	temp=fecha%10000;
	mes=temp/100;
	dia=temp%100;
	
	printf("La fecha introducida es el dia %d del mes %d del año %d\n",dia,mes,ano);
	//segundos calculos
	p1=ano+mes+dia;
	n1=p1/1000;
	temp=p1%1000;
	n2=temp/100;
	temp%=100;
	n3=temp/10;
	n4=temp%10;
	//printf("%d,%d,%d,%d",n1,n2,n3,n4); printf para comrpobar que va bien
	//terceros calculos
	//reusamos el n1 y n2
	p2=n1+n2+n3+n4;
	n1=p2/10;
	n2=p2%10;
	p3=n1+n2;
	printf("Tu número del tarot es: %d\n",p3);
	system("pause");
	
	return 0;
}
