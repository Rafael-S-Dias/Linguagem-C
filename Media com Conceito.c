#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");
	
	// Variaveis
	char nome[100];
	float primeiraNota, segundaNota, media;
	char conceito, aprovado[50];
	
	// Solicitação
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("Informe o valor de sua primeira nota: ");
	scanf("%f", &primeiraNota);
	
	printf("Informe o valor de sua segunda nota: ");
	scanf("%f", &segundaNota);
	
	// Calculos
	media = (primeiraNota + segundaNota) / 2;
	
	// Condicional
	if (media >= 9) {
		conceito = 'A';
	} else if (media >= 7.5) {
		conceito = 'B';
	} else if  (media >= 6) {
		conceito = 'C';
	} else if  (media >= 4) {
		conceito = 'D';
	} else {
		conceito = 'E';
	}
	
	if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
		strcpy(aprovado, "Aprovado!");
	} else if (conceito == 'D' || conceito == 'E') {
		strcpy(aprovado, "Reprovado!");
	} else {
		printf("ERRO!");
	}
	
	system("cls || clear");
	
	// Resultados
	printf("Nome do aluno: %s. \n", nome);
	printf("A sua primeria nota foi: %.2f \n", primeiraNota);
	printf("A sua segunda nota foi: %.2f \n", segundaNota);
	printf("Sua media foi: %.2f \n", media);
	printf("Seu conceito foi: %c \n", conceito);
	printf("Baseado em seu conceito, você foi: %s", aprovado);
	
	return 0;
}
