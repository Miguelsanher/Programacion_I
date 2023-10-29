#include<stdlib.h>
#include<stdio.h>
/*				(ALT-I+2)		IT-1
		IT	   EXTERIOR	            INTERIOR	ALT		
--------	 1		  8	                   0	  7		
-------*	 2		  7			   1			
------**	 3  	          6			   2			
-----***	 4		  5	 		   3			
----****	 5 		  4			   4			
---*****	 6		  3			   5			
--******	 7		  2	 		   6		
-******* 	 8   	          1 		           7
	
		IT	   EXTERIOR	        INTERIOR	ALT		                  
-*******	 1		  1		       7          7
--******	 2		  2		       6	
---***** 	 3                3                    5
----****	 4                4                    4
-----***         5	          5                    3
------**         6                6                    2 
-------*         7                7                    1
--------	 8                8                    0
*/
/*Miguel Sánchez Hernández
  GitHub:Miguelsanher    */
int main(void){
	int i,k,alt;
	char inte;
	char exte;
	
	
	
	printf("Caracter interior: ");
	scanf(" %c",&inte);
	printf("Caracter exterior: ");
	scanf(" %c",&exte);
	printf("Altura: ");
	scanf("%d",&alt);
	
	for (i=1;i<=alt+1;i++){
		for(k=1;k<=(alt-i+2);k++){
			printf("%c",exte);
		}
		for(k=1;k<=i-1;k++){
			printf("%c",inte);
		}
		//SEGUNDA MITAD
		for(k=1;k<=i-1;k++){
			printf("%c",inte);
		}
		for(k=1;k<=(alt-i+2);k++){
			printf("%c",exte);
		}
		
		
		printf("\n");
		
	}
	for (i=1;i<=alt+1;i++){
		for(k=1;k<=i;k++){
			printf("%c",exte);
		}
		for(k=1;k<=(alt-i+1);k++){
			printf("%c",inte);
		}
		//SEGUNDA MITAD
		for(k=1;k<=(alt-i+1);k++){
			printf("%c",inte);
		}
		for(k=1;k<=i;k++){
			printf("%c",exte);
		}
		
		printf("\n");
		
	}

	
	
	
	return 0;
}
