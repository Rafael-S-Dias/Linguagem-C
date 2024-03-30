# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>

int main() {
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");

	// Variaveis
	int i, numeros, pares = 0, impares = 0;

	// Solicitação
	for (i = 1; i <= 5; i++) {
		printf("Digite o %d° numero desejado: ", i);
		scanf("%d", &numeros);
		
		if(numeros % 2 == 0){
			pares++;
		} else {
			impares++;
		}
	}
	
	// Resultados
	printf("\nA quantidades de pares : %d \n", pares);
	printf("Sendo eles: ")
	printf("A quantidades de ímpares : %d", impares);
	
	return 0;
}
