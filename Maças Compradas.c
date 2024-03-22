#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");
	
	// Variaveis
	float precoMaca, custo; 
	int quantidadeMaca;
	
	// Solicitação
	printf("Escreva quantas maças foram compradas: ");
	scanf("%i", &quantidadeMaca);
	
	// Condicional
	if(quantidadeMaca >= 12) {
		precoMaca = 1.00;
	} else {
		precoMaca = 1.30;
	}
	
	// Calculos
	custo = precoMaca * quantidadeMaca;
	
	system("cls || clear");
	
	// Resultados
	printf("Você comprou %i maças! \n", quantidadeMaca);
	printf("O total a pagar é: R$%.2f", custo);
	
	
	
	return 0;
}
