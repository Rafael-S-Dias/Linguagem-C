# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main() {
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");
	
	// Variaveis
	int idade;
	
	// Solicitação
	printf("Digite sua idade: ");
	scanf("%i", &idade);
	
	system("cls || clear");	
	
	// Exibir Resultados
	printf("Sua idade é de %i anos. \n", idade);
	if(idade < 18 || idade > 65) {
		printf("O cidadão não é obrigado a votar!");
	} else {
		printf("O cidadão está dentre a idade obrigatória para votar!");
	}
	
	return 0;
}
