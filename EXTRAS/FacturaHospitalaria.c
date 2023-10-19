#include<stdlib.h>
#include<stdio.h>

int main(void){
	char nombre[40]="";
	int fechad,fecham,fechaa,diasIngresado; //info
	float costeDia,costeConsultas,costeMedic,costeDiversos;//costes
	float deducDiaria,ayudaMedic;//deducciones
	float diasFact,costeEstancia,costeTotal; //costes calculados
	float diasDedSegu,deducSeguro,deducMedic,deducTotal; //deducciones calculadas
	float total;
	
	printf("=============================================\n");
	printf("         CALCULO DE FACTURA HOSPITALATIA     \n");
	printf("=============================================\n");
	printf("DATOS DEL PACIENTE\n");
	printf("Nombre: ");
	gets(nombre);
	printf("Fecha de ingreso: \n");
	printf("	Dia: ");
	scanf("%d",&fechad);
	printf("	Mes: ");
	scanf("%d",&fecham);
	printf("	Año: ");
	scanf("%d",&fechaa);
	printf("Numero de dias ingresado: ");
	scanf("%d",&diasIngresado);
	
	printf("COSTES\n");
	printf("	Coste por dia.......................: ");
	scanf("%f",&costeDia);
	printf("	Coste consultas.....................: ");
	scanf("%f",&costeConsultas);
	printf("	Coste medicamentos..................: ");
	scanf("%f",&costeMedic);
	printf("	Costes diversos.....................: ");
	scanf("%f",&costeDiversos);
	
	printf("DEDUCCIONES\n");
	printf("	Deduccion diaria del seguro.........: ");
	scanf("%f",&deducDiaria);
	printf("	Porcentaje ayuda medicamentos.......: ");
	scanf("%f",&ayudaMedic);
	
	printf("=============================================\n");
	printf("             FACTURA HOSPITALARIA            \n");
	printf("=============================================\n");
	printf("PACIENTE...................: %s\n",nombre);
	printf("INGRESO....................: %d/%d/%d\n",fechad,fecham,fechaa);
	printf("DIAS INGRESADO.............: %d\n",diasIngresado);
	
	
	// COSTE TOTAL(DIAS FACTURADOS,COSTE ESTANCIA,COSTE TOTAL
	diasFact=diasIngresado-diasIngresado/4;
	costeEstancia=diasFact*costeDia;
	costeTotal=costeEstancia+costeConsultas+costeMedic+costeDiversos;
	printf("\nDIAS FACTURADOS.........................: %.0f\n",diasFact);
	printf("COSTE TOTAL DIAS ESTANCIA...............: %.2f\n",costeEstancia);
	printf("COSTE TOTAL.............................: %.2f\n",costeTotal);
	//DEDUCCIONES(DIAS DEDUCCION SEGURO,DEDUCCION SEGURO,DEDUCCION MEDICAMENTOS,DEDUCCION TOTAL)
	if(diasIngresado>2)
		diasDedSegu=diasIngresado-2;
	else
		diasDedSegu=0;
	deducSeguro= -(deducDiaria*diasDedSegu);
	if(costeMedic>90)
		deducMedic= -(costeMedic *(ayudaMedic/100));
	else
		deducMedic=0;
	
	deducTotal= deducSeguro+deducMedic;
	printf("\nDIAS DEDUCCION SEGURO...................: %.0f\n",diasDedSegu);
	printf("DEDUCCION SEGURO........................: %.2f\n",deducSeguro);
	printf("DEDUCCION POR MEDICAMENTOS..............: %.2f\n",deducMedic);
	printf("DEDUCCION TOTAL.........................: %.2f\n",deducTotal);
	//TOTAL
	total=costeTotal+deducTotal;
	if(total<0)
		total=0;
	printf("\nTOTAL A PAGAR...........................: %.2f\n",total);
	
	
	return 0;
	
}
