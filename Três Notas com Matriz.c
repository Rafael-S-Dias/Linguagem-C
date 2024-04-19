#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM1 2
#define TAM2 3
#define APROV 7
#define REC 5

int main() {
	setlocale(LC_ALL, "portuguese");
	
// Variaveis
float notas[TAM1][TAM2], soma[TAM1], media[TAM1];
int contador, contador2;
char alunos[TAM1][200];


for (contador = 0; contador < TAM1; contador++) {
	printf("Digite o nome do %iº aluno: ", contador+1);
	scanf("%s", &alunos[contador]);
	
	for (contador2 = 0; contador2 < TAM2; contador2++){
		printf("Digite a %dº nota do aluno/aluna %s: ", contador2+1, alunos[contador]);
		scanf("%2f", &notas[contador][contador2]);
		
		soma[contador] += notas[contador][contador2];
		media[contador] = soma[contador] / TAM2;
	}
	printf("\n");
}	

system("cls || clear");

// Resultados
for (contador = 0; contador < TAM1; contador++) {
	printf("Boletim do aluno %s: \n", alunos[contador]);
	
	for (contador2 = 0; contador2 < TAM2; contador2++){
		printf("%iº nota: %.2f \n", contador2+1, notas[contador][contador2]);
		}
	//printf("\nSoma das medias: %.2f", soma[contador]);
	printf("\nMédia: %.2f \n", media[contador]);
	
	if (media[contador] >= APROV) {
		printf("Parabéns!! Você foi aprovado!");
	} else if (media[contador] >= REC && media[contador] < APROV) {
		printf("Você ficou de recuperação!");
	} else {
		printf("Infelizmente você foi reprovado!!");
	}
	printf("\n \n");
}

	return 0;
	
}
