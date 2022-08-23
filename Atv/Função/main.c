#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para definição de configurações locais

/*
	Name:
	Copyright:
	Author: Jackson Loredo
	Date: 08/05/22
	Description:Criar uma função que receba o peso em quilos e o converta em gramas. 
	Invocar tal função para testá-la em tempo de execução.

*/


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese"); //Definição para uso de configurações em portugues

//Criando a função

float convertPeso (float quilos){
	
	float gramas;
	
	gramas = quilos * 1000;
	
	return gramas;
	
	}


//Invocando a função

 	float qui, gra;
 	
 	printf("Digite o peso em quilos: \n");
 	scanf("%f", &qui);
 	
 	gra = convertPeso(qui);
 	printf("O peso é de %.1f gramas. \n", gra);

}

