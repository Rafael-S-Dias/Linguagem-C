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
	for(i = 1; i <= 3; i++) {
		printf("Digite sua %d° nota: ", i);
		scanf("%f", &notas);
		
		soma += notas;
	}
	
	// Calculos
	float media = soma / 3;
	
	// Resultados
	printf("\nSua média foi: %.2f \n", media);
	if (media >= 7) {
		printf("Parabéns! Você foi aprovado!!");
	} else if (media >= 4) {
		printf("Infelizmente você está de recuperação!");
	} else {
		printf("Infelizmente você foi reprovado!!");
	}

	return 0;
}
