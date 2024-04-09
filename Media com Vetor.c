# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>
# include <ctype.h>
# include <time.h>
# include <limits.h> 

# define TAM 3

int main() {
	setlocale(LC_ALL, "portuguese");
	
	// Variaveis 
	float notas[TAM], soma = 0, media;
	int contador;
	char reiniciar;
	
	do {
		for (contador = 0; contador < TAM; contador++) {
			printf("Informe sua %iº nota: ", contador + 1);
			scanf("%f", &notas[contador]);
			soma += notas[contador];

		}	
		system("cls || clear");
		
		// Calculos 
		media = soma /TAM;
		
		// Resultados
		printf("Suas notas foram: \n");
		for (contador = 0; contador < TAM; contador++) {
			printf("%iº nota: %.2f \n", contador + 1, notas[contador]);	
		}
		printf("Enquanto sua media foi: %.2f", media);
	
	
		// Reiniciar ou Fechar código
		printf("\n\nDeseja continuar com esse código? [S/N] \n");	
		scanf("%s", &reiniciar);
		reiniciar = toupper(reiniciar);
		soma = 0, media = 0;
		system("cls || clear");
	
	} while (reiniciar == 'S');
	
	return 0;
}
