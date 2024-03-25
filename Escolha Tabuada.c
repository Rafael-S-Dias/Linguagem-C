# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>

int main() {
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");

	// Variaveis
	int i;
	int numero;
	
	// Solicitação
	printf("Digite um numero para ver sua tabuada: ");
	scanf("%d", &numero);
	
	printf("\n");
	
	// Loop de Repetição
	for(i = 1; i<= 10; i++) {
		printf("%d x %d = %d \n", numero, i, i*numero);
	}
	return 0;
}
