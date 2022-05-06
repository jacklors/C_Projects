#include <stdio.h>
#include <stdlib.h>
#include <math.h>//Biblioteca de funções intrínsecas
#include <locale.h> //Biblioteca para definição de configurações locais

/*
	Name:
	Copyright:
	Author: Jackson Loredo
	Date: 05/05/22
	Description: Funções 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); //Definição para uso de configurações em portugues
	
	float A, Resultado;//
	
	A = 16;
	
	Resultado = sqrt(A);
	//sqrt = calcula raiz quadrada.
	
     printf("%g", Resultado);
     //"%g" = como a variavel é float a impressão desta varivel deve ser indicada na saida, 
	 //com especificador de formato, esse utilizado imprime oque for menor, pode ser float(%f) ou 
	 //notação cientifica (e%).
	 
	
	//printf("Texto"<tipo_da_variavel>, <variavel >)Saida de dados

}
