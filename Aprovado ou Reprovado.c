#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");
	
	// Variaveis
	char nome[100];
	int idade;
	float primeiraNota;
	float segundaNota;
	float terceiraNota;
	
	// Solicitando dados
	printf("Escreva seu nome: ");
	scanf("%s", &nome);
	
	printf("Informe sua idade: "); 
	scanf("%i", &idade);
	
	printf("Digite sua primeira nota: ");
	scanf("%f", &primeiraNota);
	printf("Digite sua segunda nota: ");
	scanf("%f", &segundaNota);
	printf("Digite sua terceira nota: ");
	scanf("%f", &terceiraNota);
	
	// Calculos
	float media = (primeiraNota + segundaNota + terceiraNota) / 3;
	
	
	// Resultados
	system("cls || clear");
	
	printf("Aluno: %s \n", nome);
	printf("Idade de %i anos \n", idade);
	printf("Sua primeira nota foi: %.2f \n", primeiraNota);
	printf("Sua segunda nota foi: %.2f \n", segundaNota);
	printf("Sua terceira nota foi: %.2f \n", terceiraNota);
	if (media >= 7) {
		printf("Parabéns, você foi aprovado! Sua media foi de: %.2f", media);
	} else {
		printf("Infelizmente sua media não foi o suficiente para sua aprovação. Sua media foi de: %.2f", media);
	}

	
	return 0;
}
