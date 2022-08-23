#include <stdio.h>//Biblioteca com funções pré-programadas, contém declarações de funções de entrada e saída.
#include <stdlib.h>//Biblioteca com funções envolvendo alocação de memória, controle de processos, conversões e outras.
#include <locale.h> //Biblioteca para definição de configurações locais

/*
	Name:
	Copyright:
	Author:
	Date: 00/00/22
	Description: Elabore um programa que calcule a área de um trapézio
*/


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese"); //Definição para uso de configurações em portugues

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
	
	printf("\n A área do trapézio é: %.2f", area);
 	return (0);
}


