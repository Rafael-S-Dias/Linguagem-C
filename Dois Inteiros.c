# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main() {
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");
	
	// Variaveis
	int primeiroNumero, segundoNumero, maiorNumero, menorNumero;
	
	// Solicita��o
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
	printf("A m�dia dos numeros selecionados �: %.2f \n", media);
	printf("A soma dos numeros �: %i \n", soma);
	printf("O produto desses numeros �: %i \n", produto);
	printf("O menor valor entre esses dois numeros �: %i \n", menorNumero);
	printf("E o maior valor �: %i \n", maiorNumero);
	if(primeiroNumero == segundoNumero) {
		printf("Os valores de maior numero e menor numero s�o iguais porque os dois numeros selecionados s�o iguais!");
	}
	
	return 0;
}
