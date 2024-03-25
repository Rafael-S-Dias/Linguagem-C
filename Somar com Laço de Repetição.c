# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>

int main() {
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");

	// Variaveis
	int i, numeros[5], soma = 0;

	// Solicitação
	for(i = 1; i <= 5; i++) {
		printf("Digite o %d° numero desejado: ", i);
		scanf("%d", &numeros[i]);
		
		soma += numeros[i];
	}
	// Resultados
	printf("\n A soma dos numeros selecionados é: %d", soma);

	return 0;
}
