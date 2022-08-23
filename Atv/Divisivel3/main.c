#include <stdio.h>//Biblioteca com funções pré-programadas, contém declarações de funções de entrada e saída.
#include <stdlib.h>//Biblioteca com funções envolvendo alocação de memória, controle de processos, conversões e outras.
#include <locale.h> //Biblioteca para definição de configurações locais

/*
	Name: Identificador de Divisibilidade
	Copyright:
	Author: Jackson Loredo
	Date: 01/06/22
	Description: O código abaixo representa um programa na linguagem em C cujo objetivo é escrever na tela os números que são divisíveis por 3 de uma matriz.
	Entretanto no código está faltando a implementação da sub-rotina que faz a busca dos números divisíveis e escreve na tela.
	Deve ser escrito na tela a linha e a coluna da matriz que se encontra o número divisível por 3 bem como o próprio número, exemplo:

*/


/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//Código que deve ser inserido aqui

int identificarDivisivelPor3 (int matriz[5][5]) 
{
  	int controle_linha;
	int controle_coluna;
	
	for(controle_linha=0; controle_linha <5;)
	{
		for (controle_coluna=0; controle_coluna <5; ) 
		{
			if(matriz[controle_linha][controle_coluna] % 3 == 0)
			{
				printf("Número divisível por 3 encontrado na linha %d, coluna %d, numero %d \n",controle_linha + 1,controle_coluna + 1,matriz[controle_linha][controle_coluna]);
				
				
			}
		
			controle_coluna++;
		}
		controle_linha++;
		
	}	
	
	
}

int main() {
	setlocale(LC_ALL, "Portuguese"); //Definição para uso de configurações em portugues
	
	



    //Matriz com valores fixo para nao fazer a leitura
    int matriz[5][5] = {{15,9,23,43,49},
                        {3,36,55,53,18},
                        {12,42,51,57,34},
                        {6,32,28,25,62},
                        {72,91,81,16,41}};
    
	
   
	identificarDivisivelPor3(matriz);
	return 0;
	
	
	
}




