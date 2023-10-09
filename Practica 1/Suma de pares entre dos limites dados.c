#include <stdio.h>
/*Miguel Sánchez Hernández
  GitHub:Miguelsanher    */
int main(void){
	int num1;
	int num2;
	int i=0	;
	int alm=0;
	printf("\nIntroduzca el primer limite: ");
	scanf("%d",&num1);
	printf("\nIntroduzca el segundo limite: ");
	scanf("%d",&num2);
	if (num1>num2){
		for (i=num2;i<=num1;i++){ //iniciamos for en el valor de num2 hasta el valor de num1 incluido
			
			if (i%2==0){ //el modulo es para ver si es par o no
				alm+=i;
			}
		}
		printf("\nSuma de los numeros pares: %d\n",alm);
		
	}
	system("pause");
	return 0;
}
