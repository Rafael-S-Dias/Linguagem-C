# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main() {
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");
	
	// Variaveis
	int primeiroNumero, segundoNumero, maiorNumero, menorNumero;
	
	// Solicitação
	printf("Digite seu primeiro numero desejado: ");
	scanf("%i", &primeiroNumero);
	
	printf("Digite seu segundo numero desejado: ");
	scanf("%i", &segundoNumero);
	
	// Calculos
	int soma = primeiroNumero + segundoNumero;
	float media = soma / 2;
	int produto = primeiroNumero * segundoNumero;
	if (primeiroNumero > segundoNumero) {
		maiorNumero = primeiroNumero;
		menorNumero = segundoNumero;
	} else {
		maiorNumero = segundoNumero;
		menorNumero = primeiroNumero;
	}
	
	system("cls || clear");
	
	// Exibir Resultados
	printf("A média dos numeros selecionados é: %.2f \n", media);
	printf("A soma dos numeros é: %i \n", soma);
	printf("O produto desses numeros é: %i \n", produto);
	printf("O menor valor entre esses dois numeros é: %i \n", menorNumero);
	printf("E o maior valor é: %i \n", maiorNumero);
	if(primeiroNumero == segundoNumero) {
		printf("Os valores de maior numero e menor numero são iguais porque os dois numeros selecionados são iguais!");
	}
	
	return 0;
}
