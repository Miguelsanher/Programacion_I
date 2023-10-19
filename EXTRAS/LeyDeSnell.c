#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define PI 3.14159265

int main(void){
	double theta1,n1,n2;
	double theta2;
	printf("Introduce el angulo de entrada: ");
	scanf("%lf",&theta1);
		
	printf("Introduce el n1: ");
	scanf("%lf",&n1);
	printf("Introduce el n2: ");
	scanf("%lf",&n2);
	
	if(theta1>=0 && theta1<=90 && n1>=1 && n2>=1){
		theta1=theta1*PI/180;
		if((n1/n2*sin(theta1)) > 1  )
			printf("Se produce reflexion total\n");
		else{
			theta2= asin(n1/n2*sin(theta1));
			theta2=theta2*180/PI; //convertimos a grados
			printf("El angulo de salida es %lf\n",theta2);
		}
	}else{
		printf("Error en la introduccion de valores\n");
	}
	system("pause");
	
	
	return 0;
}
