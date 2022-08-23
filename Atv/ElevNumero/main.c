#include <stdio.h>//Biblioteca com funções pré-programadas, contém declarações de funções de entrada e saída.
#include <stdlib.h>//Biblioteca com funções envolvendo alocação de memória, controle de processos, conversões e outras.
#include <locale.h> //Biblioteca para definição de configurações locais
#include <math.h>//Biblioteca de funções intrisecas aritmeticas.

/*
	Name:
	Copyright:
	Author:
	Date: 00/00/22
	Description: Escreva um programa que receba dois números, calcule e apresente o resultado 
	do primeiro número elevado ao segundo
*/


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese"); //Definição para uso de configurações em portugues

	float num1;
	float num2;
	float result;

	printf("Olá, insira o primeiro número: ");
	scanf("%f", &num1);
	
	
	printf("Olá, insira o segundo número: ");
	scanf("%f", &num2);

	result = pow (num1, num2);
	
	
	printf("Resultado de elevar %.2f ao número %.2f, foi: %.2f",num1,num2,result); 
	
}


