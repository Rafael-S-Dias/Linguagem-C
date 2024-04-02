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
	char reiniciar;
	int contador = 0, numeros, pares = 0, impares, soma = 0, somaPares = 0, somaImpares = 0;
	float mediaPares, mediaTotal;
	
	do {
		printf("Escreva o seu 1º numero desejado: ");
		scanf("%i", &numeros);
		
		// Solicitação
		while (numeros != 0) {
			if (numeros > 0) {
				contador++;
	
				if (numeros % 2 == 0 ) {
					pares++;
					somaPares += numeros;
					
				} else {
					impares++;
					somaImpares += numeros;
				}			
			}
			printf("Escreva o seu %iº numero desejado: ", contador + 1);
			scanf("%i", &numeros);	
			}	
			
		// Calculos
		soma = somaPares + somaImpares;
		mediaPares = somaPares / (float) contador;
		mediaTotal = soma / (float) contador;
			
		
		// Exibindo Resultados
		if (contador == 0) {
			printf("Nenhum numero posítivo foi digitado!");
		} else {
		printf("\nA quantidade de numeros pares foi: %i \n", pares);
		printf("A quantidade de numeros impares foi: %i \n", impares);
		printf("A media dos numeros pares foi: %.1f \n", mediaPares);
		printf("Enquanto a media geral dos numeros foi: %.2f \n", mediaTotal);
		printf("Contador: %i\n", contador);
		printf("Soma pares: %i\n", somaPares);
		printf("Soma impares: %i\n", somaImpares);
		printf("Soma : %i\n", soma);
		}
		
	// Reiniciar ou Fechar código
	printf("\n\nDeseja continuar com esse código? [S/N] \n");	
	scanf("%s", &reiniciar);
	reiniciar = toupper(reiniciar);
	contador = 0, numeros = 0, pares = 0, impares = 0, soma = 0, somaPares = 0, somaImpares = 0;
	system("cls || clear");
	
	} while (reiniciar == 'S');	
	
	return 0;
	
}
