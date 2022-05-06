#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para definição de configurações locais

/*
	Name:
	Copyright:
	Author: Jackson Loredo
	Date: 06/05/22
	Description: Desenvolva um algoritmo que, dependendo do valor (número inteiro) digitado pelo usuário, 
	imprimir na tela dia da semana correspondente àquele número:
 	1 ? domingo
 	2 ? segunda-feira
 	3 ? terça-feira
 	4 ? quarta-feira
 	5 ? quinta-feira
 	6 ? sexta-feira
 	7 ? sábado
*/
int main() {
	
	setlocale(LC_ALL, "Portuguese"); //Definição para uso de configurações em portugues
	
	int semana;
	
	printf("Digite um número inteiro: \n");
	scanf("%d", &semana);
	
	switch (semana){
	
		case 1:
		printf("Domingo \n");
			break;
	
		case 2:
		printf("Segunda-Feira \n");
			break;
	
		case 3:
		printf("Terça-feira \n");
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
		printf("Sábado \n");
			break;
	
	}
}
