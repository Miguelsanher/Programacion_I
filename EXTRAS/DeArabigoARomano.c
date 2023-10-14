#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include <string.h>
/*Miguel Sánchez Hernández
  GitHub:Miguelsanher    */
int main(void){
	int ano,temp,uni,dec,cent,mill;
	char n_a[30] = "";
	
	printf("===========================\n");
	printf("    DE ARABIGO A ROMANO    \n");
	printf("===========================\n");	
	
	printf("Año de 1 a 3000=> ");
	scanf("%d",&ano);
	printf("Numaro arabigo: %d\n",ano);
	
	if (ano>=1 && ano<=3000){
		//descomponemos
		uni=ano%10;
		temp=ano/10;
		dec=temp%10;
		temp/=10;
		cent=temp%10;
		mill=temp/10;
		
		//printf("%d,%d,%d,%d\n",mill,cent,dec,uni); comprobación
		//MILLARES
		switch(mill){
			case 1:
				strcat(n_a,"M");
				
				break;
			case 2:
				strcat(n_a,"MM");
				
				break;
			case 3:
				strcat(n_a,"MMM");
				break;
		}
		//CENTENAS
		switch(cent){
			case 1:
				strcat(n_a,"C");
				break;
			case 2:
				strcat(n_a,"CC");
				break;
			case 3:
				strcat(n_a,"CCC");
				break;
			case 4:
				strcat(n_a,"CD");
				break;
			case 5:
				strcat(n_a,"D");
				break;
			case 6:
				strcat(n_a,"DC");
				break;
			case 7:
				strcat(n_a,"DCC");
				break;
			case 8:
				strcat(n_a,"DCCC");
				break;
			case 9:
				strcat(n_a,"CM");
				break;
				
		}
		//DECENAS
		switch(dec){
			case 1:
				strcat(n_a,"X");
				break;
			case 2:
				strcat(n_a,"XX");
				break;
			case 3:
				strcat(n_a,"XXX");
				break;
			case 4:
				strcat(n_a,"XL");
				break;
			case 5:
				strcat(n_a,"L");
				break;
			case 6:
				strcat(n_a,"LX");
				break;
			case 7:
				strcat(n_a,"LXX");
				break;
			case 8:
				strcat(n_a,"LXXX");
				break;
			case 9:
				strcat(n_a,"XC");	
				break;		
			
		}
		//UNIDADES
		switch(uni){
			case 1:
				strcat(n_a,"I");
				break;
			case 2:
				strcat(n_a,"II");
				break;
			case 3:
				strcat(n_a,"III");
				break;
			case 4:
				strcat(n_a,"IV");
				break;
			case 5:
				strcat(n_a,"V");
				break;
			case 6:
				strcat(n_a,"VI");
				break;
			case 7:
				strcat(n_a,"VII");
				break;
			case 8:
				strcat(n_a,"VIII");
				break;
			case 9:
				strcat(n_a,"IX");	
				break;		
			
		}
		printf("Numero romano: %s\n",n_a);
		
	}else{
		printf("Numero demasiado grande\n");
	}
	system("pause");
	return 0;
}
