#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para definição de configurações locais

/*
	Name:
	Copyright:
	Author: Jackson Loredo
	Date: 06/05/22
	Description: Imprimir uma matriz na tela.
*/


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese"); //Definição para uso de configurações em portugues
	
	int inlinha = 0;
	int incoluna = 0;
	
	int matriz [3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	
	for(inlinha = 0;inlinha<3;inlinha++){
	
		for(incoluna = 0;incoluna<3;incoluna++){
		
			printf("%d", matriz[inlinha][incoluna]);
			
		}

		printf("\n");
	}



}

