	#include <stdlib.h>
	#include <stdio.h>
	#include <locale.h>
	#include <ctype.h>
	
	
	int main(){
	    setlocale(LC_ALL,"");
	    float peso, altura, IMC;
	    char op;
		
		do {
			 printf("Insira sua altura: ");
	         scanf("%f", &altura);
	   		 fflush(stdin);
	
	         printf("Insira seu peso: ");
	         scanf("%f", &peso);
	         fflush(stdin);
	
	         IMC = peso / (altura * altura);	
		
	         if(IMC < 21.0){
	             printf("Seu IMC é: %.2f.", IMC);
	             printf("\nE você está abaixo do peso!\n ");
	          
			  } else if (IMC > 30.75){
	                    printf("Seu IMC é: %.2f.", IMC);
	                    printf("\nE você está obeso!\n ");
	          } else {
	            printf("Seu IMC é: %.2f.", IMC);
	            printf("\nE você está no peso padrão!\n ");
	        }
	    
	    
		printf("\nVocê deseja executar novamente? se sim, digite Y.\n");
		scanf("%c", (&op));
	

	} while(tolower(op) == 'y');
		
}
	 
	 
	
