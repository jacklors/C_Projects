#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para defini��o de configura��es locais

/*
	Name:
	Copyright:
	Author: Jackson Loredo
	Date: 05/05/22
	Description: Desenvolva um algoritmo que pe�a para o usu�rio informar um n�mero. O algoritmo dever� informar se o n�mero � par ou �mpar.
*/

int main() {
	setlocale(LC_ALL, "Portuguese"); //Defini��o para uso de configura��es em portugues
	
	int n;
	
	printf("Digite um valor inteiro: \n");
	
	scanf("%d",&n);
	
	if (n%2 != 0){
	
		printf("Valor digitado Impar. \n");
	
	}else{
	
	
		printf("Valor digitado Par. \n");
	
	}
}
