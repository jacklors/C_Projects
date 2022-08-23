#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para definição de configurações locais

/*
	Name:
	Copyright:
	Author:
	Date: 00/00/22
	Description: Em um programa desenvolvido na Linguagem C, foi solicitado que o desenvolvedor criasse uma lógica que calculasse a média de três notas e, logo após, 
	indicasse ao usuário se o aluno foi reprovado (média abaixo de 5), se ficou em recuperação (média entre 5 e 6.9) ou aprovado (acima de 7). Entretanto, o usuário acusa que o programa está com problema,
	 pois ao digitar as três notas, o valor da média se for abaixo de 7 mostra na tela o status errado.

Observe o código desenvolvido pelo programador e aponte em que linhas podem conter os erros que estejam mostrando o status errado, justificando o erro. 
Logo após a identificação das linhas e justificativa do erro indique qual a correção que deverá ser feita no código para que o cálculo fique correto.
*/


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese"); //Definição para uso de configurações em portugues

		float p1, p2, p3, media = 0.0;
		printf("Digite a nota 1\n");
    	scanf("%f", &p1);
    	printf("Digite a nota 2\n");
    	scanf("%f", &p2);
    	printf("Digite a nota 3\n");
		scanf("%f", &p3);
	   
		media = (p1+p2+p3)/3;
	    printf("Média calculada %f\n", media);
	      
   			if(media < 5){
        		printf("Reprovado\n");
    		
			}
  
  			if(media >= 5 && media < 7){
         		printf("Recuperação\n");
   			
			}
  			
			if(media > 7){
             	printf("Aprovado\n");
   			}

   return 0;
 }


