# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>
# include <ctype.h>
# include <time.h>
# include <limits.h> 

# define TAM 2

int main() {
	setlocale(LC_ALL, "portuguese");
	
	// Variaveis
	int numeros[TAM], contador, pares = 0, impares;
	char reiniciar;
	
	do {
		for (contador = 0; contador < TAM; contador++) {
			printf("Informe o %iº numero desejado: ", contador + 1);
			scanf("%i", &numeros[contador]);
			
			if (numeros[contador] % 2 == 0) {
				pares++;
			} else {
				impares++;
			}
		}
		system("cls || clear");
			
		
		// Resultados
		printf("Seus numeros foram: \n");
		for (contador = 0; contador < TAM; contador++) {
			printf("Seu %iº numero foi: %i \n", contador + 1, numeros[contador]);	
		}
		printf("A quantidade de numeros pares foi: %i\n", pares);
		printf("A quantidade de numeros impares foi: %i", impares);
	
		// Reiniciar ou Fechar código
		printf("\n\nDeseja continuar com esse código? [S/N] \n");	
		scanf("%s", &reiniciar);
		reiniciar = toupper(reiniciar);
		pares = 0, impares = 0;
		system("cls || clear");
	
	} while (reiniciar == 'S');
	
	return 0;
	
}
