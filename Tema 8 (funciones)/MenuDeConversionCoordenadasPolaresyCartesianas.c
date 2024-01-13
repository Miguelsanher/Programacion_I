#include<stdlib.h>
#include<stdio.h>
#include<math.h>

void PolaresaCartesianas(float r,float ang,float *x,float*y);
void  CartesianasaPolares(float x,float y,float *r,float *ang);
int main(void){
	int salir=0;
	int resp=1;
	float x,y;
	float r,ang;
do{
	
	do{
		if(resp<1||resp>3){
			printf("Introduce una respuesta correcta\n");
			system("pause");
		}
		printf("MENU DE CONVERSION\n");
		printf("======================\n");
		printf("1)De polares a cartesianas\n");
		printf("2)De cartesianas a polares\n");
		printf("3)Cerrar programa\n");
		printf("=> ");
		scanf("%d",&resp);
	}while(resp<1 || resp>3);
	
	switch(resp){
		case 1:
			printf("Introduce la r: ");
			scanf("%f",&r);
			printf("Introduce el angulo: ");
			scanf("%f",&ang);
			PolaresaCartesianas(r,ang,&x,&y);
			printf("Las coordenadas son: %.3f,%.3f\n",x,y);
			break;
		case 2:
			printf("Introduce la x: ");
			scanf("%f",&x);
			printf("Introduce la y: ");
			scanf("%f",&y);
			CartesianasaPolares(x,y,&r,&ang);
			printf("Las coordenadas son: %.3f,%.3f\n",r,ang);
			break;
		
		case 3:
			salir=1;
			break;	
	}
	
	
	
	
	
		
}while(salir==0);
return 0;
}

void PolaresaCartesianas(float r,float ang,float *x,float*y){
	*x=r*cos(ang);
	*y=r*sin(ang);
	
}
void  CartesianasaPolares(float x,float y,float *r,float *ang){
	*r=sqrt(pow(x,2)+pow(y,2));
	*ang=atan(y/x);
}
