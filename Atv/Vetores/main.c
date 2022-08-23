#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para definição de configurações locais

/*
	Name:
	Copyright:
	Author: Jackson Loredo
	Date: 06/05/22
	Description: Desenvolva um programa que peça para o professor informar as quatro notas bimestrais de um aluno.

*/


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese"); //Definição para uso de configurações em portugues
	
	float notas [4];
	int indice;
	int cont = 4;
	
	for(indice = 0;indice < cont;indice++) {
	
		printf("Digite a nota do aluno %d: \n ",indice+1);
		scanf("%f", &notas[indice]);
	

	}




}

