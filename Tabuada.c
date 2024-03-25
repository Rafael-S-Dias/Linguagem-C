# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>

int main() {
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");

	// Variaveis
	int i;
	
	for(i = 1; i<= 10; i++) {
		printf("%d x %d = %d \t", 2, i, i*2);
	}	
	
	printf("\t");
	
	for(i = 1; i<= 10; i++) {
		printf("%d x %d = %d \n", 3, i, i*3);
	}	
	printf("\t");
	
	for(i = 1; i<= 10; i++) {
		printf("%d x %d = %d \n", 5, i, i*5);
	}
	return 0;
}
