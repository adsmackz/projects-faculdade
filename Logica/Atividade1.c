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
		if(n1 > 0) {
			printf("O valor inserido é positivo.");
		} else if (n1 < 0){
			printf("O valor inserido é negativo.");
		} else {
			printf("O valor inserido não é positivo, nem negativo. é = 0.");
		}
    } else {
        printf("Valor incorreto\n ");   
    }
    return 0;
}