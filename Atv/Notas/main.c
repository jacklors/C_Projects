#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para defini��o de configura��es locais

/*
	Name:
	Copyright:
	Author:
	Date: 00/00/22
	Description: Em um programa desenvolvido na Linguagem C, foi solicitado que o desenvolvedor criasse uma l�gica que calculasse a m�dia de tr�s notas e, logo ap�s, 
	indicasse ao usu�rio se o aluno foi reprovado (m�dia abaixo de 5), se ficou em recupera��o (m�dia entre 5 e 6.9) ou aprovado (acima de 7). Entretanto, o usu�rio acusa que o programa est� com problema,
	 pois ao digitar as tr�s notas, o valor da m�dia se for abaixo de 7 mostra na tela o status errado.

Observe o c�digo desenvolvido pelo programador e aponte em que linhas podem conter os erros que estejam mostrando o status errado, justificando o erro. 
Logo ap�s a identifica��o das linhas e justificativa do erro indique qual a corre��o que dever� ser feita no c�digo para que o c�lculo fique correto.
*/


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese"); //Defini��o para uso de configura��es em portugues

		float p1, p2, p3, media = 0.0;
		printf("Digite a nota 1\n");
    	scanf("%f", &p1);
    	printf("Digite a nota 2\n");
    	scanf("%f", &p2);
    	printf("Digite a nota 3\n");
		scanf("%f", &p3);
	   
		media = (p1+p2+p3)/3;
	    printf("M�dia calculada %f\n", media);
	      
   			if(media < 5){
        		printf("Reprovado\n");
    		
			}
  
  			if(media >= 5 && media < 7){
         		printf("Recupera��o\n");
   			
			}
  			
			if(media > 7){
             	printf("Aprovado\n");
   			}

   return 0;
 }


