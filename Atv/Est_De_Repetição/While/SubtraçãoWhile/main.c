#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para definição de configurações locais

/*
	Name: SubtraçãoWhile
	Copyright:
	Author: Jackson Loredo
	Date: 06/05/22
	Description: Escrever um algoritmo para descobrir quantas vezes é possível subtrair 
	o valor 2 de um número N qualquer (informado pelo usuário), antes que o resultado das
	subtrações se torne negativo. A interação com o usuário faz com que seja difícil prever
	quantas vezes o laço deverá se repetir
*/


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese"); //Definição para uso de configurações em portugues


	int n = 0;
	int valor = 2;
	int vezes;

	printf("Digite um número: \n");
	scanf("%d", &n);

	
	while(n > 0) {
		
		n = n - valor;
  		vezes = vezes + 1;		
	
	}

	printf("É possivel subtrair %d vezes \n" , vezes);

}

