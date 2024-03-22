#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");
	
	// Variaveis
	float altura, pesoIdeal;
	char sexo;
	
	// Solicitação 
	printf("Informe seu sexo, utilizando M ou F: ");
	scanf("%c", &sexo);
	
	printf("Informe sua altura: ");
	scanf("%f", &altura);
	
	sexo = toupper(sexo);
	
	switch (sexo) {
		case 'M':
			pesoIdeal = (72.7 * altura) - 58;
			break;
		case 'F' :
			pesoIdeal = (62.1 * altura)	- 44.7;
			break;
		default :
			printf("Opção Invalida!!!");	
	}
	
	system("cls || clear");
	
	// Resultados
	printf("Sua altura é de: %.2f Metros \n", altura);
	printf("Seu peso ideal é: %.2f Kgs ", pesoIdeal);
	
	return 0;
}
