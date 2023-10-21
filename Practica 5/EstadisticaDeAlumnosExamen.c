#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*Miguel Sánchez Hernández
  GitHub:Miguelsanher    */
int main(void){
	int nsobre=0;
	int nnotable=0;
	int napro=0;
	int nsusp=0;
	int ndefi=0;
	int nalum=1;
	float notaacum=0;
	float nota =0;
	float ps,pn,pa,psus,pd,media;
	char cad[10]="";
	/*INTRODUCCION DE NOTAS
	  LAS NOTAS NEGATIVAS SON CENTINELAS
	  LAS MAYORES DE 10 SON IGNORADAS*/
	do{
		printf("Nota del alumno %d: ",nalum);
		scanf("%f",&nota);
		//else if para cuando den el valor centinela no interfiera en los resultados
		if(nota>=9 && nota <=10){
			nsobre++;
			nalum++;	
		
		}else if(nota>=7 && nota<9){
			nnotable++;
			nalum++;
			
		}else if(nota>=5 && nota<7){
			napro++;
			nalum++;
		
		}else if(nota>=2 && nota<5){
			nsusp++;
			nalum++;
			
		}else if(nota<2 && nota>=0){
			ndefi++;
			nalum++;
		}
		if(nota<=10 && nota >=0)
			notaacum+=nota;
		
	}while(nota >=0);
	//PORCENTAJES Y MEDIA
	ps= ((float)nsobre/(nalum-1))*100;
	pn= ((float)nnotable/(nalum-1))*100;
	pa= ((float)napro/(nalum-1))*100;
	psus= ((float)nsusp/(nalum-1))*100;
	pd= ((float)ndefi/(nalum-1))*100;
	media= notaacum/(nalum-1);
	//SELECTOR DE CATEGORIA BASADA EN LA MEDIA
	if(nota>=9 && nota <=10)
		strcat(cad,"Sobresaliente");
		
	else if(media>=7 && media<9)
		strcat(cad,"Notable");
			
	else if(media>=5 && media<7)
		strcat(cad,"Aprobado");	
	
	else if(media>=2 && media<5)
		strcat(cad,"Suspenso");	
		
	else if(media<2 && media>=0)
		strcat(cad,"Muy deficiente");	
	
	printf("Total de alumnos...........: %3d \n",nalum-1);
	printf("Numero de sobresalientes...: %3d (% 6.2f%%)\n",nsobre,ps);
	printf("Numero de notables.........: %3d (% 6.2f%%)\n",nnotable,pn);
	printf("Numero de aprobados........: %3d (% 6.2f%%)\n",napro,pa);
	printf("Numero de suspensos........: %3d (% 6.2f%%)\n",nsusp,psus);
	printf("Numero de muy deficientes..: %3d (% 6.2f%%)\n",ndefi,pd);
	printf("Nota media.................: %6.2f (%s)\n",media,cad);
	system("pause");
	
	return 0;
}
