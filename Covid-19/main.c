#include <stdio.h>//Biblioteca com fun��es pr�-programadas, cont�m declara��es de fun��es de entrada e sa�da.
#include <stdlib.h>//Biblioteca com fun��es envolvendo aloca��o de mem�ria, controle de processos, convers�es e outras.
#include <locale.h> //Biblioteca para defini��o de configura��es locais

/*
	Name: Cadastro Covid-19 
	Author: Jackson Loredo
	Date: 06/06/22
	Description: Registrar os dados de aplica��o das vacinas. 
	
*/


/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct ficha 
{	
	char nome[128];
	char cpf[15];
	char vacina[15];
	char data[15];
	int lote;
	
};

int main() {
	setlocale(LC_ALL, "Portuguese"); //Defini��o para uso de configura��es em portugues
	
	struct ficha cadastro[20];
	
	int codigo = 0;
	int controle;
	int controle_loop = 1;
	int controle_vetor = 0;
	int controle_lista = 0; 
	int menu;
	int menu1;
	int acha;
	char cpfbusca[15];
	
	while (menu != 4)
	{
		system("cls");
		
		printf("===============================MENU===============================\n");
		printf("1 - Cadastrar Vacina \n");
		printf("2 - Listar Aplica��es \n");
		printf("3 - Consultar por CPF \n");
		printf("4 - Sair \n");
		printf("Digite uma op��o: \n");
		scanf("%d", &menu);
		fflush(stdin);
		
		system("cls");
		
			switch (menu)
			{	
				case 1:
					
				
					
					do
					{
											
						
						for (controle=0; controle < controle_loop; controle++)
						{
								
							system("cls");
								
							printf("=============================CADASTRO=============================\n");
							printf("Registro: %d \n",controle_vetor);
							printf("\n");
							printf("\nDigite seu nome: ");
							gets(cadastro[controle_vetor].nome);
							fflush(stdin);
							
							printf("\n");
							printf("Digite seu CPF: ");
							scanf("%s", &cadastro[controle_vetor].cpf);
							fflush(stdin);
							
							printf("\n");
							printf("Digite o nome da vacina: ");
							scanf("%s", &cadastro[controle_vetor].vacina);
							fflush(stdin);
							
							printf("\n");
							printf("Digite a data da aplica��o: ");
							scanf("%s", &cadastro[controle_vetor].data);
							fflush(stdin);
							
							printf("\n");
							printf("Digite o lote da vacina: ");
							scanf("%d", &cadastro[controle_vetor].lote);
							fflush(stdin);
						
							controle_vetor++;
							controle_lista++;
							
							system("cls");
							
									printf("=============================CADASTRO=============================\n");
									printf("1 - Continuar \n");
			 						printf("2 - Menu Principal \n");
			 						printf("3 - Sair \n");
			 						printf("Digite uma op��o: \n");
			 						scanf("%d", &menu1);
			 						fflush(stdin);
			 					
			 							if (menu1 == 1)
			 							{
			 								controle--;
			 				
										}
								
										if (menu1 == 2)
										{
											menu = 0;			
										}
								
										if (menu1 == 3)
										{
											menu = menu + 3;
										}
									
									system("cls");
							
						}
						
					}while(0);
					break;
				
				case 2:
					
				
					printf("============================APLICA��ES============================\n");
					
					do
					{
						for (controle_vetor=0; controle_vetor < controle_lista; controle_vetor++) 
						{
								
															
							printf("\n==================================================================\n");
							printf("C�digo: %d\n",controle_vetor);
							printf("Nome: %s\n",cadastro[controle_vetor].nome);
							printf("CPF: %s\n",cadastro[controle_vetor].cpf);
							printf("Vacina: %s\n",cadastro[controle_vetor].vacina);
							printf("Data: %s\n",cadastro[controle_vetor].data);
							printf("N�mero do lote: %d\n",cadastro[controle_vetor].lote);
							printf("==================================================================\n");
							
							
							
							
						}
							system("pause");
							system("cls");
						
				
					}while(0);
					break;
				
				case 3:
					
					
				
					do
					{
						printf("============================CONSULTA============================\n");
						acha=0;
						printf("Digite o CPF para buscar: ");
						fflush(stdin);
						scanf("%s" ,&cpfbusca);
						printf("\n");
	
							for(controle_vetor =0; controle_vetor < controle_lista; controle_vetor++)
							{
								if(strcmp(cadastro[controle_vetor].cpf,cpfbusca) ==0 )
								{
								
									printf("\n==================================================================\n");
									printf("C�digo: %d\n",controle_vetor);
									printf("Nome: %s\n",cadastro[controle_vetor].nome);
									printf("CPF: %s\n",cadastro[controle_vetor].cpf);
									printf("Vacina: %s\n",cadastro[controle_vetor].vacina);
									printf("Data: %s\n",cadastro[controle_vetor].data);
									printf("N�mero do lote: %d\n",cadastro[controle_vetor].lote);
									printf("==================================================================\n");
									
									Sleep(900);
									system("pause");
									acha++;			
								
								}
			
							} 
						
			
							
 					
							if (!acha )
							{
								printf("CPF n�o encontrado ...... \n");
							
											
	
						   		if (acha > 1) printf("%d CPF iguais ...... \n",acha);
					 			{
								Sleep(9000);
															
								}
							
								system("cls");
							
				 			}
			 					
									
					}while(0);
					break;
				
				default:
					
					do
					{
						printf("Op��o Invalida. \n");
			
						system("pause");
						system("cls");
				
					}while(0);
					break;
				
					
			
					
				
			}
		
		
		
		
		
		
		
	}
	

	

}


