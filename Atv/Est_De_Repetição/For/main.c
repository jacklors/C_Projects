#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para defini��o de configura��es locais

/*
	Name: For
	Copyright:
	Author: Jackson Loredo
	Date: 06/05/22 11:22
	Description: Teste de utiliza��o da estrutura de repti��o (For).
*/


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); //Defini��o para uso de configura��es em portugues
	
	int contador;
	//pode-se usar letra i ou j como padr�o.

	for(contador = 0; contador <= 100; contador++) {
		printf("%d Aguarde.... \n", contador );
	}





}

