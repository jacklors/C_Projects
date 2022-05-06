#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para definição de configurações locais

/*
	Name:
	Copyright:
	Author: Jackson Loredo
	Date: 05/05/22
	Description: Construa um algoritmo que receba, como entrada, a média final de um aluno: 
	Imprima “Aprovado” caso a nota seja maior ou igual a 7.;
	“Exame” se a média for maior ou igual a 4, porém menor que 7;
	Imprima “Reprovado” caso a média seja menor que 4.
*/

int main(int argc, char *argv[]) {
		setlocale(LC_ALL, "Portuguese"); //Definição para uso de configurações em portugues
		
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
