#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para defini��o de configura��es locais

/*
	Name:
	Copyright:
	Author: Jackson Loredo
	Date: 05/05/22
	Description: Demonstrando condi��es simples.
*/

int main() {
	
	setlocale(LC_ALL, "Portuguese"); //Defini��o para uso de configura��es em portugues
	printf("<-------------------- INICIO   -------------------->\n");
	
	float n;
	
	
	/*Caso o n�mero seja maior do que 10, o algoritmo dever� imprimir: �Maior que 10�.*/
	
	printf("<-------------------- Simples  -------------------->\n");
	
	printf("Digite um valor: \n");
	
	scanf("%f", &n);
 
	
	if (n > 10)
 
	 {
 		printf("Este valor maior que 10. \n");
 
 	}
 	
 	/*Imagine que � preciso informar ao usu�rio se um n�mero � maior que 10 e, simultaneamente, menor que 20*/

	printf("<--------------------Complexas--------------------->\n");

	
	printf("Digite um valor: \n");
	
	scanf("%f", &n);
 
	
	if (n > 10 && n < 20)
 
	 {
 		printf("Este valor entre que 10 e 20. \n");
 
 	}
 	
 	
	/*Imagine que � preciso informar ao usu�rio se um n�mero � maior que 10 e, simultaneamente, menor que 20:*/
	 
	 
	printf("<--------------------Complexas--------------------->\n");

	
	printf("Digite um valor: \n");
	
	scanf("%f", &n);
 
	
	if (n > 10 || n == 0)
 
	 {
 		printf("Uma das condi��es est� ok. \n");
 
 	}
 	
 	printf("<--------------------    FIM    -------------------->\n");
}
