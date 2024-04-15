#include <stdio.h>
#include <locale.h>
# include <string.h>
# include <ctype.h>
# include <time.h>
# include <limits.h> 

# define TAM 6

int main() {
	setlocale(LC_ALL, "portuguese");
	// Variaveis
	int valores[TAM], contador;
	char reiniciar;
	
	do {
		for(contador = 0; contador < TAM; contador++) {
			do {
			printf("Digite seu %i° numero: ", contador+1);
			scanf("%i", &valores[contador]);
			if (valores[contador] < 0 || valores[contador] % 2 != 0) {
				printf("Valor Invalido! Tente novamente! \n");
				//
			}
			} while (valores[contador] < 0 || valores[contador] % 2 != 0);	
		}
	
		system("cls || clear");
		
		// Resultados
		printf("Numeros selecionados: \n");
		for(contador = TAM; contador > 0; contador--) {
			printf("%iº Valor: %i \n", contador, valores[contador-1]);
		}
		
		
		// Reiniciar ou Fechar código
		printf("\n\nDeseja continuar com esse código? [S/N] \n");	
		scanf("%s", &reiniciar);
		reiniciar = toupper(reiniciar);
		system("cls || clear");
	
	} while (reiniciar == 'S');
	
	return 0;
	
}
