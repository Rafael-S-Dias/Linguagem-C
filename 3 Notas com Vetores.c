# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>
# include <ctype.h>
# include <time.h>
# include <limits.h> 

# define TAM 3

 main() {
	setlocale(LC_ALL, "portuguese");
	// Variaveis
	float notas[TAM];
	int contador;
	char reiniciar;
	
	do {
		for (contador = 0; contador < TAM; contador++) {
			printf("Digite sua %i° nota: ", contador + 1);
			scanf("%f", &notas[contador]);
			}
		system("cls || clear");
		
		printf("Suas notas foram: \n");
		for (contador = 0; contador < TAM; contador++) {
			printf("%i° nota: %.2f \n", contador + 1, notas[contador]);
			
		}





		// Reiniciar ou Fechar código
		printf("\n\nDeseja continuar com esse código? [S/N] \n");	
		scanf("%s", &reiniciar);
		reiniciar = toupper(reiniciar);
		
		system("cls || clear");
	
	} while (reiniciar == 'S');
	
	return 0;
}
