#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM1 2
#define TAM2 3


int main() {
	setlocale(LC_ALL, "portuguese");
	
// Variaveis
float notas[TAM1][TAM2];
int contador, contador2;
char alunos[TAM1][200];


for (contador = 0; contador < TAM1; contador++) {
	printf("Digite o nome do %iº aluno: ", contador+1);
	scanf("%s", &alunos[contador]);
	
	for (contador2 = 0; contador2 < TAM2; contador2++){
		printf("Digite a %dº nota do aluno/aluna %s: ", contador2+1, alunos[contador]);
		scanf("%2f", &notas[contador][contador2]);
	}
	printf("\n");
}
s	

system("cls || clear");

// Resultados
for (contador = 0; contador < TAM1; contador++) {
	printf("Notas do %i aluno: \n", contador+1);
	
	for (contador2 = 0; contador2 < TAM2; contador2++){
	printf("%i nota: %.2f \n", contador2+1, notas[contador][contador2]);
	}
}
	
	
	
	
	
	
	return 0;
	
}
