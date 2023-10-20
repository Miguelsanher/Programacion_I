#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main(void){
	
	float a,b,c,p,h,area;
	printf("TRIANGULOS-FORMULA DE HERON \n");
	printf("============================\n");
	
	printf("Lado a del triangulo: ");
	scanf("%f",&a);
	printf("Lado b del triangulo: ");
	scanf("%f",&b);
	printf("Lado c del triangulo: ");
	scanf("%f",&c);
	
	p=(a+b+c)/2;
	h=p*(p-a)*(p-b)*(p-c);
	
	if(h<=0)
		printf("No se forma un triangulo\n");
	else{
		printf("Se forma un triangulo\n");
		area=sqrt(h);
		printf("El area es: %.3f\n",area);
		if(a==b && b==c)
			printf("Es equilatero\n");
		else if( (a==b && b!=c) || (a==c && c!=b) || (b==c && c!=a)  )
			printf("Es isosceles\n");
		else if (a!=b && b!=c && c!=a)
			printf("Es escaleno\n");
		
		
	}
	return 0;
}
