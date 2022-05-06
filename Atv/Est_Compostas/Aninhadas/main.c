#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para defini��o de configura��es locais

/*
	Name:
	Copyright:
	Author: Jackson Loredo
	Date: 05/05/22
	Description: Construa um algoritmo que receba, como entrada, a m�dia final de um aluno: 
	Imprima �Aprovado� caso a nota seja maior ou igual a 7.;
	�Exame� se a m�dia for maior ou igual a 4, por�m menor que 7;
	Imprima �Reprovado� caso a m�dia seja menor que 4.
*/

int main(int argc, char *argv[]) {
		setlocale(LC_ALL, "Portuguese"); //Defini��o para uso de configura��es em portugues
		
		float nota;

	
		printf("Digite sua nota: \n");
		scanf("%f", &nota);
		
		if (nota >= 7){
			printf("Aprovado. \n");
		
		}else{
			
			if(nota < 7 && nota >= 4)
			printf("Exame. \n");
			
			else
			printf("Reprovado.");
		}
		
}
