#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");
	
	// Variaveis
	float valor;
	
	// Solicitação de dados
	printf("Informe um valor desejado : ");
	scanf("%f", &valor);
	
	system("cls || clear");
	
	// Calculos
	float desconto = valor - (valor * 0.1);
	
	// Resultados
	printf("O valor selecionado foi: R$ %.2f \n", valor);
	printf("Com um desconto de 10%%, o valor agora se tornou: R$ %.2f", desconto);
	
	return 0;	
}
