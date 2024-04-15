#include <stdio.h>
#include <locale.h>
#include <limits.h>

#define TAM 100

int main() {
		setlocale(LC_ALL, "portuguese");
	
	// Variaveis
	int numeros[TAM], pares, impares = 0, positivos, negativos, contador;
	char reiniciar;
	
	do {
		
		while (numeros[contador] != 0) {
			printf("Escreva seu %i� numero: ", contador+1);
			scanf("%i", &numeros[contador]);

			if (numeros[contador] < 0) {
				negativos++;
				
			} else if (numeros[contador] > 0) {
				positivos++;
				
				if (numeros[contador] % 2 == 0) {
					pares++;
				} else {
					impares++;
				}
			}
			
			if (numeros[contador] != 0) {
				contador++;
			}
		}
		
		
		// Resultados 
		printf("\nA quantidade de n�meros inseridos foi: %i\n", contador);
		printf("A quantidade de n�meros positivos foi: %i\n", positivos);
		printf("A quantidade de n�meros negativos foi: %i\n", negativos);
		printf("A quantidade de n�meros pares positivos foi: %i\n", pares);
		printf("A quantidade de n�meros impares positivos foi: %i\n", impares);


		// Reiniciar ou Fechar c�digo
		printf("\n\nDeseja continuar com esse c�digo? [S/N] \n");	
		scanf("%s", &reiniciar);
		reiniciar = toupper(reiniciar);
		pares = 0, impares = 0, positivos = 0, negativos = 0, contador = 0;
		system("cls || clear");
	
	} while (reiniciar == 'S');
	
	return 0;
	
}
