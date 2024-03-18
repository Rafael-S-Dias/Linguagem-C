#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");
	
	// Variaveis
	int numero;
	
	// Solicitação de dados
	printf("Digite o numero desejado: ");
	scanf("%i", &numero);
	
	system("cls || clear");
	
	// Calculos
	int numeroAntecessor = numero - 1;
	int numeroSucessor = numero + 1;
	
	
	// Resultados
	printf("Seu numero escolhido foi: %i \n", numero);
	printf("O numero antecessor ao seu numero escolhido é: %i \n", numeroAntecessor);
	printf("O numero sucessor ao seu numero escolhido é: %i \n", numeroSucessor);
	
	return 0;
}
