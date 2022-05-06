#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para definição de configurações locais

/*
	Name:
	Copyright:
	Author: Jackson Loredo
	Date: 05/05/22
	Description: Demonstrando condições simples.
*/

int main() {
	
	setlocale(LC_ALL, "Portuguese"); //Definição para uso de configurações em portugues
	printf("<-------------------- INICIO   -------------------->\n");
	
	float n;
	
	
	/*Caso o número seja maior do que 10, o algoritmo deverá imprimir: “Maior que 10”.*/
	
	printf("<-------------------- Simples  -------------------->\n");
	
	printf("Digite um valor: \n");
	
	scanf("%f", &n);
 
	
	if (n > 10)
 
	 {
 		printf("Este valor maior que 10. \n");
 
 	}
 	
 	/*Imagine que é preciso informar ao usuário se um número é maior que 10 e, simultaneamente, menor que 20*/

	printf("<--------------------Complexas--------------------->\n");

	
	printf("Digite um valor: \n");
	
	scanf("%f", &n);
 
	
	if (n > 10 && n < 20)
 
	 {
 		printf("Este valor entre que 10 e 20. \n");
 
 	}
 	
 	
	/*Imagine que é preciso informar ao usuário se um número é maior que 10 e, simultaneamente, menor que 20:*/
	 
	 
	printf("<--------------------Complexas--------------------->\n");

	
	printf("Digite um valor: \n");
	
	scanf("%f", &n);
 
	
	if (n > 10 || n == 0)
 
	 {
 		printf("Uma das condições está ok. \n");
 
 	}
 	
 	printf("<--------------------    FIM    -------------------->\n");
}
