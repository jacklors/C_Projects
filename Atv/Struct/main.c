#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h> //Biblioteca para defini��o de configura��es locais

/*
	Name:
	Copyright:
	Author: Jackson Loredo
	Date: 08/05/22
	Description: Struct
*/


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	//Defini��o do produto
	struct produto
	{
	
	 
	int cod;
	float preco;
	char descr[100]; //String
};
	
	
	//Criando e alocando em memoria.
	

	
int main() {
	setlocale(LC_ALL, "Portuguese"); //Defini��o para uso de configura��es em portugues

	//struct produto prod; (Seria apenas um produto)

	//	prod.cod =1;
	//	prod.preco = 14.56;
	//	strcpy(prod.descr, "lim�o"); //Atribui��o
	//	
	//	printf("%d - %f - %s \n", prod.cod, prod.preco, prod.descr);



	struct produto prodlista[10]; //Uma lista de produto
	
	int i;
	
	for(i = 0; i<10; i++){
		
		prodlista[i].cod = i; //Vai entrar codigo automatico no produto
		
		printf("Digite o valor do produto %d: \n", i);
		scanf("%f", &prodlista[i].preco);
		fflush(stdin);//Limpar buffer teclado
	
		
		
		printf("Digite a descri��o do produto %d: \n", i);
		gets(prodlista[i].descr);
		fflush(stdin);//Limpar buffer teclado
		
		
	}

}

