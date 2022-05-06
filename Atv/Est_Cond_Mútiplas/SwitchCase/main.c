#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para defini��o de configura��es locais

/*
	Name:
	Copyright:
	Author: Jackson Loredo
	Date: 06/05/22
	Description: Desenvolva um algoritmo que, dependendo do valor (n�mero inteiro) digitado pelo usu�rio, 
	imprimir na tela dia da semana correspondente �quele n�mero:
 	1 ? domingo
 	2 ? segunda-feira
 	3 ? ter�a-feira
 	4 ? quarta-feira
 	5 ? quinta-feira
 	6 ? sexta-feira
 	7 ? s�bado
*/
int main() {
	
	setlocale(LC_ALL, "Portuguese"); //Defini��o para uso de configura��es em portugues
	
	int semana;
	
	printf("Digite um n�mero inteiro: \n");
	scanf("%d", &semana);
	
	switch (semana){
	
		case 1:
		printf("Domingo \n");
			break;
	
		case 2:
		printf("Segunda-Feira \n");
			break;
	
		case 3:
		printf("Ter�a-feira \n");
			break;
	
		case 4:
		printf("Quarta-feira \n");
			break;
	
		case 5:
		printf("Quinta-feira \n");
			break;
	
		case 6:
		printf("Sexta-feira \n");
			break;
	
		case 7:
		printf("S�bado \n");
			break;
	
	}
}
