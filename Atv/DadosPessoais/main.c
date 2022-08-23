#include <stdio.h>//Biblioteca com funções pré-programadas, contém declarações de funções de entrada e saída. 
#include <stdlib.h>//Biblioteca com funções envolvendo alocação de memória, controle de processos, conversões e outras.
#include <locale.h> //Biblioteca para definição de configurações locais

/*
	Name:
	Copyright:
	Author:
	Date: 00/00/22
	Description: Elaborar um programa que leia nome, idade e altura de uma pessoa e exiba 
nome, idade, altura e ano de nascimento dela.
*/


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese"); //Definição para uso de configurações em portugues

	
	int idade;
	char nome[30];
	float altura;
	int nascimento;
	int ano_atual = 2022;



	
	printf("Olá, insira seu nome: \n");
	scanf("%s",&nome);
	
	printf("Insira sua idade: \n");
	scanf("%d", &idade);
	
	printf("Insira sua altura: \n");
	scanf("%f", &altura);
	
	nascimento = ano_atual - idade;
	
	
	
	printf("\nSeu nome é %s e você tem %d anos, nasceu no ano de %d e mede %.2f de altura. \n",nome,idade,nascimento,altura);





}

