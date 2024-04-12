#include <stdio.h>
#include <locale.h>
# include <string.h>
# include <ctype.h>
# include <time.h>
# include <limits.h> 

# define TAM 10

int main() {
	setlocale(LC_ALL, "portuguese");
	
	// Variaveis
	int contador, quantidadeNegativos = 0;
	float numeros[TAM], soma;
	char reiniciar;
	
	do {
		for(contador = 0; contador < TAM; contador++) {
			printf("Digite seu %i° numero: ", contador+1);
			scanf("%f", &numeros[contador]);
			
			if (numeros[contador] >= 0) {
				soma += numeros[contador];
			} else {
				quantidadeNegativos++;
			}
		}
		system("cls || clear");
		
		// Resultados
		for(contador = 0; contador < TAM; contador++) {
			printf("%iº Numero: %.2f \n", contador+1, numeros[contador]);
		}
		printf("A soma dos numeros positivos foi: %.2f \n", soma);
		printf("A quantidade de numeros negativos digitados foi: %i \n", quantidadeNegativos);
		
		
		
		// Reiniciar ou Fechar código
		printf("\n\nDeseja continuar com esse código? [S/N] \n");	
		scanf("%s", &reiniciar);
		reiniciar = toupper(reiniciar);
		soma = 0, quantidadeNegativos = 0;
		system("cls || clear");
	
	} while (reiniciar == 'S');
	
	return 0;
	
}
