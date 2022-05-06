#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para definição de configurações locais

/*
	Name: For
	Copyright:
	Author: Jackson Loredo
	Date: 06/05/22 11:22
	Description: Teste de utilização da estrutura de reptição (For).
*/


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); //Definição para uso de configurações em portugues
	
	int contador;
	//pode-se usar letra i ou j como padrão.

	for(contador = 0; contador <= 100; contador++) {
		printf("%d Aguarde.... \n", contador );
	}





}

