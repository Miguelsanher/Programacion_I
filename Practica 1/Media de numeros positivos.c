#include<stdio.h>
/*Miguel Sánchez Hernández
  GitHub:Miguelsanher    */
int main(void){
	
	int num;
	int i=0;
	float alm=0; //float para que la media se pueda calcuar con decimales
	float media;
	
	printf("\nIntroduzca numero: ");
	scanf("%d",&num);
	//bucle
	while (num>0){
		alm+=num;
		i++;
		printf("\nIntroduzca numero: ");
		scanf("%d",&num);
	}
	media=alm/i ;
	printf("\nLa media es: %.2f\n",media);
	system("pause"); //para que en el .exe nos muestre el resultado sin que se cierre el cmd y no nos de tiempo a ver la media
	
	return 0;
}
