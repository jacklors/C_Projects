#include <stdio.h>//Biblioteca com funções pré-programadas, contém declarações de funções de entrada e saída.
#include <stdlib.h>//Biblioteca com funções envolvendo alocação de memória, controle de processos, conversões e outras.
#include <locale.h> //Biblioteca para definição de configurações locais

/*
	Name:
	Copyright:
	Author: Jackson Loredo
	Date: 00/00/22
	Description: programa que leia um número inteiro e apresente seu antecessor e seu sucessor. 
*/


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese"); //Definição para uso de configurações em portugues
	
	
	
	int num;
	int ant;
	int sec;

		printf("Olá, digite um número: ");
		scanf("%d", &num);

			sec = num + 1;
			ant = num - 1;
			
			
			printf("Seu antecessor: %d \n", ant);	
			printf("Seu sucessor: %d \n", sec);	
	
	
}


