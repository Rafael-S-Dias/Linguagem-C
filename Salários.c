#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");
	
	// Variaveis
	float salarioAtual;
	float salarioMinimo = 1412.00;
	
	// Solicitação de dados
	printf("Informe o valor do seu salario atualmente: ");
	scanf("%f", &salarioAtual);
	
	system("cls || clear");
	
	// Calculos
	float quantosSalarios = salarioAtual / salarioMinimo;
	
	// Resultados
	printf("Seu salário é de: R$ %.2f\n", salarioAtual);
	printf("Voce recebe um valor mensalmente equivalente à %.2f salarios minimos", quantosSalarios);
	
	return 0;	
}
