# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>

int main() {
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");

	// Variaveis
	int i;
	
	// Loop de Repetição
	printf("Numeros ímpares entre 1 e 20: \n");
	for(i = 1; i<= 20; i++) {
		if (i % 2 != 0) {
			printf("%d \n", i);
		}
	}
	return 0;
}
