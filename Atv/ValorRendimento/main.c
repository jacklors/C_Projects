#include <stdio.h>//Biblioteca com fun��es pr�-programadas, cont�m declara��es de fun��es de entrada e sa�da.
#include <stdlib.h>//Biblioteca com fun��es envolvendo aloca��o de mem�ria, controle de processos, convers�es e outras.
#include <locale.h> //Biblioteca para defini��o de configura��es locais

/*
	Name:
	Copyright:
	Author: Jackson Loredo
	Date: 00/00/22
	Description: Fa�a um programa que receba o valor de um dep�sito e o valor da taxa de juros, calcule e 
	apresente o valor do rendimento e o valor total (valor do dep�sito + valor do rendimento).
*/


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese"); //Defini��o para uso de configura��es em portugues

	float dep;
	float tax;
	float rend;
	float tot;
	float tax_por;


	
	printf("Ol�, insira o valor do dep�sito: ");
	scanf("%f", &dep);

	printf("Ol�, insira o valor da taxa de juros em porcentagem: ");
	scanf("%f", &tax);
	
						
	tax_por = tax/100;
			
	rend = dep * tax_por;
			
	tot = rend + dep;
			
	
	printf("O valor do rendimento: %.2f, total",rend);
	printf("O valor total: %f",tot);
			
			
	return(0);
}


