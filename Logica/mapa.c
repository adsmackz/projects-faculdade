#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int D, d, q, r;

    printf("Qual é o valor que você deseja dividir: ");
    scanf("%d", &D);
    printf("Por quanto vocẽ deseja dividir: ");
    scanf("%d", &d);

    q = D / d;     
    r = D % q;
  
    printf("\n.................................");
    if (r == 0){
       printf("\nA divisão é exata, então: ");
       printf("\nQuociente: %d.", q);
       printf("\nE o Resto é: 0.");
      
    }  else {
       printf("\nA divisão não é exata, então: ");
       printf("\nQuociente: %d.", q);
       printf("\nE o Resto é: %d.", r);

    }
    printf("\n.................................");
    return 0;


}