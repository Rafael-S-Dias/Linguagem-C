# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>

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
				printf("Digite [s] para inserir mais uma nota \n" );
				printf("Digite [p] para ver quantas notas foram inseridas \n");
				printf("Digite [n] para ver a media das notas inseridas \n");
				scanf("%s", &caso);
				
				
				switch (caso) 
				{
					case 's' :
						soma += notas;
						contador++;
					break;
					
					case 'p' :
						printf("Foram inseridas %i notas. \n", contador);
					break;
					
					case 'n' :
						soma += notas;	
						media = soma / contador ;
						printf("\nSua media foi: %.2f\n", media);
						
					break;
					
					default :
						printf("ERRO! COMANDO INVALIDO!");
				}
					
			} while (caso == 's');
				
	
	// Reiniciar ou Fechar código
	printf("\n\nDeseja continuar com esse código? [s/n] \n");	
	scanf("%s", &reiniciar);
	soma = 0;
	contador = 1;
	system("cls || clear");
	
	} while (reiniciar == 's');	
	
	return 0;
}
