	#include <stdlib.h>
	#include <stdio.h>
	#include <locale.h>

int fibRecursivo(int n){
    if(n < 2){
	   return n;
    } else {
	   return fibRecursivo(n-1) + fibRecursivo(n-2);
	}

 }
	
	int main(){
	    setlocale(LC_ALL,"");
		int posicao, resposta; 
		

		printf("Digite a pos. do termo na serie de fib:\n");
		scanf("%d", &posicao);
		fflush(stdin);
	    
		resposta = fibRecursivo(posicao);
		printf("O resultado : %d.\n", resposta);
	   
    }
	 
	 
	
