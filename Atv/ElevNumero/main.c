#include <stdio.h>//Biblioteca com fun��es pr�-programadas, cont�m declara��es de fun��es de entrada e sa�da.
#include <stdlib.h>//Biblioteca com fun��es envolvendo aloca��o de mem�ria, controle de processos, convers�es e outras.
#include <locale.h> //Biblioteca para defini��o de configura��es locais
#include <math.h>//Biblioteca de fun��es intrisecas aritmeticas.

/*
	Name:
	Copyright:
	Author:
	Date: 00/00/22
	Description: Escreva um programa que receba dois n�meros, calcule e apresente o resultado 
	do primeiro n�mero elevado ao segundo
*/


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese"); //Defini��o para uso de configura��es em portugues

	float num1;
	float num2;
	float result;

	printf("Ol�, insira o primeiro n�mero: ");
	scanf("%f", &num1);
	
	
	printf("Ol�, insira o segundo n�mero: ");
	scanf("%f", &num2);

	result = pow (num1, num2);
	
	
	printf("Resultado de elevar %.2f ao n�mero %.2f, foi: %.2f",num1,num2,result); 
	
}


