#include <stdio.h>

int main(){
	// Declarando variaveis
	char nome[100];
	char sexo;
	int idade;
	float peso;
	
	// Solicitando os dados
	printf("Digite o seu nome: ");
	scanf("%s", &nome);
	
	fflush(stdin);

	printf("Digite o seu sexo - M ou F: ");
	scanf("%c", &sexo);
	
	printf("Digite o sua idade: ");
	scanf("%i", &idade);
	
	printf("Digite o seu peso: ");
	scanf("%f", &peso);
	
	// Exibindo resultados
	printf("\n=== Exibindo resultados ===\n");
	printf("Nome: %s \n", nome);
	printf("Sexo: %c \n", sexo);
	printf("Idade: %i \n", idade);
	printf("Peso: %f \n", peso);

	return 0;
	
}
