# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>

int main() {
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");

	// Variaveis
	int i = 0;
	float notas, soma = 0, media;

	// Solicitação			
	for(i = 1; i <= 2; i++) {
		do {
			printf("Digite sua %dº nota: ", i);
			scanf("%f", &notas);
			printf("Repetindo... \n");
			
		} while (notas < 0 || notas > 10);	
	//system("cls || clear");
		soma += notas;
	} 
	// Calculos
	media = soma / 2;
		
	// Resultados
	printf("\nSua media foi: %.2f", media);
	
	return 0;
}
