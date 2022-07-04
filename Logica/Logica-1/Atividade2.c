#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int soma, num1, num2;

    printf("Digite o 1° numero: ");
    scanf("%d", &num1);
    
    printf("Digite o 2° numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    if (soma < 0){
        printf("O Valor da soma é : %d", soma);
        printf(" E o valor é negativo");

    } else if (soma > 0){
        printf("O Valor da soma é : %d", soma);
        printf(" E o valor é positivo");

    }  else {
       printf("O valor é zerado");

    }
     
    return 0;
}
