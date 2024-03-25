# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>

int main() {
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");

	// Variaveis
	int i;
	float notas, soma = 0;

	// Solicitação
	for(i = 1; i <= 4; i++) {
		printf("Digite sua %d° nota: ", i);
		scanf("%f", &notas);
		
		soma += notas;
	}
	
	// Calculos
	float media = soma / 4;
	
	// Resultados
	printf("Sua média foi: %.2f", media);

	return 0;
}
