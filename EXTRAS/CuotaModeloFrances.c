#include<stdlib.h>
#include<stdio.h>
#include<math.h>
/*Miguel Sánchez Hernández
  GitHub:Miguelsanher    */
int main (void){
	float ca,inte,plaz,cuota;
	
	printf("==============================\n");
	printf("    CUOTA MODELO FRANCES      \n");
	printf("==============================\n");
	printf("Capital: ");
	scanf("%f",&ca);
	
	printf("Interes anual: ");
	scanf("%f",&inte);
	printf("Plazo: ");
	scanf("%f",&plaz);
	
	inte/=12;
	plaz*=12;
	
	cuota= (ca*inte) / (100*(1-pow(1+inte/100,-plaz) ) );
	
	printf("La cuota es: %.2f euros\n",cuota);
	system("pause");
}
