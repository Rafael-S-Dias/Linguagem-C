# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>

int main() {
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");

	// Variaveis
	char reiniciar;
	int i = 0;
	float notas, soma = 0, media;
	
	do {
		// Solicitação			
		for(i = 1; i <= 3; i++) {
			do {
				printf("Digite sua %dº nota: ", i);
				scanf("%f", &notas);
				
			} while (notas < 0 || notas > 10);
				
			soma += notas;
		} 
		// Calculos
		media = soma / 3;
			
		// Resultados
		printf("\nSua media foi: %.2f\n", media);
		if (media >= 7) {
			printf("Parabéns! Você foi aprovado!!");
		} else if (media >= 5) {
			printf("Infelizmente você está de recuperação!");
		} else {
			printf("Infelizmente você foi reprovado!!");
		}
	
	// Reiniciar ou Fechar código
	printf("\\nnDeseja continuar com esse código? [s/n] \n");	
	scanf("%s", &continuar);
	system("cls || clear");	
	
	} while (reiniciar == 's');	
	
	return 0;
}
