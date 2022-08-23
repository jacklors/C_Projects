#include <stdio.h>//Biblioteca com fun��es pr�-programadas, cont�m declara��es de fun��es de entrada e sa�da.
#include <stdlib.h>//Biblioteca com fun��es envolvendo aloca��o de mem�ria, controle de processos, convers�es e outras.
#include <locale.h> //Biblioteca para defini��o de configura��es locais

/*
	Name: Identificador de Divisibilidade
	Copyright:
	Author: Jackson Loredo
	Date: 01/06/22
	Description: O c�digo abaixo representa um programa na linguagem em C cujo objetivo � escrever na tela os n�meros que s�o divis�veis por 3 de uma matriz.
	Entretanto no c�digo est� faltando a implementa��o da sub-rotina que faz a busca dos n�meros divis�veis e escreve na tela.
	Deve ser escrito na tela a linha e a coluna da matriz que se encontra o n�mero divis�vel por 3 bem como o pr�prio n�mero, exemplo:

*/


/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//C�digo que deve ser inserido aqui

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
				printf("N�mero divis�vel por 3 encontrado na linha %d, coluna %d, numero %d \n",controle_linha + 1,controle_coluna + 1,matriz[controle_linha][controle_coluna]);
				
				
			}
		
			controle_coluna++;
		}
		controle_linha++;
		
	}	
	
	
}

int main() {
	setlocale(LC_ALL, "Portuguese"); //Defini��o para uso de configura��es em portugues
	
	



    //Matriz com valores fixo para nao fazer a leitura
    int matriz[5][5] = {{15,9,23,43,49},
                        {3,36,55,53,18},
                        {12,42,51,57,34},
                        {6,32,28,25,62},
                        {72,91,81,16,41}};
    
	
   
	identificarDivisivelPor3(matriz);
	return 0;
	
	
	
}




