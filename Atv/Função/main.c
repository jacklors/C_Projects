#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para defini��o de configura��es locais

/*
	Name:
	Copyright:
	Author: Jackson Loredo
	Date: 08/05/22
	Description:Criar uma fun��o que receba o peso em quilos e o converta em gramas. 
	Invocar tal fun��o para test�-la em tempo de execu��o.

*/


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese"); //Defini��o para uso de configura��es em portugues

//Criando a fun��o

float convertPeso (float quilos){
	
	float gramas;
	
	gramas = quilos * 1000;
	
	return gramas;
	
	}


//Invocando a fun��o

 	float qui, gra;
 	
 	printf("Digite o peso em quilos: \n");
 	scanf("%f", &qui);
 	
 	gra = convertPeso(qui);
 	printf("O peso � de %.1f gramas. \n", gra);

}

