#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para definição de configurações locais

/*
	Name:
	Copyright:
	Author: Jackson Loredo
	Date: 05/05/22
	Description: Demonstrando Entrada e Saída de Dados.
*/
int main() {
	setlocale(LC_ALL, "Portuguese"); //Definição para uso de configurações em portugues
	
	int idade;
	
	printf("Digite a idade: \n");
	//Escrita de dados na tela (printf)
	
	scanf("%d", &idade);
	//Leitura de dados digitados (scanf"<tipo_variavel>", &<variavel>)
	
	printf("A idade digitada foi : %d", idade);
	//Escrita de dados na tela (printf)

}
