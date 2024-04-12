#include <stdio.h>
#include <locale.h>
# include <string.h>
# include <ctype.h>
# include <time.h>
# include <limits.h> 

# define TAM 3

int main() {
	setlocale(LC_ALL, "portuguese");
	
	// Variaveis
	int contador;
	float numeros[TAM];
	char reiniciar;
	
	do {
		for(contador = 0; contador < TAM; contador++) {
			printf("Digite seu %i° numero: ", contador+1);
			scanf("%f", &numeros[contador]);
			
			if (numeros[contador] < 0) {
				numeros[contador] = 0;
			}
		}
		system("cls || clear");
		
		// Resultados
		printf("Numeros selecionados: \n");
		for(contador = 0; contador < TAM; contador++) {
			printf("%iº Numero: %.1f \n", contador+1, numeros[contador]);
		}
		
		// Reiniciar ou Fechar código
		printf("\n\nDeseja continuar com esse código? [S/N] \n");	
		scanf("%s", &reiniciar);
		reiniciar = toupper(reiniciar);
		system("cls || clear");
	
	} while (reiniciar == 'S');
	
	return 0;
	
}
