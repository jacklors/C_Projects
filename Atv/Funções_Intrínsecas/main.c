#include <stdio.h>
#include <stdlib.h>
#include <math.h>//Biblioteca de fun��es intr�nsecas
#include <locale.h> //Biblioteca para defini��o de configura��es locais

/*
	Name:
	Copyright:
	Author: Jackson Loredo
	Date: 05/05/22
	Description: Fun��es 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); //Defini��o para uso de configura��es em portugues
	
	float A, Resultado;//
	
	A = 16;
	
	Resultado = sqrt(A);
	//sqrt = calcula raiz quadrada.
	
     printf("%g", Resultado);
     //"%g" = como a variavel � float a impress�o desta varivel deve ser indicada na saida, 
	 //com especificador de formato, esse utilizado imprime oque for menor, pode ser float(%f) ou 
	 //nota��o cientifica (e%).
	 
	
	//printf("Texto"<tipo_da_variavel>, <variavel >)Saida de dados

}
