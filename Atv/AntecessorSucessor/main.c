#include <stdio.h>//Biblioteca com fun��es pr�-programadas, cont�m declara��es de fun��es de entrada e sa�da.
#include <stdlib.h>//Biblioteca com fun��es envolvendo aloca��o de mem�ria, controle de processos, convers�es e outras.
#include <locale.h> //Biblioteca para defini��o de configura��es locais

/*
	Name:
	Copyright:
	Author: Jackson Loredo
	Date: 00/00/22
	Description: programa que leia um n�mero inteiro e apresente seu antecessor e seu sucessor. 
*/


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese"); //Defini��o para uso de configura��es em portugues
	
	
	
	int num;
	int ant;
	int sec;

		printf("Ol�, digite um n�mero: ");
		scanf("%d", &num);

			sec = num + 1;
			ant = num - 1;
			
			
			printf("Seu antecessor: %d \n", ant);	
			printf("Seu sucessor: %d \n", sec);	
	
	
}


