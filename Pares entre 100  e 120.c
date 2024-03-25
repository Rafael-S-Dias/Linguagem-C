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
	printf("Numeros pares entre 100 e 120: \n");
	for(i = 100; i<= 120; i++) {
		if (i % 2 == 0) {
			printf("%d \n", i);
		}
	}
	return 0;
}
