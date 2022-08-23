#include <stdio.h>//Biblioteca com funções pré-programadas, contém declarações de funções de entrada e saída.
#include <stdlib.h>//Biblioteca com funções envolvendo alocação de memória, controle de processos, conversões e outras.
#include <locale.h> //Biblioteca para definição de configurações locais

/*
	Name:
	Copyright:
	Author: Jackson Loredo
	Date: 00/00/22
	Description: Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e 
	apresente o valor do rendimento e o valor total (valor do depósito + valor do rendimento).
*/


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese"); //Definição para uso de configurações em portugues

	float dep;
	float tax;
	float rend;
	float tot;
	float tax_por;


	
	printf("Olá, insira o valor do depósito: ");
	scanf("%f", &dep);

	printf("Olá, insira o valor da taxa de juros em porcentagem: ");
	scanf("%f", &tax);
	
						
	tax_por = tax/100;
			
	rend = dep * tax_por;
			
	tot = rend + dep;
			
	
	printf("O valor do rendimento: %.2f, total",rend);
	printf("O valor total: %f",tot);
			
			
	return(0);
}


