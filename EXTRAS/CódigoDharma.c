#include<stdlib.h>
#include<stdio.h>

int main(void){
	int num,n1,n2,n3,n4,n5,temp,ent;
	int control=3; //modificar
	/* ejemplo
	78543
	7->n1
	8->n2
	5->n3
	4->n4
	3->n5
	*/
	printf("VALIDA EL DIGITO DE CONTROL DE UN CODIGO DHARMA\n");
	printf("================================================\n");
	printf("Introduzca el codigo (5 digitos): ");
	scanf("%d",&num);
	
	if (num>9999 && num<=99999){
		// separamos
		n1= num/10000;
		temp= num%10000;
		n2= temp /1000;
		temp%=1000;
		n3=temp/100;
		temp%=100;
		n4=temp/10;
		n5=temp%10;
		
		//printf("%d%d%d%d%d",n1,n2,n3,n4,n5);
		if(n1%2==0){
			n1*=4;
			n2*=8;
			n3*=5;
			n4*=10;
			temp=(n1+n2+n3+n4)%11;
			ent=11-temp;
		}else if(n1%2!=0){
			n1*=9;
			n2*=7;
			n3*=3;
			n4*=6;
			temp=(n1+n2+n3+n4)%11;
			ent=11-temp;
		}
		if(ent>9)
			ent=1;
		printf("Digito de control:.................................3\n");
		printf("El codigo de control calculado por la entidad es: .%d\n",ent);
		if(control==ent){
			printf("El codigo dharma es correcto\n");
		}else if (control!=ent)
			printf("El codigo dharma NO es correcto\n");
	}else{
		printf("Numero no valido\n");
	}
	system("pause");
	return 0;
}
