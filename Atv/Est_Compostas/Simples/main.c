#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para definição de configurações locais

/*
	Name:
	Copyright:
	Author: Jackson Loredo
	Date: 05/05/22
	Description: Desenvolva um algoritmo que peça para o usuário informar um número. O algoritmo deverá informar se o número é par ou ímpar.
*/

int main() {
	setlocale(LC_ALL, "Portuguese"); //Definição para uso de configurações em portugues
	
	int n;
	
	printf("Digite um valor inteiro: \n");
	
	scanf("%d",&n);
	
	if (n%2 != 0){
	
		printf("Valor digitado Impar. \n");
	
	}else{
	
	
		printf("Valor digitado Par. \n");
	
	}
}
