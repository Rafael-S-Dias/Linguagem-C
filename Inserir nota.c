# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>

int main() {
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");

	// Variaveis
	char reiniciar, continuar;
	int contador;
	float notas, soma = 0, media;
	
	do {
		// Solicita??o			
			do {
				printf("Insira sua %dº nota: ", contador + 1);
				scanf("%f", &notas);
				
				printf("Deseja inserir mais uma nota? [s/n]");
				scanf("%s", &continuar);
				
				contador++;	
				soma += notas;
			} while (continuar == 's');
				
		
		// Calculos
		media = soma / contador ;
			
		// Resultados
		printf("\nSua media foi: %.2f\n", media);
		printf("Tiveram %i repetições", contador);
	
	// Reiniciar ou Fechar c?digo
	printf("\n\nDeseja continuar com esse código? [s/n] \n");	
	scanf("%s", &continuar);
	system("cls || clear");	
	
	} while (reiniciar == 's');	
	
	return 0;
}
