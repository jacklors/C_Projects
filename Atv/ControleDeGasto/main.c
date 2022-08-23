#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para definição de configurações locais

/*
	Name:
	Copyright:
	Author: Jackson Loredo
	Date: 13/05/22
	Description: Um algoritmo onde irá ler N marcações de quantidade de litros de água de cada apartamento, no final da leitura deverá mostrar na tela o valor mais alto em metros cúbicos de água que foi consumido.
*/


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese"); //Definição para uso de configurações em portugues
	
		int qtd_leitura;
		int controle;
		int controle_qtd=1;
		float leitura[50];
		int maior_pos;
		float valor;
		
		printf("Olá, insira a quantidade de apartamentos para a leitura em seu edificio: ");
		scanf("%d",&qtd_leitura);
		
		
		for(controle=0;controle<qtd_leitura;controle++)
		{
			printf("Insira a leitura em litros do consumo mensal do apartamento N°%d:",controle_qtd);
			scanf("%f",&leitura[controle]);
		
			controle_qtd++;
			
			if (leitura[controle] > leitura[maior_pos])
			{
				maior_pos = controle;
			
				if (leitura[controle] > valor)
				{
					valor = leitura[controle];
				
				}
				
			}
			
			

			
			
		}
	
			float valor_cubico = valor/1000;
			
			maior_pos = maior_pos + 1;
			
			printf("O apartamento de N°%d, tem o maior consumo de agua que é: %g metros cúbico(m3)",maior_pos,valor_cubico);
	
	
	}
		
	
	
	
	
	
	
	

