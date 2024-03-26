# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>

int main() {
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");

	// Variaveis
	char reiniciar, continuar;
	int contador = 1;
	float notas, soma = 0, media;
	
	do {
		// Solicitação			
			do {
				printf("Insera sua %dº nota: ", contador);
				scanf("%f", &notas);
				
				printf("Deseja inserir mais uma nota? [s/n]");
				scanf("%s", &continuar);
				
				contador++;
			} while (continuar == 's');
				
			soma += notas;
		// Calculos
		media = soma / contador;
			
		// Resultados
		printf("\nSua media foi: %.2f\n", media);
		printf("Tiveram %i repetições", contador);
	
	// Reiniciar ou Fechar código
	printf("\n\nDeseja continuar com esse código? [s/n] \n");	
	scanf("%s", &continuar);
	system("cls || clear");	
	
	} while (reiniciar == 's');	
	
	return 0;
}
