#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para definição de configurações locais

/*
	Name:
	Copyright:
	Author: Jackson Loredo
	Date: 06/05/22
	Description:Desenvolver um programa que peça para o usuário informar valores inteiros. 
				
				O programa deverá realizar a soma total dos os valores informados
				
				O algoritmo deverá ser interrompido quando a soma dos valores informados pelo usuário for maior do que 100.

*/


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese"); //Definição para uso de configurações em portugues
	
	int val;
	int soma = 0;
	
	

	
	
	while(soma <= 100) {
			
		printf("Digite um valor inteiro para somar: ");
		
		scanf("%d" , &val);
		
		soma = soma + val;
		
		printf("%d \n", soma);
	
	}
	
	printf("Soma: %d, ultrapassou o limite de 100! \n", soma);

}

