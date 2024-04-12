# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>
# include <ctype.h>
# include <time.h>
# include <limits.h> 

# define TAM 5

int main() {
	setlocale(LC_ALL, "portuguese");
	
	// Variaveis
	char nomes[TAM][50];
	int idade[TAM], contador, reiniciar; 
	
	
	do {
		for(contador = 0; contador < TAM; contador++) {
			printf("Informe o nome da %i° pessoa: \n", contador+1);
			scanf("%s", &nomes[contador]);
			printf("Digite a idade da %i° pessoa: \n", contador+1);
			scanf("%i", &idade[contador]);
			system ("cls || clear");
		}

		// Resultados
		printf("Dados das pessoas selecionadas: \n");
		for(contador = 0; contador < TAM; contador++) {
			printf("Sr/Sra %s, possui %i anos de idade. \n", nomes[contador], idade[contador]);
		}
		
		// Reiniciar ou Fechar código
		printf("\n\nDeseja continuar com esse código? [S/N] \n");	
		scanf("%s", &reiniciar);
		reiniciar = toupper(reiniciar);
		
		system("cls || clear");
	
	} while (reiniciar == 'S');
	
	return 0;
	
}
