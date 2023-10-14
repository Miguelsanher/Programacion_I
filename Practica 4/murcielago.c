#include<stdio.h>
#include<stdlib.h>
#include <string.h> //strcat(x,y)
/*
Pasar de números a letras según el codigo murcielago
M => 9
U => 8
R => 7
C => 6 
I => 5
E => 4
L => 3
A => 2
G => 1
O => 0
*/
/*Miguel Sánchez Hernández
  GitHub:Miguelsanher    */
int main(void){
	int num,temp,n1,n2,n3,n4;
	char cad[10]="";
	printf("Introduzca el numero para codificar segun la codificacion MURCIELAGO: ");
	scanf("%d",&num);
	
	
	if (num<=9999){
		n1=num/1000;
		temp=num%1000;
		n2=temp/100;
		temp%=100;
		n3=temp/10;
		n4=temp%10;
		//printf("%d,%d,%d,%d\n",n1,n2,n3,n4); comprobación
		switch(n1){
			case 0:
				strcat(cad,"O");
				break;
			case 1:
				strcat(cad,"G");
				break;
			case 2:
				strcat(cad,"A");
				break;
			case 3:
				strcat(cad,"L");
				break;
			case 4:
				strcat(cad,"E");
				break;
			case 5:
				strcat(cad,"I");
				break;
			case 6:
				strcat(cad,"C");
				break;
			case 7:
				strcat(cad,"R");
				break;
			case 8:
				strcat(cad,"U");
				break;
			case 9:
				strcat(cad,"M");
				break;
		}
		//-----------------------------------
		switch(n2){
			case 0:
				strcat(cad,"O");
				break;
			case 1:
				strcat(cad,"G");
				break;
			case 2:
				strcat(cad,"A");
				break;
			case 3:
				strcat(cad,"L");
				break;
			case 4:
				strcat(cad,"E");
				break;
			case 5:
				strcat(cad,"I");
				break;
			case 6:
				strcat(cad,"C");
				break;
			case 7:
				strcat(cad,"R");
				break;
			case 8:
				strcat(cad,"U");
				break;
			case 9:
				strcat(cad,"M");
				break;
		}
		//---------------------------------------
		switch(n3){
			case 0:
				strcat(cad,"O");
				break;
			case 1:
				strcat(cad,"G");
				break;
			case 2:
				strcat(cad,"A");
				break;
			case 3:
				strcat(cad,"L");
				break;
			case 4:
				strcat(cad,"E");
				break;
			case 5:
				strcat(cad,"I");
				break;
			case 6:
				strcat(cad,"C");
				break;
			case 7:
				strcat(cad,"R");
				break;
			case 8:
				strcat(cad,"U");
				break;
			case 9:
				strcat(cad,"M");
				break;
		}
		//----------------------------------------
		switch(n4){
			case 0:
				strcat(cad,"O");
				break;
			case 1:
				strcat(cad,"G");
				break;
			case 2:
				strcat(cad,"A");
				break;
			case 3:
				strcat(cad,"L");
				break;
			case 4:
				strcat(cad,"E");
				break;
			case 5:
				strcat(cad,"I");
				break;
			case 6:
				strcat(cad,"C");
				break;
			case 7:
				strcat(cad,"R");
				break;
			case 8:
				strcat(cad,"U");
				break;
			case 9:
				strcat(cad,"M");
				break;
		}
		//---------------------------
		printf("Tu numero %d es => %s\n",num,cad);
	}else{
		printf("El numero es muy grande\n");
	}
	system("pause");
	return 0;
	
}
