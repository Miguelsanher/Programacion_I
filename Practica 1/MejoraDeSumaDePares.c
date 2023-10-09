#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num1;
	int num2;
	int i=0	;
	int alm=0;
	printf("\nIntroduzca el primer limite: ");
	scanf("%d",&num1);
	printf("\nIntroduzca el segundo limite: ");
	scanf("%d",&num2);
	if (num1>num2){
		//sumamos 1 a num2 si no es impar para hacerlo par
		if (num2%2!=0){
			num2+=1;
		}
		//iteramos de dos en dos para sumar los pares ya que num2 es par hasta num1
		for (i=num2;i<=num1;i+=2){
			alm+=i;
		}
		printf("%d",alm);
	}
	//<-num2-----||-------num1->
	return 0;
}
