#include <stdio.h>//Biblioteca com fun��es pr�-programadas, cont�m declara��es de fun��es de entrada e sa�da. 
#include <stdlib.h>//Biblioteca com fun��es envolvendo aloca��o de mem�ria, controle de processos, convers�es e outras.
#include <locale.h> //Biblioteca para defini��o de configura��es locais

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
	setlocale(LC_ALL, "Portuguese"); //Defini��o para uso de configura��es em portugues

	
	int idade;
	char nome[30];
	float altura;
	int nascimento;
	int ano_atual = 2022;



	
	printf("Ol�, insira seu nome: \n");
	scanf("%s",&nome);
	
	printf("Insira sua idade: \n");
	scanf("%d", &idade);
	
	printf("Insira sua altura: \n");
	scanf("%f", &altura);
	
	nascimento = ano_atual - idade;
	
	
	
	printf("\nSeu nome � %s e voc� tem %d anos, nasceu no ano de %d e mede %.2f de altura. \n",nome,idade,nascimento,altura);





}

