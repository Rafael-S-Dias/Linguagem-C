# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>
# include <ctype.h>
# include <time.h>
# include <limits.h>
#include <stdbool.h>

int main() {
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");

	// Variaveis
	char login[50], senha[50], loginNovo[50], senhaNova[50], reiniciar;
	char loginCorreto[50] = "Rafael", senhaCorreta[50] = "1234"; 
	int menu, contador;
	bool acesso;

	do {
		do {
			// Solicitação de dados
			printf("========== MENU =========== \n");
			printf("Bem vindo! Como deseja prosseguir? \n");	
			printf("Criar uma conta [1] \n");	
			printf("Fazer login [2] \n");
			scanf("%i", &menu);
			system("cls || clear");
			
			switch(menu) {
			case 1:			
				printf("Crie seu login com o nome desejado: ");
				scanf("%s", loginNovo);
				
				printf("Crie sua senha: ");
				scanf("%s", senhaNova);
				system("cls||clear");
				break;
				
			case 2:
				printf("Informe seu login: ");
				scanf("%s", &login);
				
				printf("Informe sua senha: ");
				scanf("%s", &senha);
				
				if (strcmp(login, loginCorreto) == 0 && strcmp(senha, senhaCorreta) == 0) {
					printf("\nAcesso permitido! \n");
					printf("Bem vindo, %s !", loginCorreto);
					acesso = true;
					
				} else if (strcmp(login, loginNovo) == 0 && strcmp(senha, senhaNova) == 0) {
					printf("\nAcesso permitido! \n");
					printf("Bem vindo, %s !", loginNovo);
					acesso = true;
					
				} else {
					contador++;
					printf("Login e senha incorreto! \n");
					printf("Tentativa %i de 3 \n\n", contador);
					sleep(2);
					system("cls || clear");
				}
				break;
				
			default :
				printf("ERRO! COMANDO INVALIDO!");
				sleep(2);
				system("cls || clear");	
			}
		
		} while (contador < 3 && acesso != true);
		
		
		// Reiniciar ou Fechar código
		printf("\n\nDeseja continuar com esse código? [S/N] \n");	
		scanf("%s", &reiniciar);
		reiniciar = toupper(reiniciar);
		contador = 0;
		system("cls || clear");
	
	} while (reiniciar == 'S');	
	
	
	return 0;
}
