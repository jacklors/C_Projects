#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para defini��o de configura��es locais

/*
	Name:
	Copyright:
	Author:
	Date: 08/05/22
	Description: Desenvolver programa que leia dois n�meros e exiba o resultado
	 da soma entre eles, repetidamente.



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese"); //Defini��o para uso de configura��es em portugues
	
	void somaDoisNumeros (){
		int x,y,resultado;
		
		printf("Digite o primeiro n�mero: \n");
		scanf("%d", &x);
		
		printf("Digite o segundo n�mero: \n");
		scanf("%d", &y);
		
		resultado = x + y;
		
		printf("Resultado: %d. \n", resultado);
		
		
		
	}
	
	somaDoisNumeros ();
 
}

