#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    float n1;   
    int retorno;
	
    printf("Insira um número: ");
    retorno = scanf("%f", &n1);
	
    if (retorno ==1){
		if(n1 < 0) {
			printf("O valor inserido é negativo.");
		} else if (n1 > 0){
			printf("O valor inserido é positivo.");
		} else {
			printf("O Valor é = 0.");
		}
    } else {
        printf("Valor incorreto\n ");   
    }
    return 0;
}