#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 3


int main() {
	setlocale(LC_ALL, "portuguese");
	
	// Variaveis
	float notas[TAM][TAM], peso[TAM] = {3,3,4};
	float soma[TAM], multiplica = 0, media[TAM];
	int i, j;
	char disciplina[TAM][200];
	
	for (i=0; i < TAM; i++) {
		printf("Digite o nome da %iº disciplina: ", i+1);
		scanf("%s", &disciplina[i]);
		
		for (j=0; j < TAM; j++) {
		  do {
			printf("Digite sua %iº nota: ", j+1);
			scanf("%f", &notas[i][j]);
			
		} while (notas[i][j] < 0 || notas[i][j] > 10 );
			
			// Calculos 
			multiplica = notas[i][j] * peso[j];
			soma[i] += multiplica;
			media[i] = soma[i] / 10;
		}	
		
		printf("\n");
	}
	
	system("cls || clear");
	
	// Resultados 
	
	for (i=0; i < TAM; i++) {
		printf("Nome da %dª disciplina: %s \n", i+1,disciplina[i]);

		for (j=0; j < TAM; j++) { 
		printf("%iª nota: %.2f peso %.1f \n", j+1, notas[i][j], peso[j]);
		//printf("Soma: %.2f \n", soma[i]);
		}
	printf("Média pondrada: %.2f\n\n", media[i]);
		}
	
		return 0;
	
}
