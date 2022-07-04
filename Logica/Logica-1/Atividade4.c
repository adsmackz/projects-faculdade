#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

 int main(){
     setlocale(LC_ALL,"");
    
    float altBea = 140;
    float altCat = 145;
    int anos = 0;
    
    while (altBea <= altCat){
        altBea = altBea + 2.1;
        altCat = altCat + 1.1;
        anos = anos + 1;
        
    }
    
    printf("Passaram-se %d anos para que Beatriz fosse maior que Catarina.", anos);


 }
	   



