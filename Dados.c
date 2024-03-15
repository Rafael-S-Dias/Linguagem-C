#include <stdio.h>

int main() {
	// Declarando variaveis
	char nome[100] = "Marta";
	char sexo = 'F';
	int idade = 20;
	float peso = 58.400;
	
	// Exibindo resultados
	printf("\n=== Exibindo resultados ===\n");
	printf("Nome: %s \n", nome);
	printf("Sexo: %c \n", sexo);
	printf("Idade: %i \n", idade);
	printf("Peso: %f \n", peso);

	return 0;
}
