# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main() {
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");
	
	// Variaveis
	int idade;
	
	// Solicita��o
	printf("Digite sua idade: ");
	scanf("%i", &idade);
	
	system("cls || clear");	
	
	// Exibir Resultados
	printf("Sua idade � de %i anos. \n", idade);
	if(idade < 18 || idade > 65) {
		printf("O cidad�o n�o � obrigado a votar!");
	} else {
		printf("O cidad�o est� dentre a idade obrigat�ria para votar!");
	}
	
	return 0;
}
