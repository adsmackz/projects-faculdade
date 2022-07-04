	#include <stdlib.h>
	#include <stdio.h>
	#include <locale.h>

int fibInterativo(int n){
	int fib, ant1, prox;
	int i;
	fib = 0;
	ant1 = 1;

	for(i=0; i<n; i++){
	    prox = fib + ant1;
		fib = ant1;
	    ant1 = prox;
    }
	return fib;
 }
	
	int main(){
	    setlocale(LC_ALL,"");
		int pos, res; 
		
        printf("Digite a pos. do termo na serie de fib:\n");
		scanf("%d", &pos);
		fflush(stdin);
	    
		res = fibInterativo(pos);
		printf("O resultado : %d.\n", res);
	
    }
	 
	 
	
