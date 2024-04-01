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
	int notas, media, soma = 0, contador = 0;
	char reiniciar;
	do {	
		while (notas >= 0 ) {
			printf("Digite sua %iº nota: ", contador+1);
			scanf("%i", &notas);
			if (notas >= 0 ) {
			contador++;
			soma += notas;
			media = soma / contador;
			}	
		}
		// Exibindo Resultados
		printf("Sua media foi: %i", media);
		printf("\nSoma: %i", soma);
		printf("\nContador: %i", contador);
		
		
			
	// Reiniciar ou Fechar código
	printf("\n\nDeseja continuar com esse código? [S/N] \n");	
	scanf("%s", &reiniciar);
	reiniciar = toupper(reiniciar);
	soma = 0;
	contador = 0;
	notas = 0;
	system("cls || clear");
	
	} while (reiniciar == 'S');	
	
	return 0;
}
