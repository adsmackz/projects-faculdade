#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int Dividendo, divisor, quociente, resto;

    printf("Qual é o valor que você deseja dividir: ");
    scanf("%d", &Dividendo);
    printf("Por quanto você? deseja dividir: ");
    scanf("%d", &divisor);

    quociente = Dividendo / divisor;     
    resto = Dividendo % divisor;
  
    printf("\n.................................");
    if (resto == 0){
       printf("\nA divisão é exata, então: ");
        
    }  else {
       printf("\nA divisão não é exata, então: ");
     
    }
    printf("\nQuociente: %d.", quociente);
    printf("\nE o Resto é: %d.", resto);
    printf("\n.................................");
    return 0;
}