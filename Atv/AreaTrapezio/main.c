#include <stdio.h>//Biblioteca com fun��es pr�-programadas, cont�m declara��es de fun��es de entrada e sa�da.
#include <stdlib.h>//Biblioteca com fun��es envolvendo aloca��o de mem�ria, controle de processos, convers�es e outras.
#include <locale.h> //Biblioteca para defini��o de configura��es locais

/*
	Name:
	Copyright:
	Author:
	Date: 00/00/22
	Description: Elabore um programa que calcule a �rea de um trap�zio
*/


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese"); //Defini��o para uso de configura��es em portugues

	float area;
	float altura;
	float base_maior;
	float base_menor;
	
	printf("Informe o valor da base maior: ");
	scanf("%f",&base_maior);
	
	printf("\n Informe o valor da base menor: ");
	scanf("%f",&base_menor);
	
	printf("\n Informe o valor da altura:");
	scanf("%f",&altura);


	area = (altura*(base_maior + base_menor))/2;
	
	printf("\n A �rea do trap�zio �: %.2f", area);
 	return (0);
}


