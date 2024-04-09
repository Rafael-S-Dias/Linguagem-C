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
	float numeros[TAM], maiorNumero = INT_MIN, menorNumero = INT_MAX;
	int contador;
	char reiniciar;

		do{
			for (contador = 0; contador < TAM; contador++) {
				printf("Informe sua %i° nota: ", contador + 1);
				scanf("%f", &numeros[contador]);
				
				if (numeros[contador] > maiorNumero) {
					maiorNumero = numeros[contador];
				}
				if (numeros[contador] < menorNumero) {
					menorNumero = numeros[contador];
				}
			}
			system("cls || clear");
			
		
			// Resultados
			printf("Suas notas foram: \n");
			for (contador = 0; contador < TAM; contador++) {
				printf("%iº nota: %.2f \n", contador + 1, numeros[contador]);	
			}
			printf("O menor numero dentre os digitados foi: %.1f \n", menorNumero);
			printf("O maior numero dentre os digitados foi: %.1f \n", maiorNumero);
			
			
			
			// Reiniciar ou Fechar código
			printf("\n\nDeseja continuar com esse código? [S/N] \n");	
			scanf("%s", &reiniciar);
			reiniciar = toupper(reiniciar);
			menorNumero = 0, maiorNumero = 0;
			system("cls || clear");
		
		} while (reiniciar == 'S');
	
	return 0;
	
}
