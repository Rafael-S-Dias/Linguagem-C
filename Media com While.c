# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>
# include <ctype.h>
# include <time.h>

int main() {
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");

	// Variaveis
	char reiniciar, caso;
	int contador = 1;
	float notas, soma = 0, media = 0;
	
	do {
		// Solicitação			
		do {
			printf("Insira sua %dº nota: ", contador);
			scanf("%f", &notas);
				
			printf("\nComo deseja prosseguir? \n");
			printf("Digite [S] para inserir mais uma nota \n" );
			printf("Digite [P] para ver quantas notas foram inseridas \n");
			printf("Digite [N] para ver a media das notas inseridas \n");
			printf("Resposta: ");
			scanf("%s", &caso);
			printf("\n");
			caso = toupper(caso);
				
			soma += notas;
				
			switch (caso) 
			{
				case 'S' :
					contador++;
					break;
					
				case 'P' :
					printf("Foram inseridas %i notas. \n", contador);
					printf("\nComo deseja prosseguir? \n");
					printf("Digite [s] para inserir mais uma nota \n" );
					printf("Digite [n] para ver a media das notas inseridas \n");
					scanf("%s", &caso);
					caso = toupper(caso);
					break;
					
				case 'N' :
					break;
					
				default :
					printf("ERRO! COMANDO INVALIDO!");
					sleep(2);
					contador++;
					printf("\nComo deseja prosseguir? \n");
					printf("Digite [S] para inserir mais uma nota \n" );
					printf("Digite [P] para ver quantas notas foram inseridas \n");
					printf("Digite [N] para ver a media das notas inseridas \n");
					printf("Resposta: ");
					scanf("%s", &caso);
					printf("\n");
					caso = toupper(caso);
			}
					
		} while (caso != 'N');

		// Exibindo Resultados 
		media = soma / contador;
		printf("\nSua media foi: %.2f\n", media);
	
	// Reiniciar ou Fechar código
	printf("\n\nDeseja continuar com esse código? [S/N] \n");	
	scanf("%s", &reiniciar);
	reiniciar = toupper(reiniciar);
	soma = 0;
	contador = 1;
	system("cls || clear");
	
	} while (reiniciar == 'S');	
	
	return 0;
}
