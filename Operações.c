#include <stdio.h>
#include <locale.h>

int main() {
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");
	
 	// Variaveis
	float primeiroNumero;
	float segundoNumero;

	
	// Solicitando dados
	printf("Digite seu primeiro numero: ");
	scanf("%f", &primeiroNumero);
	
	printf("Digite seu segundo numero: "); 
	scanf("%f", &segundoNumero);
	
	// Calculos
	float soma = primeiroNumero + segundoNumero;
	float subtracao = primeiroNumero - segundoNumero;
	float multiplicacao = primeiroNumero * segundoNumero;
	float divisao = primeiroNumero / segundoNumero;
	
	// Resultados
	printf("A soma vai ser igual �:  %.1f \n", soma);
	printf("A subtra��o vai ser igual �: %.1f \n", subtracao);
	printf("A multiplica��o vai ser igual �: %.1f \n", multiplicacao);
	printf("A divis�o vai ser igual �: %.1f \n", divisao);
	
	return 0;
}
