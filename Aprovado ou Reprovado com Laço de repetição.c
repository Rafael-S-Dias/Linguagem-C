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

	// Solicita��o
	for(i = 1; i <= 3; i++) {
		printf("Digite sua %d� nota: ", i);
		scanf("%f", &notas);
		
		soma += notas;
	}
	
	// Calculos
	float media = soma / 3;
	
	// Resultados
	printf("\nSua m�dia foi: %.2f \n", media);
	if (media >= 7) {
		printf("Parab�ns! Voc� foi aprovado!!");
	} else if (media >= 4) {
		printf("Infelizmente voc� est� de recupera��o!");
	} else {
		printf("Infelizmente voc� foi reprovado!!");
	}

	return 0;
}
