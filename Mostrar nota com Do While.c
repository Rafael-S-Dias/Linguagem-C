# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>

int main() {
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");

	// Variaveis
	int i = 0;
	float nota;

	// Solicitação
	do {
		printf("Digite sua nota: ");
		scanf("%f", &nota);
		
		i++;
	} while (nota < 0 || nota > 10);
	
	// Resultados
	printf("\nSua nota foi: %.1f", nota);
	return 0;
}
