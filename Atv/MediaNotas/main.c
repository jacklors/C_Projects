#include <stdio.h>//Biblioteca com funções pré-programadas, contém declarações de funções de entrada e saída.
#include <stdlib.h>//Biblioteca com funções envolvendo alocação de memória, controle de processos, conversões e outras.
#include <locale.h> //Biblioteca para definição de configurações locais

/*
	Name:
	Copyright:
	Author: Jackson Loredo
	Date: 00/00/22
	Description: Elabore um programa que receba quatro notas e calcule a média aritmética entre ela
*/


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese"); //Definição para uso de configurações em portugues


	int controle;
	int indice;
	float nota;
	float soma;
	float resultado;
	
	for (controle = 0; controle < 4; controle++)
	{
		printf("Olá, digite a %d nota: ",indice++);
		scanf("%f",&nota);
		
		soma = soma + nota;
			
	}
	
	
		resultado = soma/4;
	
		printf("A média das quatro notas inseridas são: %.2f", resultado);


}


