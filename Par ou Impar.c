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
	
	if (primeiroNumero % 2 == 0) {
		printf("O numero %i é Par.", numero);	
	} else {
		printf("O numero %i é Impar.", numero);
	}
	return 0;
}
