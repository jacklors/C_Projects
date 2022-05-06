#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para defini��o de configura��es locais

/*
	Name: Subtra��oWhile
	Copyright:
	Author: Jackson Loredo
	Date: 06/05/22
	Description: Escrever um algoritmo para descobrir quantas vezes � poss�vel subtrair 
	o valor 2 de um n�mero N qualquer (informado pelo usu�rio), antes que o resultado das
	subtra��es se torne negativo. A intera��o com o usu�rio faz com que seja dif�cil prever
	quantas vezes o la�o dever� se repetir
*/


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese"); //Defini��o para uso de configura��es em portugues


	int n = 0;
	int valor = 2;
	int vezes;

	printf("Digite um n�mero: \n");
	scanf("%d", &n);

	
	while(n > 0) {
		
		n = n - valor;
  		vezes = vezes + 1;		
	
	}

	printf("� possivel subtrair %d vezes \n" , vezes);

}

