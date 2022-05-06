#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para definição de configurações locais

/*
	Name: While
	Copyright:
	Author: Jackosn Loredo
	Date: 06/05/22
	Description: Teste de utilização da estrutura de repetição condicionada While.
*/


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese"); //Definição para uso de configurações em portugues
	 
	int cond = 0;
	//Garantir que ela tenha sido inicializada.
	 
	while(cond < 100) {
	 	
	 	printf("%dAguarde.... \n", cond);
	 	
	 	cond = cond + 1; //cond ++;
	}

	
	
	
	
}

