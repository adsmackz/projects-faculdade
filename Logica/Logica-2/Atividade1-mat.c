	#include <stdlib.h>
	#include <stdio.h>

    int main(){
		int mat[3][3];
		int i, j;  //i representa as linhas e j as colunas

       //Pedir para o usúario informar os valroes de mat[i][j]
		for(i = 0; i < 3; i++){          //for(i = 0; i <= 2 i++)
			for(j = 0; j < 3; j++){      //for(j = 0; j <= 2 j++)
			    printf("Insira o elemento mat[%d][%d]:\n", i, j);
				scanf("%d", &mat[i][j]);
				fflush(stdin);
			}

		}	

       //Executar a logica das saidas de dados que enunciado pede
	    for(i = 0; i < 3; i++){          
			for(j = 0; j < 3; j++){      
			    if(i == j){                //Estou acessando a digonal principal
					printf("%d", mat[i][j]);
				} else {
					printf("0 ");
				}
			}
			printf("\n");	
		}	    
    }
	 
	 
	
