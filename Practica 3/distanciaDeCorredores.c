#include<stdio.h>
#include<stdlib.h>
#include<math.h> //usaremos la función fabs (x) para el valor absoluto de la distancia
/*Miguel Sánchez Hernández
  GitHub:Miguelsanher    */
int main(void){
	int h1,m1,s1,h2,m2,s2,t1,t2,diferencia,temp;
	
	printf("Distancia en tiempo entre dos corredores\n");
	printf("==========================================\n");
	
	printf("Introduzca el tiempo del primer corredor: \n");
	printf("Horas.............: ");
	scanf("%d",&h1);
	printf("Minutos...........: ");
	scanf("%d",&m1);
	printf("Segundos..........: ");
	scanf("%d",&s1);
	
	printf("Introduzca el tiempo del segundo corredor: \n");
	printf("Horas.............: ");
	scanf("%d",&h2);
	printf("Minutos...........: ");
	scanf("%d",&m2);
	printf("Segundos..........: ");
	scanf("%d",&s2);
	//calculos
	t1=(h1*60+m1)*60+s1;
	t2=(h2*60+m2)*60+s2;
	diferencia=t1-t2;
	diferencia=fabs(diferencia); //usamos el modulo por si el primer corredor es mas lento que el primero 
	//usaremos h1,m1,s1 para no declarar nuevas variables 
	s1=diferencia%60;
	temp=diferencia/60;
	m1=temp%60;
	h1=temp/60;
	
	//imprimimos el resultado
	printf("La diferencia de los corredores es %d horas %d minutos y %d segundos\n",h1,m1,s1);
	
	system("pause");
	
	return 0;
}
