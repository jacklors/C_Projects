#include <stdio.h>//Biblioteca com fun��es pr�-programadas, cont�m declara��es de fun��es de entrada e sa�da.
#include <stdlib.h>//Biblioteca com fun��es envolvendo aloca��o de mem�ria, controle de processos, convers�es e outras.
#include <locale.h> //Biblioteca para defini��o de configura��es locais

/*
	Name:
	Copyright:
	Author: Jackson Loredo
	Date: 00/00/22
	Description: Elabore um programa que receba quatro notas e calcule a m�dia aritm�tica entre ela
*/


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese"); //Defini��o para uso de configura��es em portugues


	int controle;
	int indice;
	float nota;
	float soma;
	float resultado;
	
	for (controle = 0; controle < 4; controle++)
	{
		printf("Ol�, digite a %d nota: ",indice++);
		scanf("%f",&nota);
		
		soma = soma + nota;
			
	}
	
	
		resultado = soma/4;
	
		printf("A m�dia das quatro notas inseridas s�o: %.2f", resultado);


}


