#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");
	
	// Variaveis
	int primeiroNumero;
	
	// Solicita��o de dados
	printf("Digite o numero desejado: ");
	scanf("%i", &primeiroNumero);
	
	system("cls || clear");
	
	if (primeiroNumero % 2 == 0) {
		printf("O numero %i � Par.", primeiroNumero);	
	} else {
		printf("O numero %i � Impar.", primeiroNumero);
	}
	return 0;
}
